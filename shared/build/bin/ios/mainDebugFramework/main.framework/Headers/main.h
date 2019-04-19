#import <Foundation/Foundation.h>

@class MainApi, MainRealNetworkClient, MainHttpBinClient, MainListMediaItemsResponse, MainGooglePhoto, MainListMediaItemsResponseCompanion, MainListMediaItemsResponse$serializer, MainKotlinArray, MainListMediaItemsRequest, MainFilter, MainListMediaItemsRequestCompanion, MainListMediaItemsRequest$serializer, MainListMediaItemsLastPageRequest, MainListMediaItemsLastPageRequestCompanion, MainListMediaItemsLastPageRequest$serializer, MainMediaTypeFilter, MainFilterCompanion, MainFilter$serializer, MainMediaType, MainMediaTypeFilterCompanion, MainMediaTypeFilter$serializer, MainKotlinEnum, MainListMediaItemError, MainListMediaItemErrorCompanion, MainListMediaItemError$serializer, MainMediaMetadata, MainMediaMetadataCompanion, MainMediaMetadata$serializer, MainGooglePhotoCompanion, MainGooglePhoto$serializer, MainInstagramResponseJson, MainInstagramMetaJson, MainInstagramPaginationJson, MainInstagramMediaJson, MainInstagramResponseJsonCompanion, MainInstagramResponseJson$serializer, MainInstagramMetaJsonCompanion, MainInstagramMetaJson$serializer, MainInstagramPaginationJsonCompanion, MainInstagramPaginationJson$serializer, MainInstagramResolutionJson, MainInstagramMediaJsonCompanion, MainInstagramMediaJson$serializer, MainInstagramImageJson, MainInstagramResolutionJsonCompanion, MainInstagramResolutionJson$serializer, MainInstagramImageJsonCompanion, MainInstagramImageJson$serializer, MainInstagramPhoto, MainInstagramPhotoCompanion, MainInstagramPhoto$serializer, MainPhotosRepository, MainKotlinUnit, MainKotlinx_serialization_runtime_nativeEnumDescriptor, MainKotlinx_serialization_runtime_nativeSerialKind, MainKotlinNothing, MainKotlinx_serialization_runtime_nativeUpdateMode, MainKotlinx_serialization_runtime_nativeSerialClassDescImpl;

@protocol MainNetworkClient, MainKotlinx_serialization_runtime_nativeKSerializer, MainKotlinx_serialization_runtime_nativeGeneratedSerializer, MainKotlinx_serialization_runtime_nativeSerializationStrategy, MainKotlinx_serialization_runtime_nativeEncoder, MainKotlinx_serialization_runtime_nativeSerialDescriptor, MainKotlinx_serialization_runtime_nativeDeserializationStrategy, MainKotlinx_serialization_runtime_nativeDecoder, MainKotlinComparable, MainKotlinIterator, MainKotlinx_serialization_runtime_nativeCompositeEncoder, MainKotlinx_serialization_runtime_nativeSerialModule, MainKotlinAnnotation, MainKotlinx_serialization_runtime_nativeCompositeDecoder, MainKotlinx_serialization_runtime_nativeSerialModuleCollector, MainKotlinKClass, MainKotlinKDeclarationContainer, MainKotlinKAnnotatedElement, MainKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface MainMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface MainMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface MainNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface MainByte : MainNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface MainUByte : MainNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface MainShort : MainNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface MainUShort : MainNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface MainInt : MainNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface MainUInt : MainNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface MainLong : MainNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface MainULong : MainNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface MainFloat : MainNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface MainDouble : MainNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface MainBoolean : MainNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Api")))
@interface MainApi : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property MainRealNetworkClient *client __attribute__((swift_name("client")));
@end;

__attribute__((swift_name("NetworkClient")))
@protocol MainNetworkClient
@required
@end;

