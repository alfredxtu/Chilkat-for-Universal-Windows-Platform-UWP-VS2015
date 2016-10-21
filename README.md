
# Chilkat v9.5.0.62 Runtime Component for Universal Windows apps

This repo is the full version (and trial) of the Chilkat Runtime Component for UWP applications using Visual Studio 2015 for Windows 10.  The Chilkat API contains both commercial and freeware classes.  Commercial classes must be licensed for use beyond 30 days.  The "Chilkat Bundle" provides licenses to all existing Chilkat commercial classes.

The Chilkat UWP Runtime Component is designed to run on desktop, mobile, and future devices that support the Universal Windows Platform.

## May also be Installed from the NuGet Package Manager

See [Chilkat Runtime Component for Universal Apps](https://www.nuget.org/packages/Chilkat.uwp/) 

## System requirements

**Client:** Windows 10

**Server:** Windows Server 2016 Technical Preview

**Phone:** Windows 10

## Build the Chilkat RTC and Samples

1. Download the ZIP and unzip.
2. Start Microsoft Visual Studio 2015 and select **File** \> **Open** \> **Project/Solution**.  Open the **ChilkatUWP.sln** solution located in the **ChilkatUWP** subdirectory.
3. The ChilkatUWP solution contains 4 projects: **Chilkat**, **SampleCsApp**, **SampleJsApp**, and **SampleVbApp**.   The Chilkat project is the Chilkat Runtime Component, and is referenced by each of the sample projects.
4. Build and run any sample.  Building the sample will automatically cause the referenced Chilkat runtime component to be built if necessary.


## Important Notes

- The purpose of the sample projects is only to get a first-time user "off the ground" by providing a project that references the Chilkat RTC, instantiates an object, and interacts with a few methods and properties.  
- Chilkat C# examples are located at [Chilkat C# WinRT Examples](http://www.example-code.com/csharp_winrt/default.asp "Chilkat C# WinRT Examples").
- Chilkat VB.NET examples are located at [Chilkat VB.NET WinRT Examples](http://www.example-code.com/vbnet_winrt/default.asp "Chilkat VB.NET WinRT Examples")
- Reference documentation: [Chilkat C# WinRT Reference Docs](http://www.chilkatsoft.com/refdoc/csharp_winrt.asp) and [Chilkat VB.NET Reference Docs](http://www.chilkatsoft.com/refdoc/vbnet_winrt.asp).


## The Chilkat Class View

When viewing the **Chilkat** project classes in Visual Studio (in the "Class View") there is much that can (and should) be ignored.  

- Your application will only use the classes located within the "Chilkat" namespace.
- You will notice classes named CkAsnW, CkAtomW, CkBounceW, etc.  These are the underlying C++ implementation classes and should be ignored.  They are not directly used by your application.
- You will notice classes named CxAtomProgress, CxBz2Progress, etc.  These are internal implementation classes and should be ignored.  They are not directly used by your application.

## The Underlying Chilkat Binary Libs

Located in the **chilkatBinaryLibs** directory are the pre-compiled underlying C++ implementations.  Chilkat does not provide source code for the contents of these libraries.  The **Chilkat** project links with these binary libs.  The C++ headers required by the **Chilkat** project are located in the **include** subdirectory.  Your application will never include these headers.


