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

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace SampleCsApp
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();
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
    }
}
