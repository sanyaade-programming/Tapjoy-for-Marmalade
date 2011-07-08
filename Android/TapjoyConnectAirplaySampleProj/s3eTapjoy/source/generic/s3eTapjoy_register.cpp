/*
 * WARNING: this is an autogenerated file and will be overwritten by
 * the extension interface script.
 */
/*
 * This file contains the automatically generated loader-side
 * functions that form part of the extension.
 *
 * This file is awlays compiled into all loaders but compiles
 * to nothing if this extension is not enabled in the loader
 * at build time.
 */
#include "IwDebug.h"
#include "s3eTapjoy_autodefs.h"
#include "s3eEdk.h"
#include "s3eTapjoy.h"
//Declarations of Init and Term functions
extern s3eResult s3eTapjoyInit();
extern void s3eTapjoyTerminate();


const char* s3eTapjoyGetErrorString()
{
#ifdef S3E_STORE_ERROR_STRINGS
    return s3eEdkErrorGetString(S3E_EXT_TAPJOY_HASH);
#else
    return NULL;
#endif
}

s3eTapjoyError s3eTapjoyGetError()
{
    return (s3eTapjoyError) s3eEdkErrorGet(S3E_EXT_TAPJOY_HASH);
}

#ifdef I3D_OS_IPHONE

static s3eResult TapjoyRequestConnect_wrap(const char* appID, const char* secretKey)
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoyRequestConnect"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoyRequestConnect, 2, appID, secretKey);
}

static s3eResult TapjoyActionComplete_wrap(const char* actionID)
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoyActionComplete"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoyActionComplete, 1, actionID);
}

static s3eResult TapjoySetUserID_wrap(const char* userID)
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoySetUserID"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoySetUserID, 1, userID);
}

static s3eResult TapjoyShowOffers_wrap()
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoyShowOffers"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoyShowOffers, 0);
}

static s3eResult TapjoyShowOffersWithCurrenyID_wrap(const char* currencyID, s3eBool enableCurrencySelector)
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoyShowOffersWithCurrenyID"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoyShowOffersWithCurrenyID, 2, currencyID, enableCurrencySelector);
}

static s3eResult TapjoyGetTapPoints_wrap(TapjoyGetTapPointsCallbackFn callbackFn, void* userData)
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoyGetTapPoints"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoyGetTapPoints, 2, callbackFn, userData);
}

static s3eResult TapjoySpendTapPoints_wrap(int amount, TapjoySpendTapPointsCallbackFn callbackFn, void* userData)
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoySpendTapPoints"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoySpendTapPoints, 3, amount, callbackFn, userData);
}

static s3eResult TapjoyAwardTapPoints_wrap(int amount, TapjoyAwardTapPointsCallbackFn callbackFn, void* userData)
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoyAwardTapPoints"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoyAwardTapPoints, 3, amount, callbackFn, userData);
}

static s3eResult TapjoyShowVirtualGoods_wrap()
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoyShowVirtualGoods"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoyShowVirtualGoods, 0);
}

static TapjoyVGStoreItem* TapjoyGetPurchasedItem_wrap(int index)
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoyGetPurchasedItem"));
    return (TapjoyVGStoreItem*)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoyGetPurchasedItem, 1, index);
}

static TapjoyVGStoreItem* TapjoyGetAvailableItem_wrap(int index)
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoyGetAvailableItem"));
    return (TapjoyVGStoreItem*)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoyGetAvailableItem, 1, index);
}

static s3eResult TapjoyGetFeaturedApp_wrap(TapjoyGetFeaturedAppCallbackFn callbackFn, void* userData)
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoyGetFeaturedApp"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoyGetFeaturedApp, 2, callbackFn, userData);
}

static s3eResult TapjoyShowFeaturedAppFullScreenAd_wrap()
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoyShowFeaturedAppFullScreenAd"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoyShowFeaturedAppFullScreenAd, 0);
}

static s3eResult TapjoySetFeaturedAppDisplayCount_wrap(int count)
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoySetFeaturedAppDisplayCount"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoySetFeaturedAppDisplayCount, 1, count);
}

static s3eResult TapjoySetTransitionEffect_wrap(int transition)
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoySetTransitionEffect"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoySetTransitionEffect, 1, transition);
}

static s3eResult TapjoySetOffersNavBarImage_wrap(const char* pPNGFilename)
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoySetOffersNavBarImage"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoySetOffersNavBarImage, 1, pPNGFilename);
}

static s3eResult TapjoySetUserDefinedColor_wrap(int your_color_in_0xAAARRGGBB_format)
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoySetUserDefinedColor"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoySetUserDefinedColor, 1, your_color_in_0xAAARRGGBB_format);
}

static s3eResult TapjoyGetDisplayAd_wrap(const char* adContentSize, s3eBool shouldRefreshAd, TapjoyGetDisplayAdCallbackFn callbackFn, void* userData)
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoyGetDisplayAd"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoyGetDisplayAd, 4, adContentSize, shouldRefreshAd, callbackFn, userData);
}

static s3eResult TapjoySetDisplayAdView_wrap(int left, int top, int width, int height)
{
    IwTrace(TAPJOY_VERBOSE, ("calling s3eTapjoy func on main thread: TapjoySetDisplayAdView"));
    return (s3eResult)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)TapjoySetDisplayAdView, 4, left, top, width, height);
}

