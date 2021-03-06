// Generated by Apple Swift version 4.2.1 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import EVReflection;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="CirrentSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC10CirrentSDK11BaseNetwork")
@interface BaseNetwork : EVObject
/// BSSID for the WiFi network
@property (nonatomic, copy) NSString * _Nonnull bssid;
/// <ul>
///   <li>
///     This property will contain the text representation of the hex bytes if SSID contains non-ASCII characters.
///   </li>
///   <li>
///     <p>
///   </li>
///   <li>
///     For example,  {@link #hexSsid} will
///   </li>
///   <li>
///     contain: f09f93b6f09f8c89f09f93b6f09f93b6f09f8c89f09f93b6f09f93b6f09f8c89 if SSID consists of
///   </li>
///   <li>
///     the following emojis encoded using UTF-8 “📶🌉📶📶🌉📶📶🌉”
///   </li>
///   <li>
///     <p>
///   </li>
///   <li>
///     You can decode {@link #hexSsid} using {@link #getDecodedSsid()} method.
///   </li>
/// </ul>
@property (nonatomic, copy) NSString * _Nonnull hexSsid;
/// <ul>
///   <li>
///     SSID for the WiFi network.
///   </li>
///   <li>
///     Immediately after the new value is stored “didSet” observer determines if SSID contains non-ASCII characters and sets
///   </li>
///   <li>
///     appropriate SSID property ({@link #ssid} or {@link #hexSsid}).
///   </li>
///   <li>
///     <p>
///   </li>
///   <li>
///     Encodes SSID to the text representation of the hex bytes in case of non-ASCII characters.
///   </li>
/// </ul>
@property (nonatomic, copy) NSString * _Nonnull ssid;
/// Returns existing SSID.
///
/// returns:
/// {@link #hexSsid} if presented
/// or {@link #ssid} if not
- (NSString * _Nonnull)getPresentedSsid SWIFT_WARN_UNUSED_RESULT;
/// <ul>
///   <li>
///     This function decodes {@link #hexSsid} using UTF-8.
///   </li>
///   <li>
///   </li>
///   <li>
///     <ul>
///       <li>
///         returns: Decoded (using UTF-8 charset) string
///       </li>
///     </ul>
///   </li>
///   <li>
///     or {@link #ssid} if something wrong with {@link #hexSsid}
///   </li>
///   <li>
///     or empty string.
///   </li>
/// </ul>
- (NSString * _Nonnull)getDecodedSsid SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Service that sends credentials direcly to device over Bluetooth LE
SWIFT_CLASS("_TtC10CirrentSDK16BluetoothService")
@interface BluetoothService : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




/// Common error class
SWIFT_CLASS("_TtC10CirrentSDK12CirrentError")
@interface CirrentError : EVObject
/// Unique code for each error
@property (nonatomic, copy) NSString * _Nonnull code;
/// Human-readable error message
@property (nonatomic, copy) NSString * _Nonnull message;
/// HTTP response code
@property (nonatomic, copy) NSString * _Nonnull statusCode;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Main entry point to the Cirrent SDK
SWIFT_CLASS("_TtC10CirrentSDK14CirrentService")
@interface CirrentService : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ProviderKnownNetwork;
@class UIImage;

/// Information about a device
SWIFT_CLASS("_TtC10CirrentSDK6Device")
@interface Device : EVObject
/// Whether this device supports an Identify action
@property (nonatomic) BOOL identifyingActionEnabled;
/// Whether this device supports a User action
@property (nonatomic) BOOL userActionEnabled;
/// Whether this device has confirmed ownership (by the completion of the user action)
@property (nonatomic) BOOL confirmedOwnerShip;
/// How long this device has been up (in seconds)
@property (nonatomic) double uptime;
/// Unique string for this device
@property (nonatomic, copy) NSString * _Nonnull deviceId;
/// Description of this type of device
@property (nonatomic, copy) NSString * _Nonnull deviceType;
/// The name of the provider if a provider’s ZipKey network was used to onboard this device
@property (nonatomic, copy) NSString * _Nonnull providerAttribution;
/// The provider logo, if a provider’s ZipKey network was used to onboard this device
@property (nonatomic, copy) NSString * _Nonnull providerAttributionLogo;
/// The URL to learn more about the provider whose ZipKey network was used to onboard this device
@property (nonatomic, copy) NSString * _Nonnull providerAttributionLearnMoreURL;
/// The friendly name the user assigned to this device
@property (nonatomic, copy) NSString * _Nonnull friendlyName;
/// Human-readable description of what the identify action will look like, e,g. light will flash 3 times
@property (nonatomic, copy) NSString * _Nonnull identifyingActionDescription;
/// Human-readable description of what user action to perform, e.g. press volume-up button
@property (nonatomic, copy) NSString * _Nonnull userActionDescription;
/// List of provider networks for which the provider has credentials
@property (nonatomic, copy) NSArray<ProviderKnownNetwork *> * _Nonnull providerKnownNetworkList;
/// Picture of this device
@property (nonatomic, copy) NSString * _Nullable imageURL;
/// Picture of this device as a UIImage
@property (nonatomic, strong) UIImage * _Nullable imageView;
/// Picture of this device as a UI Image (used in demo flow)
@property (nonatomic, strong) UIImage * _Nullable imageViewDemo;
/// Image of the brand logo for this product brand
@property (nonatomic, copy) NSString * _Nullable brandImageUrl;
/// Picture of the brand logo as a UIImage
@property (nonatomic, strong) UIImage * _Nullable brandImageView;
/// Name of the brand associated with this product
@property (nonatomic, copy) NSString * _Nonnull brandName;
/// Name of the company associated with this product
@property (nonatomic, copy) NSString * _Nonnull accountLogo;
/// Is this product able to report that a user action was taken
- (BOOL)isUserActionEnabled SWIFT_WARN_UNUSED_RESULT;
/// Is this device able to perform an identify action
- (BOOL)isIdentifyingActionEnabled SWIFT_WARN_UNUSED_RESULT;
/// Get provider information if the provider has credentials for the network the phone is on
- (ProviderKnownNetwork * _Nullable)getProviderKnownNetwork SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Devices that are available for onboarding
SWIFT_CLASS("_TtC10CirrentSDK9DeviceDto")
@interface DeviceDto : EVObject
/// List of nearby devices
@property (nonatomic, copy) NSArray<Device *> * _Nonnull devices;
/// Json web token
@property (nonatomic, copy) NSString * _Nonnull jwt;
/// Provider known network
@property (nonatomic) BOOL providerKnowNetwork;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ProviderKnownNetwork;

