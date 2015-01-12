#ifndef MSAI_h
#define MSAI_h

#import "AppInsightsFeatureConfig.h"

#import "MSAITelemetryManager.h"
#import "MSAITelemetryManagerDelegate.h"

#if MSAI_FEATURE_CRASH_REPORTER
#import "MSAICrashManager.h"
#import "MSAICrashManagerDelegate.h"
#import "MSAICrashDetails.h"
#import "MSAICrashMetaData.h"
#endif /* MSAI_FEATURE_CRASH_REPORTER */

#if MSAI_FEATURE_METRICS
#import "MSAIMetricsManager.h"
#endif /* MSAI_FEATURE_METRICS */

// Notification message which AppInsightsManager is listening to, to retry requesting updated from the server
#define MSAINetworkDidBecomeReachableNotification @"MSAINetworkDidBecomeReachable"


/**
 *  MSAI Crash Reporter error domain
 */
typedef NS_ENUM (NSInteger, MSAICrashErrorReason) {
  /**
   *  Unknown error
   */
  MSAICrashErrorUnknown,
  /**
   *  API Server rejected app version
   */
  MSAICrashAPIAppVersionRejected,
  /**
   *  API Server returned empty response
   */
  MSAICrashAPIReceivedEmptyResponse,
  /**
   *  Connection error with status code
   */
  MSAICrashAPIErrorWithStatusCode
};
extern NSString *const __attribute__((unused)) kMSAICrashErrorDomain;


/**
 *  MSAI global error domain
 */
typedef NS_ENUM(NSInteger, MSAIErrorReason) {
  /**
   *  Unknown error
   */
  MSAIErrorUnknown
};
extern NSString *const __attribute__((unused)) kMSAIErrorDomain;


#endif
