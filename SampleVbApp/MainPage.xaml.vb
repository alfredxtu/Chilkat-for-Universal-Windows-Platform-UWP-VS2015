' The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

''' <summary>
''' An empty page that can be used on its own or navigated to within a Frame.
''' </summary>
Public NotInheritable Class MainPage
    Inherits Page

    Private Sub button_Click(sender As Object, e As RoutedEventArgs) Handles button.Click

        Dim crypt As New Chilkat.Crypt2()

        Dim success As Boolean = crypt.UnlockComponent("Anything for 30-day trial")
        If (success <> True) Then
            Debug.WriteLine(crypt.LastErrorText)
            Exit Sub
        End If


        '  Set the encryption algorithm to chacha20
        '  chacha20 is a stream cipher, and therefore no cipher mode applies.
        crypt.CryptAlgorithm = "chacha20"

        '  The key length for chacha20 is always 256-bits.
        crypt.KeyLength = 256

        '  EncodingMode specifies the encoding of the output for
        '  encryption, and the input for decryption.
        '  Valid modes are (case insensitive) "Base64", "modBase64", "Base32", "Base58", "UU",
        '  "QP" (for quoted-printable), "URL" (for url-encoding), "Hex",
        '  "Q", "B", "url_oauth", "url_rfc1738", "url_rfc2396", and "url_rfc3986".
        crypt.EncodingMode = "hex"

        '  The inputs to ChaCha20 encryption, specified by RFC 7539, are:
        '  1) A 256-bit secret key.
        '  2) A 96-bit nonce.
        '  3) A 32-bit initial count.
        '  The IV property is used to specify the chacha20 nonce.
        '  For a 96-bit nonce, the IV should be 12 bytes in length.
        ' 
        '  Note: Some implementations of chacha20, such as that used internally by SSH,
        '  use a 64-bit nonce and 64-bit count.  To do chacha20 encryption in this way,
        '  simply provide 8 bytes for the IV instead of 12 bytes.  Chilkat will then automatically
        '  use 8 bytes (64-bits) for the count.

        '  This example duplicates Test Vector #3 (for ChaCha20 encryption) from RFC 7539.
        Dim ivHex As String = "000000000000000000000002"
        crypt.SetEncodedIV(ivHex, "hex")

        crypt.InitialCount = 42

        Dim keyHex As String = "1c9240a5eb55d38af333888604f6b5f0473917c1402b80099dca5cbc207075c0"
        crypt.SetEncodedKey(keyHex, "hex")

        Dim plainText As String = textBox.Text

        Dim encStr As String = crypt.EncryptStringENC(plainText)
        Debug.WriteLine(encStr)
        textBox1.Text = encStr

        '  Now decrypt:
        Dim decStr As String = crypt.DecryptStringENC(encStr)
        Debug.WriteLine(decStr)
    End Sub
End Class
