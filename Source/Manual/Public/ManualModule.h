//----------------------------------------------------------------------------------------------------
// ManualModule.h
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogManual, Log, All);

/**
 * Manual 模組的公開介面
 * 其他模組可以通過此介面與 Manual 模組互動
 */
class MANUAL_API FManualModule : public IModuleInterface
{
public:
	/** IModuleInterface 實作 */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

};