// For an introduction to the Blank template, see the following documentation:
// http://go.microsoft.com/fwlink/?LinkId=232509
(function () {
	"use strict";

	var app = WinJS.Application;
	var activation = Windows.ApplicationModel.Activation;

	app.onactivated = function (args) {
		if (args.detail.kind === activation.ActivationKind.launch) {
			if (args.detail.previousExecutionState !== activation.ApplicationExecutionState.terminated) {
				// TODO: This application has been newly launched. Initialize your application here.
			} else {
				// TODO: This application was suspended and then terminated.
				// To create a smooth user experience, restore application state here so that it looks like the app never stopped running.
			}
			args.setPromise(WinJS.UI.processAll());

		    // Retrieve the button and register our event handler. 
			var helloButton = document.getElementById("helloButton");
			helloButton.addEventListener("click", buttonClickHandler, false);
        }
	};

	app.oncheckpoint = function (args) {
		// TODO: This application is about to be suspended. Save any state that needs to persist across suspensions here.
		// You might use the WinJS.Application.sessionState object, which is automatically saved and restored across suspension.
		// If you need to complete an asynchronous operation before your application is suspended, call args.setPromise().
	};


	function buttonClickHandler(eventInfo) {
	    var userName = document.getElementById("nameInput").value;

	    var crypt = new Chilkat.Crypt2();
        
	    var success = crypt.unlockComponent("Anything for 30-day trial");
	    if (success != true)
	    {
	        document.getElementById("greetingOutput").innerText = crypt.lastErrorText;
	        return;
	    }

	    crypt.cryptAlgorithm = "chacha20";

	    ////  The key length for chacha20 is always 256-bits.
	    crypt.keyLength = 256;
	    crypt.encodingMode = "hex";

	    var ivHex = "000000000000000000000002";
	    crypt.setEncodedIV(ivHex, "hex");

	    crypt.initialCount = 42;

	    var keyHex = "1c9240a5eb55d38af333888604f6b5f0473917c1402b80099dca5cbc207075c0";
	    crypt.setEncodedKey(keyHex, "hex");

	    var plainText = userName;

	    var encStr = crypt.encryptStringENC(plainText);

	    document.getElementById("greetingOutput").innerText = encStr;
	}

	app.start();
})();