__attribute__((swift_name("RealNetworkClient")))
@interface MainRealNetworkClient : KotlinBase <MainNetworkClient>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpBinClient")))
@interface MainHttpBinClient : MainRealNetworkClient
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("ListMediaItemsResponse")))
@interface MainListMediaItemsResponse : KotlinBase
- (instancetype)initWithMediaItems:(NSMutableArray<MainGooglePhoto *> *)mediaItems nextPageToken:(NSString * _Nullable)nextPageToken __attribute__((swift_name("init(mediaItems:nextPageToken:)"))) __attribute__((objc_designated_initializer));
@property NSMutableArray<MainGooglePhoto *> *mediaItems __attribute__((swift_name("mediaItems")));
@property NSString * _Nullable nextPageToken __attribute__((swift_name("nextPageToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemsResponse.Companion")))
@interface MainListMediaItemsResponseCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerializationStrategy")))
@protocol MainKotlinx_serialization_runtime_nativeSerializationStrategy
@required
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<MainKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDeserializationStrategy")))
@protocol MainKotlinx_serialization_runtime_nativeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<MainKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeKSerializer")))
@protocol MainKotlinx_serialization_runtime_nativeKSerializer <MainKotlinx_serialization_runtime_nativeSerializationStrategy, MainKotlinx_serialization_runtime_nativeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeGeneratedSerializer")))
@protocol MainKotlinx_serialization_runtime_nativeGeneratedSerializer <MainKotlinx_serialization_runtime_nativeKSerializer>
@required
- (MainKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemsResponse.$serializer")))
@interface MainListMediaItemsResponse$serializer : KotlinBase <MainKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (MainListMediaItemsResponse *)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (MainListMediaItemsResponse *)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(MainListMediaItemsResponse *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(MainListMediaItemsResponse *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemsRequest")))
@interface MainListMediaItemsRequest : KotlinBase
- (instancetype)initWithFilter:(MainFilter *)filter pageToken:(NSString * _Nullable)pageToken __attribute__((swift_name("init(filter:pageToken:)"))) __attribute__((objc_designated_initializer));
- (MainFilter *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MainListMediaItemsRequest *)doCopyFilter:(MainFilter *)filter pageToken:(NSString * _Nullable)pageToken __attribute__((swift_name("doCopy(filter:pageToken:)")));
@property (readonly) MainFilter *filter __attribute__((swift_name("filter")));
@property (readonly) NSString * _Nullable pageToken __attribute__((swift_name("pageToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemsRequest.Companion")))
@interface MainListMediaItemsRequestCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MainListMediaItemsRequest * _Nullable)fromStringString:(NSString *)string __attribute__((swift_name("fromString(string:)")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemsRequest.$serializer")))
@interface MainListMediaItemsRequest$serializer : KotlinBase <MainKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (MainListMediaItemsRequest *)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (MainListMediaItemsRequest *)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(MainListMediaItemsRequest *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(MainListMediaItemsRequest *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemsLastPageRequest")))
@interface MainListMediaItemsLastPageRequest : KotlinBase
- (instancetype)initWithFilters:(MainFilter *)filters __attribute__((swift_name("init(filters:)"))) __attribute__((objc_designated_initializer));
- (MainFilter *)component1 __attribute__((swift_name("component1()")));
- (MainListMediaItemsLastPageRequest *)doCopyFilters:(MainFilter *)filters __attribute__((swift_name("doCopy(filters:)")));
@property (readonly) MainFilter *filters __attribute__((swift_name("filters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemsLastPageRequest.Companion")))
@interface MainListMediaItemsLastPageRequestCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemsLastPageRequest.$serializer")))
@interface MainListMediaItemsLastPageRequest$serializer : KotlinBase <MainKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (MainListMediaItemsLastPageRequest *)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (MainListMediaItemsLastPageRequest *)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(MainListMediaItemsLastPageRequest *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(MainListMediaItemsLastPageRequest *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Filter")))
@interface MainFilter : KotlinBase
- (instancetype)initWithMediaTypeFilter:(MainMediaTypeFilter *)mediaTypeFilter __attribute__((swift_name("init(mediaTypeFilter:)"))) __attribute__((objc_designated_initializer));
- (MainMediaTypeFilter *)component1 __attribute__((swift_name("component1()")));
- (MainFilter *)doCopyMediaTypeFilter:(MainMediaTypeFilter *)mediaTypeFilter __attribute__((swift_name("doCopy(mediaTypeFilter:)")));
@property (readonly) MainMediaTypeFilter *mediaTypeFilter __attribute__((swift_name("mediaTypeFilter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Filter.Companion")))
@interface MainFilterCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Filter.$serializer")))
@interface MainFilter$serializer : KotlinBase <MainKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (MainFilter *)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (MainFilter *)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(MainFilter *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(MainFilter *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaTypeFilter")))
@interface MainMediaTypeFilter : KotlinBase
- (instancetype)initWithMediaTypes:(NSArray<MainMediaType *> *)mediaTypes __attribute__((swift_name("init(mediaTypes:)"))) __attribute__((objc_designated_initializer));
- (NSArray<MainMediaType *> *)component1 __attribute__((swift_name("component1()")));
- (MainMediaTypeFilter *)doCopyMediaTypes:(NSArray<MainMediaType *> *)mediaTypes __attribute__((swift_name("doCopy(mediaTypes:)")));
@property (readonly) NSArray<MainMediaType *> *mediaTypes __attribute__((swift_name("mediaTypes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaTypeFilter.Companion")))
@interface MainMediaTypeFilterCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaTypeFilter.$serializer")))
@interface MainMediaTypeFilter$serializer : KotlinBase <MainKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (MainMediaTypeFilter *)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (MainMediaTypeFilter *)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(MainMediaTypeFilter *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(MainMediaTypeFilter *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol MainKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface MainKotlinEnum : KotlinBase <MainKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(MainKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaType")))
@interface MainMediaType : MainKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MainMediaType *photo __attribute__((swift_name("photo")));
@property (class, readonly) MainMediaType *video __attribute__((swift_name("video")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MainMediaType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemError")))
@interface MainListMediaItemError : MainListMediaItemsResponse
- (instancetype)initWithCode:(int32_t)code mediaItem:(NSMutableArray<MainGooglePhoto *> *)mediaItem nextToken:(NSString * _Nullable)nextToken __attribute__((swift_name("init(code:mediaItem:nextToken:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMediaItems:(NSMutableArray<MainGooglePhoto *> *)mediaItems nextPageToken:(NSString * _Nullable)nextPageToken __attribute__((swift_name("init(mediaItems:nextPageToken:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSMutableArray<MainGooglePhoto *> *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MainListMediaItemError *)doCopyCode:(int32_t)code mediaItem:(NSMutableArray<MainGooglePhoto *> *)mediaItem nextToken:(NSString * _Nullable)nextToken __attribute__((swift_name("doCopy(code:mediaItem:nextToken:)")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSMutableArray<MainGooglePhoto *> *mediaItem __attribute__((swift_name("mediaItem")));
@property (readonly) NSString * _Nullable nextToken __attribute__((swift_name("nextToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemError.Companion")))
@interface MainListMediaItemErrorCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListMediaItemError.$serializer")))
@interface MainListMediaItemError$serializer : KotlinBase <MainKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (MainListMediaItemError *)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (MainListMediaItemError *)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(MainListMediaItemError *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(MainListMediaItemError *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaMetadata")))
@interface MainMediaMetadata : KotlinBase
- (instancetype)initWithWidth:(NSString *)width height:(NSString *)height __attribute__((swift_name("init(width:height:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MainMediaMetadata *)doCopyWidth:(NSString *)width height:(NSString *)height __attribute__((swift_name("doCopy(width:height:)")));
@property NSString *width __attribute__((swift_name("width")));
@property NSString *height __attribute__((swift_name("height")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaMetadata.Companion")))
@interface MainMediaMetadataCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaMetadata.$serializer")))
@interface MainMediaMetadata$serializer : KotlinBase <MainKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (MainMediaMetadata *)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (MainMediaMetadata *)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(MainMediaMetadata *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(MainMediaMetadata *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GooglePhoto")))
@interface MainGooglePhoto : KotlinBase
- (instancetype)initWithId:(NSString *)id filename:(NSString *)filename mediaMetadata:(MainMediaMetadata *)mediaMetadata baseUrl:(NSString *)baseUrl __attribute__((swift_name("init(id:filename:mediaMetadata:baseUrl:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *filename __attribute__((swift_name("filename")));
@property (readonly) MainMediaMetadata *mediaMetadata __attribute__((swift_name("mediaMetadata")));
@property NSString *baseUrl __attribute__((swift_name("baseUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GooglePhoto.Companion")))
@interface MainGooglePhotoCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GooglePhoto.$serializer")))
@interface MainGooglePhoto$serializer : KotlinBase <MainKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (MainGooglePhoto *)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (MainGooglePhoto *)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(MainGooglePhoto *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(MainGooglePhoto *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramResponseJson")))
@interface MainInstagramResponseJson : KotlinBase
- (instancetype)initWithMeta:(MainInstagramMetaJson *)meta pagination:(MainInstagramPaginationJson * _Nullable)pagination data:(NSMutableArray<MainInstagramMediaJson *> *)data __attribute__((swift_name("init(meta:pagination:data:)"))) __attribute__((objc_designated_initializer));
- (MainInstagramMetaJson *)component1 __attribute__((swift_name("component1()")));
- (MainInstagramPaginationJson * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSMutableArray<MainInstagramMediaJson *> *)component3 __attribute__((swift_name("component3()")));
- (MainInstagramResponseJson *)doCopyMeta:(MainInstagramMetaJson *)meta pagination:(MainInstagramPaginationJson * _Nullable)pagination data:(NSMutableArray<MainInstagramMediaJson *> *)data __attribute__((swift_name("doCopy(meta:pagination:data:)")));
@property (readonly) MainInstagramMetaJson *meta __attribute__((swift_name("meta")));
@property (readonly) MainInstagramPaginationJson * _Nullable pagination __attribute__((swift_name("pagination")));
@property (readonly) NSMutableArray<MainInstagramMediaJson *> *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramResponseJson.Companion")))
@interface MainInstagramResponseJsonCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MainInstagramResponseJson *)empty __attribute__((swift_name("empty()")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramResponseJson.$serializer")))
@interface MainInstagramResponseJson$serializer : KotlinBase <MainKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (MainInstagramResponseJson *)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (MainInstagramResponseJson *)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(MainInstagramResponseJson *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(MainInstagramResponseJson *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramMetaJson")))
@interface MainInstagramMetaJson : KotlinBase
- (instancetype)initWithCode:(int32_t)code errorType:(NSString *)errorType errorMessage:(NSString *)errorMessage __attribute__((swift_name("init(code:errorType:errorMessage:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (MainInstagramMetaJson *)doCopyCode:(int32_t)code errorType:(NSString *)errorType errorMessage:(NSString *)errorMessage __attribute__((swift_name("doCopy(code:errorType:errorMessage:)")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *errorType __attribute__((swift_name("errorType")));
@property (readonly) NSString *errorMessage __attribute__((swift_name("errorMessage")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramMetaJson.Companion")))
@interface MainInstagramMetaJsonCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MainInstagramMetaJson *)empty __attribute__((swift_name("empty()")));
- (MainInstagramMetaJson *)success __attribute__((swift_name("success()")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramMetaJson.$serializer")))
@interface MainInstagramMetaJson$serializer : KotlinBase <MainKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (MainInstagramMetaJson *)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (MainInstagramMetaJson *)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(MainInstagramMetaJson *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(MainInstagramMetaJson *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramPaginationJson")))
@interface MainInstagramPaginationJson : KotlinBase
- (instancetype)initWithNextUrl:(NSString *)nextUrl next_max_id:(NSString *)next_max_id __attribute__((swift_name("init(nextUrl:next_max_id:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MainInstagramPaginationJson *)doCopyNextUrl:(NSString *)nextUrl next_max_id:(NSString *)next_max_id __attribute__((swift_name("doCopy(nextUrl:next_max_id:)")));
@property (readonly) NSString *nextUrl __attribute__((swift_name("nextUrl")));
@property (readonly) NSString *next_max_id __attribute__((swift_name("next_max_id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramPaginationJson.Companion")))
@interface MainInstagramPaginationJsonCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MainInstagramPaginationJson *)empty __attribute__((swift_name("empty()")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramPaginationJson.$serializer")))
@interface MainInstagramPaginationJson$serializer : KotlinBase <MainKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (MainInstagramPaginationJson *)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (MainInstagramPaginationJson *)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(MainInstagramPaginationJson *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(MainInstagramPaginationJson *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramMediaJson")))
@interface MainInstagramMediaJson : KotlinBase
- (instancetype)initWithId:(NSString *)id link:(NSString *)link type:(NSString *)type images:(MainInstagramResolutionJson *)images __attribute__((swift_name("init(id:link:type:images:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (MainInstagramResolutionJson *)component4 __attribute__((swift_name("component4()")));
- (MainInstagramMediaJson *)doCopyId:(NSString *)id link:(NSString *)link type:(NSString *)type images:(MainInstagramResolutionJson *)images __attribute__((swift_name("doCopy(id:link:type:images:)")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *link __attribute__((swift_name("link")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) MainInstagramResolutionJson *images __attribute__((swift_name("images")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramMediaJson.Companion")))
@interface MainInstagramMediaJsonCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MainInstagramMediaJson *)empty __attribute__((swift_name("empty()")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramMediaJson.$serializer")))
@interface MainInstagramMediaJson$serializer : KotlinBase <MainKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (MainInstagramMediaJson *)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (MainInstagramMediaJson *)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(MainInstagramMediaJson *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(MainInstagramMediaJson *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramResolutionJson")))
@interface MainInstagramResolutionJson : KotlinBase
- (instancetype)initWithStandard_resolution:(MainInstagramImageJson *)standard_resolution thumbnail:(MainInstagramImageJson *)thumbnail __attribute__((swift_name("init(standard_resolution:thumbnail:)"))) __attribute__((objc_designated_initializer));
- (MainInstagramImageJson *)component1 __attribute__((swift_name("component1()")));
- (MainInstagramImageJson *)component2 __attribute__((swift_name("component2()")));
- (MainInstagramResolutionJson *)doCopyStandard_resolution:(MainInstagramImageJson *)standard_resolution thumbnail:(MainInstagramImageJson *)thumbnail __attribute__((swift_name("doCopy(standard_resolution:thumbnail:)")));
@property (readonly) MainInstagramImageJson *standard_resolution __attribute__((swift_name("standard_resolution")));
@property (readonly) MainInstagramImageJson *thumbnail __attribute__((swift_name("thumbnail")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramResolutionJson.Companion")))
@interface MainInstagramResolutionJsonCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MainInstagramResolutionJson *)empty __attribute__((swift_name("empty()")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramResolutionJson.$serializer")))
@interface MainInstagramResolutionJson$serializer : KotlinBase <MainKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (MainInstagramResolutionJson *)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (MainInstagramResolutionJson *)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(MainInstagramResolutionJson *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(MainInstagramResolutionJson *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramImageJson")))
@interface MainInstagramImageJson : KotlinBase
- (instancetype)initWithUrl:(NSString *)url width:(int32_t)width height:(int32_t)height __attribute__((swift_name("init(url:width:height:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (MainInstagramImageJson *)doCopyUrl:(NSString *)url width:(int32_t)width height:(int32_t)height __attribute__((swift_name("doCopy(url:width:height:)")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramImageJson.Companion")))
@interface MainInstagramImageJsonCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MainInstagramImageJson *)empty __attribute__((swift_name("empty()")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramImageJson.$serializer")))
@interface MainInstagramImageJson$serializer : KotlinBase <MainKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (MainInstagramImageJson *)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (MainInstagramImageJson *)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(MainInstagramImageJson *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(MainInstagramImageJson *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramPhoto")))
@interface MainInstagramPhoto : KotlinBase
- (instancetype)initWithPhotoId:(NSString *)photoId link:(NSString *)link thumbnailUrl:(NSString *)thumbnailUrl fullsizeUrl:(NSString *)fullsizeUrl __attribute__((swift_name("init(photoId:link:thumbnailUrl:fullsizeUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (MainInstagramPhoto *)doCopyPhotoId:(NSString *)photoId link:(NSString *)link thumbnailUrl:(NSString *)thumbnailUrl fullsizeUrl:(NSString *)fullsizeUrl __attribute__((swift_name("doCopy(photoId:link:thumbnailUrl:fullsizeUrl:)")));
@property (readonly) NSString *photoId __attribute__((swift_name("photoId")));
@property (readonly) NSString *link __attribute__((swift_name("link")));
@property (readonly) NSString *thumbnailUrl __attribute__((swift_name("thumbnailUrl")));
@property (readonly) NSString *fullsizeUrl __attribute__((swift_name("fullsizeUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramPhoto.Companion")))
@interface MainInstagramPhotoCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MainInstagramPhoto *)fromJsonMedia:(MainInstagramMediaJson *)media __attribute__((swift_name("fromJson(media:)")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstagramPhoto.$serializer")))
@interface MainInstagramPhoto$serializer : KotlinBase <MainKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (MainInstagramPhoto *)deserializeDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (MainInstagramPhoto *)patchDecoder:(id<MainKotlinx_serialization_runtime_nativeDecoder>)decoder old:(MainInstagramPhoto *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<MainKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(MainInstagramPhoto *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotosRepository")))
@interface MainPhotosRepository : KotlinBase
- (instancetype)initWithApi:(MainApi *)api __attribute__((swift_name("init(api:)"))) __attribute__((objc_designated_initializer));
- (void)loadFakeResultCallback:(MainKotlinUnit *(^)(NSString *))callback __attribute__((swift_name("loadFakeResult(callback:)")));
- (void)loadInstagramAsyncCallback:(MainKotlinUnit *(^)(NSArray<MainInstagramPhoto *> *))callback __attribute__((swift_name("loadInstagramAsync(callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringExtensionsKt")))
@interface MainStringExtensionsKt : KotlinBase
@property (class, readonly) NSString *emptyString __attribute__((swift_name("emptyString")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MainKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(MainInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MainKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEncoder")))
@protocol MainKotlinx_serialization_runtime_nativeEncoder
@required
- (id<MainKotlinx_serialization_runtime_nativeCompositeEncoder>)beginCollectionDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(MainKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<MainKotlinx_serialization_runtime_nativeCompositeEncoder>)beginStructureDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(MainKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(MainKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<MainKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MainKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<MainKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialDescriptor")))
@protocol MainKotlinx_serialization_runtime_nativeSerialDescriptor
@required
- (NSArray<id<MainKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<MainKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) MainKotlinx_serialization_runtime_nativeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDecoder")))
@protocol MainKotlinx_serialization_runtime_nativeDecoder
@required
- (id<MainKotlinx_serialization_runtime_nativeCompositeDecoder>)beginStructureDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(MainKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(MainKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MainKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MainKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MainKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<MainKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<MainKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<MainKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) MainKotlinx_serialization_runtime_nativeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MainKotlinUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MainKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeEncoder")))
@protocol MainKotlinx_serialization_runtime_nativeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<MainKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<MainKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<MainKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialClassDescImpl")))
@interface MainKotlinx_serialization_runtime_nativeSerialClassDescImpl : KotlinBase <MainKotlinx_serialization_runtime_nativeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<MainKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (void)pushAnnotationA:(id<MainKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<MainKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEnumDescriptor")))
@interface MainKotlinx_serialization_runtime_nativeEnumDescriptor : MainKotlinx_serialization_runtime_nativeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(MainKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<MainKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialModule")))
@protocol MainKotlinx_serialization_runtime_nativeSerialModule
@required
- (void)dumpToCollector:(id<MainKotlinx_serialization_runtime_nativeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getContextualKclass:(id<MainKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getPolymorphicBaseClass:(id<MainKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<MainKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getPolymorphicBaseClass:(id<MainKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol MainKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialKind")))
@interface MainKotlinx_serialization_runtime_nativeSerialKind : KotlinBase
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeDecoder")))
@protocol MainKotlinx_serialization_runtime_nativeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<MainKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<MainKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<MainKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<MainKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<MainKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<MainKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) MainKotlinx_serialization_runtime_nativeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MainKotlinNothing : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeUpdateMode")))
@interface MainKotlinx_serialization_runtime_nativeUpdateMode : MainKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MainKotlinx_serialization_runtime_nativeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) MainKotlinx_serialization_runtime_nativeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) MainKotlinx_serialization_runtime_nativeUpdateMode *update __attribute__((swift_name("update")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MainKotlinx_serialization_runtime_nativeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialModuleCollector")))
@protocol MainKotlinx_serialization_runtime_nativeSerialModuleCollector
@required
- (void)contextualKClass:(id<MainKotlinKClass>)kClass serializer:(id<MainKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MainKotlinKClass>)baseClass actualClass:(id<MainKotlinKClass>)actualClass actualSerializer:(id<MainKotlinx_serialization_runtime_nativeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MainKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MainKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol MainKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol MainKotlinKClass <MainKotlinKDeclarationContainer, MainKotlinKAnnotatedElement, MainKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

NS_ASSUME_NONNULL_END
