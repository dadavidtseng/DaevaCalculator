#include "ManualModule.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_MODULE(FManualModule, Manual)

void FManualModule::StartupModule()
{
	// 初始化模組邏輯（例如：註冊自定義 Slate Style）
}

void FManualModule::ShutdownModule()
{
	// 清理模組邏輯
}