
//  StorPortRegistryRead  (6 * 4)
#define _StorPortRegistryRead
#ifndef _AMD64_
 #pragma comment (linker, "/export:StorPortRegistryRead=_StorPortRegistryRead_k8@24")
#else
 #pragma comment (linker, "/export:StorPortRegistryRead=StorPortRegistryRead_k8")
#endif


//  StorPortExtendedFunction (cdecl)
#ifndef _AMD64_
 #pragma comment (linker, "/export:StorPortExtendedFunction=_StorPortExtendedFunction_k8")
#else
 #pragma comment (linker, "/export:StorPortExtendedFunction=StorPortExtendedFunction_k8")
#endif






/////////////////////////////////////////
///      redirect if ...               //
/////////////////////////////////////////




/////////////////////////////////////////
///        default redirect            //
/////////////////////////////////////////

#pragma comment (linker, "/export:ScsiPortMoveMemory=storport.ScsiPortMoveMemory")
#pragma comment (linker, "/export:ScsiPortNotification=storport.ScsiPortNotification")
#pragma comment (linker, "/export:StorPortAllocateRegistryBuffer=storport.StorPortAllocateRegistryBuffer")
#pragma comment (linker, "/export:StorPortBusy=storport.StorPortBusy")
#pragma comment (linker, "/export:StorPortCompleteRequest=storport.StorPortCompleteRequest")
#pragma comment (linker, "/export:StorPortConvertUlongToPhysicalAddress=storport.StorPortConvertUlongToPhysicalAddress")
#pragma comment (linker, "/export:StorPortDebugPrint=storport.StorPortDebugPrint")
#pragma comment (linker, "/export:StorPortDeviceBusy=storport.StorPortDeviceBusy")
#pragma comment (linker, "/export:StorPortDeviceReady=storport.StorPortDeviceReady")
//#pragma comment (linker, "/export:StorPortExtendedFunction=storport.StorPortExtendedFunction")
#pragma comment (linker, "/export:StorPortFreeDeviceBase=storport.StorPortFreeDeviceBase")
#pragma comment (linker, "/export:StorPortFreeRegistryBuffer=storport.StorPortFreeRegistryBuffer")
#pragma comment (linker, "/export:StorPortGetBusData=storport.StorPortGetBusData")
#pragma comment (linker, "/export:StorPortGetDeviceBase=storport.StorPortGetDeviceBase")
#pragma comment (linker, "/export:StorPortGetLogicalUnit=storport.StorPortGetLogicalUnit")
#pragma comment (linker, "/export:StorPortGetPhysicalAddress=storport.StorPortGetPhysicalAddress")
#pragma comment (linker, "/export:StorPortGetScatterGatherList=storport.StorPortGetScatterGatherList")
#pragma comment (linker, "/export:StorPortGetSrb=storport.StorPortGetSrb")
#pragma comment (linker, "/export:StorPortGetUncachedExtension=storport.StorPortGetUncachedExtension")
#pragma comment (linker, "/export:StorPortGetVirtualAddress=storport.StorPortGetVirtualAddress")
#pragma comment (linker, "/export:StorPortInitialize=storport.StorPortInitialize")
#pragma comment (linker, "/export:StorPortLogError=storport.StorPortLogError")
#pragma comment (linker, "/export:StorPortMoveMemory=storport.StorPortMoveMemory")
#pragma comment (linker, "/export:StorPortNotification=storport.StorPortNotification")
#pragma comment (linker, "/export:StorPortPause=storport.StorPortPause")
#pragma comment (linker, "/export:StorPortPauseDevice=storport.StorPortPauseDevice")
#pragma comment (linker, "/export:StorPortQuerySystemTime=storport.StorPortQuerySystemTime")
#pragma comment (linker, "/export:StorPortReadPortBufferUchar=storport.StorPortReadPortBufferUchar")
#pragma comment (linker, "/export:StorPortReadPortBufferUlong=storport.StorPortReadPortBufferUlong")
#pragma comment (linker, "/export:StorPortReadPortBufferUshort=storport.StorPortReadPortBufferUshort")
#pragma comment (linker, "/export:StorPortReadPortUchar=storport.StorPortReadPortUchar")
#pragma comment (linker, "/export:StorPortReadPortUlong=storport.StorPortReadPortUlong")
#pragma comment (linker, "/export:StorPortReadPortUshort=storport.StorPortReadPortUshort")
#pragma comment (linker, "/export:StorPortReadRegisterBufferUchar=storport.StorPortReadRegisterBufferUchar")
#pragma comment (linker, "/export:StorPortReadRegisterBufferUlong=storport.StorPortReadRegisterBufferUlong")
#pragma comment (linker, "/export:StorPortReadRegisterBufferUshort=storport.StorPortReadRegisterBufferUshort")
#pragma comment (linker, "/export:StorPortReadRegisterUchar=storport.StorPortReadRegisterUchar")
#pragma comment (linker, "/export:StorPortReadRegisterUlong=storport.StorPortReadRegisterUlong")
#pragma comment (linker, "/export:StorPortReadRegisterUshort=storport.StorPortReadRegisterUshort")
#pragma comment (linker, "/export:StorPortReady=storport.StorPortReady")
//#pragma comment (linker, "/export:StorPortRegistryRead=storport.StorPortRegistryRead")
#pragma comment (linker, "/export:StorPortRegistryWrite=storport.StorPortRegistryWrite")
#pragma comment (linker, "/export:StorPortResume=storport.StorPortResume")
#pragma comment (linker, "/export:StorPortResumeDevice=storport.StorPortResumeDevice")
#pragma comment (linker, "/export:StorPortSetBusDataByOffset=storport.StorPortSetBusDataByOffset")
#pragma comment (linker, "/export:StorPortSetDeviceQueueDepth=storport.StorPortSetDeviceQueueDepth")
#pragma comment (linker, "/export:StorPortStallExecution=storport.StorPortStallExecution")
#pragma comment (linker, "/export:StorPortSynchronizeAccess=storport.StorPortSynchronizeAccess")
#pragma comment (linker, "/export:StorPortValidateRange=storport.StorPortValidateRange")
#pragma comment (linker, "/export:StorPortWritePortBufferUchar=storport.StorPortWritePortBufferUchar")
#pragma comment (linker, "/export:StorPortWritePortBufferUlong=storport.StorPortWritePortBufferUlong")
#pragma comment (linker, "/export:StorPortWritePortBufferUshort=storport.StorPortWritePortBufferUshort")
#pragma comment (linker, "/export:StorPortWritePortUchar=storport.StorPortWritePortUchar")
#pragma comment (linker, "/export:StorPortWritePortUlong=storport.StorPortWritePortUlong")
#pragma comment (linker, "/export:StorPortWritePortUshort=storport.StorPortWritePortUshort")
#pragma comment (linker, "/export:StorPortWriteRegisterBufferUchar=storport.StorPortWriteRegisterBufferUchar")
#pragma comment (linker, "/export:StorPortWriteRegisterBufferUlong=storport.StorPortWriteRegisterBufferUlong")
#pragma comment (linker, "/export:StorPortWriteRegisterBufferUshort=storport.StorPortWriteRegisterBufferUshort")
#pragma comment (linker, "/export:StorPortWriteRegisterUchar=storport.StorPortWriteRegisterUchar")
#pragma comment (linker, "/export:StorPortWriteRegisterUlong=storport.StorPortWriteRegisterUlong")
#pragma comment (linker, "/export:StorPortWriteRegisterUshort=storport.StorPortWriteRegisterUshort")
