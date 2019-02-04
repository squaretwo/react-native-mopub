#import <React/RCTBridgeModule.h>
#import "MPInterstitialAdController.h"
#import <React/RCTEventEmitter.h>

@interface RNMoPubInterstitial : RCTEventEmitter <RCTBridgeModule, MPInterstitialAdControllerDelegate>

@property (nonatomic, retain) MPInterstitialAdController *interstitial;

@end