/// Information about a network that the device knows about
SWIFT_CLASS("_TtC10CirrentSDK18DeviceKnownNetwork")
@interface DeviceKnownNetwork : BaseNetwork
/// Last connection status for the device on this network (JOINED, FAILED, DISCONNECTED)
@property (nonatomic, copy) NSString * _Nonnull status;
/// Credential id for this set of network credentials
@property (nonatomic, copy) NSString * _Nonnull credentialId;
/// Roaming consortium id, if there is one for this network
@property (nonatomic, copy) NSString * _Nonnull roamingId;
/// Priority of this network. Device will join the highest priority network in range
@property (nonatomic) NSInteger priority;
/// Security of this network
@property (nonatomic, copy) NSString * _Nonnull security;
/// How the device learned about this network - e.g. came from Cirrent cloud or over softAP
@property (nonatomic, copy) NSString * _Nonnull source;
/// If device failed to join this network, the reason for the failure
@property (nonatomic, copy) NSString * _Nonnull statusReason;
/// The time at which this status was last updated
@property (nonatomic, copy) NSString * _Nonnull timestamp;
/// The type of network (ZipKey or private)
@property (nonatomic, copy) NSString * _Nonnull networkType;
/// Whether a provider has the credentials for this network
@property (nonatomic, strong) ProviderKnownNetwork * _Nonnull providerKnownNetwork;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class WiFiNetwork;

/// Status of this device
SWIFT_CLASS("_TtC10CirrentSDK16DeviceStatusInfo")
@interface DeviceStatusInfo : EVObject
/// Whether this device is bound to a user account
@property (nonatomic, copy) NSString * _Nonnull bound;
/// The time at which this status was given by the device
@property (nonatomic, copy) NSString * _Nonnull timestamp;
/// The list of networks that the device can see (its scan list)
@property (nonatomic, copy) NSArray<WiFiNetwork *> * _Nonnull candidateNetworks;
/// The list of networks the device has credentials for
@property (nonatomic, copy) NSArray<DeviceKnownNetwork *> * _Nonnull deviceKnownNetworks;
/// Whether the device is bound to a user account
- (NSString * _Nonnull)getBound SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10CirrentSDK17GatewayIpProvider")
@interface GatewayIpProvider : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Log service. All logs are uploaded to Cirrent cloud and will appear in Log Explorer
SWIFT_CLASS("_TtC10CirrentSDK10LogService")
@interface LogService : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC10CirrentSDK8NetUtils")
@interface NetUtils : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Information about a private network
SWIFT_CLASS("_TtC10CirrentSDK18PrivateNetworkInfo")
@interface PrivateNetworkInfo : EVObject
/// Priority of this network
@property (nonatomic) NSInteger priority;
/// Whether it is a hidden (non-broadcast) network
@property (nonatomic) BOOL hidden;
/// The SSID for this network
@property (nonatomic, copy) NSString * _Nonnull ssid;
@property (nonatomic, copy) NSString * _Nonnull hexSsid;
/// The security flags for this network
@property (nonatomic, copy) NSString * _Nonnull security;
/// The pre-shared key for this network, if a PSK network
@property (nonatomic, copy) NSString * _Nonnull preSharedKey;
/// The pre-shared key encrypted with the device SCD key
@property (nonatomic, copy) NSString * _Nonnull encryptedPreSharedKey;
- (BOOL)skipPropertyValue:(id _Nonnull)value key:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Service that sends credentials direcly to device over SoftAP
SWIFT_CLASS("_TtC10CirrentSDK13SoftApService")
@interface SoftApService : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




/// WiFi network
SWIFT_CLASS("_TtC10CirrentSDK11WiFiNetwork")
@interface WiFiNetwork : BaseNetwork
/// Frequency that this WiFi network is broadcasting on
@property (nonatomic) NSInteger frequency;
/// Security flags
@property (nonatomic, copy) NSString * _Nonnull flags;
/// Signal level for this WiFi network
@property (nonatomic) NSInteger signalLevel;
/// Set if this network is broadcasting a Roaming Consortium id
@property (nonatomic, copy) NSString * _Nonnull anqpRoamingConsortium;
/// WiFi network capabilities
@property (nonatomic) NSInteger capabilities;
/// Quality of this network
@property (nonatomic) NSInteger quality;
/// Noise level on this network
@property (nonatomic) NSInteger noiseLevel;
/// Set if this network is broadcasting any information elements
@property (nonatomic, copy) NSString * _Nonnull informationElement;
/// Time at which this WiFi network scan was taken
@property (nonatomic, copy) NSString * _Nonnull timestamp;
- (void)initializationWithBssid:(NSString * _Nonnull)bssid ssid:(NSString * _Nonnull)ssid;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