#define TapjoyRequestConnect TapjoyRequestConnect_wrap
#define TapjoyActionComplete TapjoyActionComplete_wrap
#define TapjoySetUserID TapjoySetUserID_wrap
#define TapjoyShowOffers TapjoyShowOffers_wrap
#define TapjoyShowOffersWithCurrenyID TapjoyShowOffersWithCurrenyID_wrap
#define TapjoyGetTapPoints TapjoyGetTapPoints_wrap
#define TapjoySpendTapPoints TapjoySpendTapPoints_wrap
#define TapjoyAwardTapPoints TapjoyAwardTapPoints_wrap
#define TapjoyShowVirtualGoods TapjoyShowVirtualGoods_wrap
#define TapjoyGetPurchasedItem TapjoyGetPurchasedItem_wrap
#define TapjoyGetAvailableItem TapjoyGetAvailableItem_wrap
#define TapjoyGetFeaturedApp TapjoyGetFeaturedApp_wrap
#define TapjoyShowFeaturedAppFullScreenAd TapjoyShowFeaturedAppFullScreenAd_wrap
#define TapjoySetFeaturedAppDisplayCount TapjoySetFeaturedAppDisplayCount_wrap
#define TapjoySetTransitionEffect TapjoySetTransitionEffect_wrap
#define TapjoySetOffersNavBarImage TapjoySetOffersNavBarImage_wrap
#define TapjoySetUserDefinedColor TapjoySetUserDefinedColor_wrap
#define TapjoyGetDisplayAd TapjoyGetDisplayAd_wrap
#define TapjoySetDisplayAdView TapjoySetDisplayAdView_wrap

#endif /* I3D_OS_IPHONE */

s3eResult s3eTapjoyRegister(s3eTapjoyCallback cbid, s3eCallback fn, void* pData)
{
    return s3eEdkCallbacksRegister(S3E_EXT_TAPJOY_HASH, S3E_TAPJOY_CALLBACK_MAX, cbid, fn, pData, 0);
};

s3eResult s3eTapjoyUnRegister(s3eTapjoyCallback cbid, s3eCallback fn)
{
    return s3eEdkCallbacksUnRegister(S3E_EXT_TAPJOY_HASH, S3E_TAPJOY_CALLBACK_MAX, cbid, fn);
}

void s3eTapjoyRegisterExt()
{
    /* fill in the function pointer struct for this extension */
    void* funcPtrs[23];
    funcPtrs[0] = (void*)s3eTapjoyRegister;
    funcPtrs[1] = (void*)s3eTapjoyUnRegister;
    funcPtrs[2] = (void*)s3eTapjoyGetErrorString;
    funcPtrs[3] = (void*)s3eTapjoyGetError;
    funcPtrs[4] = (void*)TapjoyRequestConnect;
    funcPtrs[5] = (void*)TapjoyActionComplete;
    funcPtrs[6] = (void*)TapjoySetUserID;
    funcPtrs[7] = (void*)TapjoyShowOffers;
    funcPtrs[8] = (void*)TapjoyShowOffersWithCurrenyID;
    funcPtrs[9] = (void*)TapjoyGetTapPoints;
    funcPtrs[10] = (void*)TapjoySpendTapPoints;
    funcPtrs[11] = (void*)TapjoyAwardTapPoints;
    funcPtrs[12] = (void*)TapjoyShowVirtualGoods;
    funcPtrs[13] = (void*)TapjoyGetPurchasedItem;
    funcPtrs[14] = (void*)TapjoyGetAvailableItem;
    funcPtrs[15] = (void*)TapjoyGetFeaturedApp;
    funcPtrs[16] = (void*)TapjoyShowFeaturedAppFullScreenAd;
    funcPtrs[17] = (void*)TapjoySetFeaturedAppDisplayCount;
    funcPtrs[18] = (void*)TapjoySetTransitionEffect;
    funcPtrs[19] = (void*)TapjoySetOffersNavBarImage;
    funcPtrs[20] = (void*)TapjoySetUserDefinedColor;
    funcPtrs[21] = (void*)TapjoyGetDisplayAd;
    funcPtrs[22] = (void*)TapjoySetDisplayAdView;

    /*
     * Flags that specify the extension's use of locking and stackswitching
     */
    int flags[23] = { 0 };

    /*
     * Register the extension
     */
    s3eEdkRegister("s3eTapjoy", funcPtrs, sizeof(funcPtrs), flags, s3eTapjoyInit, s3eTapjoyTerminate, 0);
}

#if !defined S3E_BUILD_S3ELOADER

#if defined S3E_EDK_USE_STATIC_INIT_ARRAY
int s3eTapjoyStaticInit()
{
    void** p = g_StaticInitArray;
    void* end = p + g_StaticArrayLen;
    while (*p) p++;
    if (p < end)
        *p = (void*)&s3eTapjoyRegisterExt;
    return 0;
}

int g_s3eTapjoyVal = s3eTapjoyStaticInit();

#elif defined S3E_EDK_USE_DLLS
S3E_EXTERN_C S3E_DLL_EXPORT void RegisterExt()
{
    s3eTapjoyRegisterExt();
}
#endif

#endif