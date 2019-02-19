using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;
using System.Diagnostics;
using System.Threading.Tasks;
using Windows.Storage;
using System.Text;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace SampleCsApp
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        private Windows.UI.Core.CoreDispatcher m_dispatcher = null;

        private string m_unlockError = "";
        private bool m_unlocked = false;

        public MainPage()
        {
            this.InitializeComponent();
            m_dispatcher = Windows.UI.Core.CoreWindow.GetForCurrentThread().Dispatcher;

            Chilkat.Global glob = new Chilkat.Global();
            m_unlocked = glob.UnlockBundle("Anything for 30-day trial");
            if (!m_unlocked)
            {
                m_unlockError = glob.LastErrorText;
            }
        }

        private bool checkUnlocked()
        {
            if (!m_unlocked)
            {
                Debug.WriteLine(m_unlockError);
                textBox1.Text = "Unlock failed, see Debug output for error information...";
            }
            return m_unlocked;
        }

        private void button_Click(object sender, RoutedEventArgs e)
        {
            Chilkat.Crypt2 crypt = new Chilkat.Crypt2();

            if (!checkUnlocked()) return;

            crypt.CryptAlgorithm = "chacha20";

            //  The key length for chacha20 is always 256-bits.
            crypt.KeyLength = 256;
            crypt.EncodingMode = "hex";

            string ivHex = "000000000000000000000002";
            crypt.SetEncodedIV(ivHex, "hex");

            crypt.InitialCount = 42;

            string keyHex = "1c9240a5eb55d38af333888604f6b5f0473917c1402b80099dca5cbc207075c0";
            crypt.SetEncodedKey(keyHex, "hex");

            string plainText = textBox.Text;

            string encStr = crypt.EncryptStringENC(plainText);
            Debug.WriteLine(encStr);
            textBox1.Text = encStr;

            //  Now decrypt:
            string decStr = crypt.DecryptStringENC(encStr);
            Debug.WriteLine(decStr);

        }

        private StringBuilder sbProgressInfo = new StringBuilder();


        private async void button1a_Click(object sender, RoutedEventArgs e)
        {
            Chilkat.MailMan mailman = new Chilkat.MailMan();

            if (!checkUnlocked()) return;

            //  Set the SMTP server.
            mailman.SmtpHost = "smtp.gmail.com";
            mailman.SmtpUsername = "my_account@gmail.com";
            mailman.SmtpPassword = "myPassword";
            mailman.StartTLS = true;
            mailman.SmtpPort = 587;

            Chilkat.Email email = new Chilkat.Email();
            email.Subject = "This is a test";
            email.Body = "This is a test";
            email.From = "my_account@gmail.com";
            email.AddTo("Matt", "matt@example.com");

            mailman.VerboseLogging = true;
            bool success = await mailman.SendEmailAsync(email);

            if (success != true)
            {
                textBox1.Text = mailman.LastErrorText;
                return;
            }

            textBox1.Text = "email sent.";

            success = await mailman.CloseSmtpConnectionAsync();

        }


        private async void button1_Click(object sender, RoutedEventArgs e)
        {
            Chilkat.Http http = new Chilkat.Http();

            if (!checkUnlocked()) return;

            http.ReceiveRate += Http_ReceiveRate;
            http.ProgressInfo += Http_ProgressInfo;
            http.PercentDone += Http_PercentDone;
            StorageFolder folder = ApplicationData.Current.LocalFolder;
            //textBox1.Text = folder.Path;

            http.VerboseLogging = true;

            bool success = await http.DownloadAsync("https://chilkatdownload.com/9.5.0.76/chilkatax-9.5.0-win32.zip", folder.Path + @"\chilkatAx.zip");
            textBox1.Text = http.LastErrorText;

        }



        async private void Http_PercentDone(object sender, Chilkat.PercentDoneEventArgs eventArgs)
        {
            await m_dispatcher.RunAsync(Windows.UI.Core.CoreDispatcherPriority.Normal, () =>
            {
                //textBox2.Text = eventArgs.PercentDone.ToString();
                progressBar1.Value = eventArgs.PercentDone;

            });
        }

        async private void Http_ProgressInfo(object sender, Chilkat.ProgressInfoEventArgs eventArgs)
        {
            await m_dispatcher.RunAsync(Windows.UI.Core.CoreDispatcherPriority.Normal, () =>
            {
                //textBox2.Text = eventArgs.Name;
            });

        }

        async private void Http_ReceiveRate(object sender, Chilkat.DataRateEventArgs args)
        {
            await m_dispatcher.RunAsync(Windows.UI.Core.CoreDispatcherPriority.Normal, () =>
            {
                textBox2.Text = args.BytesPerSec.ToString();
            });
        }






    }
}
