/* This file was generated by upb_generator from the input file:
 *
 *     envoy/service/discovery/v3/discovery.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated.
 * NO CHECKED-IN PROTOBUF GENCODE */



#ifndef ENVOY_SERVICE_DISCOVERY_V3_DISCOVERY_PROTO_UPB_H__UPBDEFS_H_
#define ENVOY_SERVICE_DISCOVERY_V3_DISCOVERY_PROTO_UPB_H__UPBDEFS_H_

#include "upb/reflection/def.h"
#include "upb/reflection/internal/def_pool.h"

#include "upb/port/def.inc"

#ifdef __cplusplus
extern "C" {
#endif

extern _upb_DefPool_Init envoy_service_discovery_v3_discovery_proto_upbdefinit;

UPB_INLINE const upb_MessageDef *envoy_service_discovery_v3_ResourceLocator_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.service.discovery.v3.ResourceLocator");
}

UPB_INLINE const upb_MessageDef *envoy_service_discovery_v3_ResourceLocator_DynamicParametersEntry_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.service.discovery.v3.ResourceLocator.DynamicParametersEntry");
}

UPB_INLINE const upb_MessageDef *envoy_service_discovery_v3_ResourceName_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.service.discovery.v3.ResourceName");
}

UPB_INLINE const upb_MessageDef *envoy_service_discovery_v3_ResourceError_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.service.discovery.v3.ResourceError");
}

UPB_INLINE const upb_MessageDef *envoy_service_discovery_v3_DiscoveryRequest_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.service.discovery.v3.DiscoveryRequest");
}

UPB_INLINE const upb_MessageDef *envoy_service_discovery_v3_DiscoveryResponse_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.service.discovery.v3.DiscoveryResponse");
}

UPB_INLINE const upb_MessageDef *envoy_service_discovery_v3_DeltaDiscoveryRequest_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.service.discovery.v3.DeltaDiscoveryRequest");
}

UPB_INLINE const upb_MessageDef *envoy_service_discovery_v3_DeltaDiscoveryRequest_InitialResourceVersionsEntry_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.service.discovery.v3.DeltaDiscoveryRequest.InitialResourceVersionsEntry");
}

UPB_INLINE const upb_MessageDef *envoy_service_discovery_v3_DeltaDiscoveryResponse_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.service.discovery.v3.DeltaDiscoveryResponse");
}

UPB_INLINE const upb_MessageDef *envoy_service_discovery_v3_DynamicParameterConstraints_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.service.discovery.v3.DynamicParameterConstraints");
}

UPB_INLINE const upb_MessageDef *envoy_service_discovery_v3_DynamicParameterConstraints_SingleConstraint_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.service.discovery.v3.DynamicParameterConstraints.SingleConstraint");
}

UPB_INLINE const upb_MessageDef *envoy_service_discovery_v3_DynamicParameterConstraints_SingleConstraint_Exists_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.service.discovery.v3.DynamicParameterConstraints.SingleConstraint.Exists");
}

UPB_INLINE const upb_MessageDef *envoy_service_discovery_v3_DynamicParameterConstraints_ConstraintList_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.service.discovery.v3.DynamicParameterConstraints.ConstraintList");
}

UPB_INLINE const upb_MessageDef *envoy_service_discovery_v3_Resource_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.service.discovery.v3.Resource");
}

UPB_INLINE const upb_MessageDef *envoy_service_discovery_v3_Resource_CacheControl_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.service.discovery.v3.Resource.CacheControl");
}


#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* ENVOY_SERVICE_DISCOVERY_V3_DISCOVERY_PROTO_UPB_H__UPBDEFS_H_ */
