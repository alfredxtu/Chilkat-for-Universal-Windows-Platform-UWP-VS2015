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

        public MainPage()
        {
            this.InitializeComponent();
            m_dispatcher = Windows.UI.Core.CoreWindow.GetForCurrentThread().Dispatcher;
        }

        private void button_Click(object sender, RoutedEventArgs e)
        {
            Chilkat.Crypt2 crypt = new Chilkat.Crypt2();

            bool success = crypt.UnlockComponent("Anything for 30-day trial");
            if (success != true)
            {
                Debug.WriteLine(crypt.LastErrorText);
                textBox1.Text = "Unlock failed, see Debug output for error information...";
                return;
            }

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

        private async void button1_Click(object sender, RoutedEventArgs e)
        {
            Chilkat.Http http = new Chilkat.Http();

            bool success = http.UnlockComponent("Anything for 30-day trial");
            if (success != true)
            {
                Debug.WriteLine(http.LastErrorText);
                textBox1.Text = "Unlock failed, see Debug output for error information...";
                return;
            }

            http.ReceiveRate += Http_ReceiveRate;
            http.ProgressInfo += Http_ProgressInfo;
            http.PercentDone += Http_PercentDone;
            StorageFolder folder = ApplicationData.Current.LocalFolder;
            textBox1.Text = folder.Path;

            http.VerboseLogging = true;

            success = await http.DownloadAsync("https://www.chilkatsoft.com/download/9.5.0.58/ChilkatAx-9.5.0-win32.zip", folder.Path + @"\chilkatAx.zip");
            //Debug.WriteLine(http.LastErrorText);
            //textBox2.Text = success.ToString();
            //Debug.WriteLine(sbProgressInfo.ToString());

            // GetStringAsync returns a Task<string>. That means that when you await the
            // task you'll get a string (urlContents).
           // Windows.Foundation.IAsyncOperation<bool> downloadTask = http.DownloadAsync("https://www.chilkatsoft.com/download/9.5.0.58/ChilkatAx-9.5.0-win32.zip", folder.Path + @"\chilkatAx.zip");

            // You can do work here that doesn't rely on the string from GetStringAsync.
            // DoIndependentWork();

            // The await operator suspends AccessTheWebAsync.
            //  - AccessTheWebAsync can't continue until getStringTask is complete.
            //  - Meanwhile, control returns to the caller of AccessTheWebAsync.
            //  - Control resumes here when getStringTask is complete. 
            //  - The await operator then retrieves the string result from getStringTask.
            // string urlContents = await getStringTask;
            //
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
