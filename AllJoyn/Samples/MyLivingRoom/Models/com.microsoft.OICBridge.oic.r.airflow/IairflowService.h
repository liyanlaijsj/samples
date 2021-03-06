//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace com { namespace microsoft { namespace OICBridge { namespace oic { namespace r { namespace airflow {

public interface class IairflowService
{
public:
    // Implement this function to handle requests for the value of the Direction property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<airflowGetDirectionResult^>^ GetDirectionAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the Direction property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<airflowSetDirectionResult^>^ SetDirectionAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, Platform::String^ value);

    // Implement this function to handle requests for the value of the Range property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<airflowGetRangeResult^>^ GetRangeAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the Range property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<airflowSetRangeResult^>^ SetRangeAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, Platform::String^ value);

    // Implement this function to handle requests for the value of the Speed property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<airflowGetSpeedResult^>^ GetSpeedAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the Speed property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<airflowSetSpeedResult^>^ SetSpeedAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, int64 value);

};

} } } } } } 
