using namespace std;
#include "art__EventAuxiliary.h"
#include "art__EventID.h"
#include "art__SubRunID.h"
#include "art__RunID.h"
#include "art__Timestamp.h"
#include "art__SubRunAuxiliary.h"
#include "art__Hash_2_.h"
#include "art__RunAuxiliary.h"
#include "art__ResultsAuxiliary.h"
#include "art__History.h"
#include "art__Wrapper_art__TriggerResults_.h"
#include "art__EDProduct.h"
#include "art__TriggerResults.h"
#include "art__HLTGlobalStatus.h"
#include "fhicl__ParameterSetID.h"
#include "art__Wrapper_vector_artdaq__Fragment___.h"
#include "artdaq__Fragment.h"
#include "artdaq__QuickVec_ULong64_t_.h"
#include "art__Wrapper_vector_artdaq__PackageBuildInfo___.h"
#include "artdaq__PackageBuildInfo.h"
#include "art__ProductProvenance.h"
#include "art__ProductID.h"
#include "art__Hash_5_.h"
#include "art__Transient_art__ProductProvenance__Transients_.h"
#include "art__HLTPathStatus.h"
#include "art__FileFormatVersion.h"
#include "art__FileIndex__Element.h"
#include "art__ProcessHistory.h"
#include "art__ProcessConfiguration.h"
#include "art__Transient_art__ProcessHistory__Transients_.h"
#include "art__ProductRegistry.h"
#include "art__BranchKey.h"
#include "art__BranchDescription.h"
#include "art__Hash_3_.h"
#include "art__Transient_art__BranchDescription__Transients_.h"
#include "art__Parentage.h"
#include "art__BranchChildren.h"
#include "art__Wrapper_art__Assns_CRT__Trigger_anab__CosmicTag_void___.h"
#include "art__Assns_CRT__Trigger_anab__CosmicTag_void_.h"
#include "art__detail__AssnsBase.h"
#include "art__Wrapper_art__Assns_anab__CosmicTag_anab__T0_void___.h"
#include "art__Assns_anab__CosmicTag_anab__T0_void_.h"
#include "art__Wrapper_art__Assns_raw__RawDigit_raw__RDTimeStamp_void___.h"
#include "art__Assns_raw__RawDigit_raw__RDTimeStamp_void_.h"
#include "art__Wrapper_art__Assns_recob__Cluster_recob__Hit_void___.h"
#include "art__Assns_recob__Cluster_recob__Hit_void_.h"
#include "art__Wrapper_art__Assns_recob__Hit_recob__SpacePoint_void___.h"
#include "art__Assns_recob__Hit_recob__SpacePoint_void_.h"
#include "art__Wrapper_art__Assns_recob__OpFlash_recob__OpHit_void___.h"
#include "art__Assns_recob__OpFlash_recob__OpHit_void_.h"
#include "art__Wrapper_art__Assns_recob__PFParticle_anab__T0_void___.h"
#include "art__Assns_recob__PFParticle_anab__T0_void_.h"
#include "art__Wrapper_art__Assns_recob__PFParticle_larpandoraobj__PFParticleMetadata_void___.h"
#include "art__Assns_recob__PFParticle_larpandoraobj__PFParticleMetadata_void_.h"
#include "art__Wrapper_art__Assns_recob__PFParticle_recob__Cluster_void___.h"
#include "art__Assns_recob__PFParticle_recob__Cluster_void_.h"
#include "art__Wrapper_art__Assns_recob__PFParticle_recob__PCAxis_void___.h"
#include "art__Assns_recob__PFParticle_recob__PCAxis_void_.h"
#include "art__Wrapper_art__Assns_recob__PFParticle_recob__Shower_void___.h"
#include "art__Assns_recob__PFParticle_recob__Shower_void_.h"
#include "art__Wrapper_art__Assns_recob__PFParticle_recob__Slice_void___.h"
#include "art__Assns_recob__PFParticle_recob__Slice_void_.h"
#include "art__Wrapper_art__Assns_recob__PFParticle_recob__SpacePoint_void___.h"
#include "art__Assns_recob__PFParticle_recob__SpacePoint_void_.h"
#include "art__Wrapper_art__Assns_recob__PFParticle_recob__Track_void___.h"
#include "art__Assns_recob__PFParticle_recob__Track_void_.h"
#include "art__Wrapper_art__Assns_recob__PFParticle_recob__Vertex_void___.h"
#include "art__Assns_recob__PFParticle_recob__Vertex_void_.h"
#include "art__Wrapper_art__Assns_recob__Shower_anab__Calorimetry_void___.h"
#include "art__Assns_recob__Shower_anab__Calorimetry_void_.h"
#include "art__Wrapper_art__Assns_recob__Shower_recob__Hit_void___.h"
#include "art__Assns_recob__Shower_recob__Hit_void_.h"
#include "art__Wrapper_art__Assns_recob__Shower_recob__PCAxis_void___.h"
#include "art__Assns_recob__Shower_recob__PCAxis_void_.h"
#include "art__Wrapper_art__Assns_recob__Slice_recob__Hit_void___.h"
#include "art__Assns_recob__Slice_recob__Hit_void_.h"
#include "art__Wrapper_art__Assns_recob__SpacePoint_recob__Hit_void___.h"
#include "art__Assns_recob__SpacePoint_recob__Hit_void_.h"
#include "art__Wrapper_art__Assns_recob__Track_anab__Calorimetry_void___.h"
#include "art__Assns_recob__Track_anab__Calorimetry_void_.h"
#include "art__Wrapper_art__Assns_recob__Track_anab__CosmicTag_void___.h"
#include "art__Assns_recob__Track_anab__CosmicTag_void_.h"
#include "art__Wrapper_art__Assns_recob__Track_anab__ParticleID_void___.h"
#include "art__Assns_recob__Track_anab__ParticleID_void_.h"
#include "art__Wrapper_art__Assns_recob__Track_anab__T0_void___.h"
#include "art__Assns_recob__Track_anab__T0_void_.h"
#include "art__Wrapper_art__Assns_recob__Track_recob__Hit_recob__TrackHitMeta___.h"
#include "art__Assns_recob__Track_recob__Hit_recob__TrackHitMeta_.h"
#include "art__Assns_recob__Track_recob__Hit_void_.h"
#include "art__Wrapper_art__Assns_recob__Track_recob__Hit_void___.h"
#include "art__Wrapper_art__Assns_recob__Wire_recob__Hit_void___.h"
#include "art__Assns_recob__Wire_recob__Hit_void_.h"
#include "art__Wrapper_vector_CRT__Trigger___.h"
#include "CRT__Trigger.h"
#include "art__Wrapper_vector_anab__Calorimetry___.h"
#include "anab__Calorimetry.h"
#include "geo__PlaneID.h"
#include "geo__TPCID.h"
#include "geo__CryostatID.h"
#include "art__Wrapper_vector_anab__CosmicTag___.h"
#include "anab__CosmicTag.h"
#include "art__Wrapper_vector_anab__FeatureVector_4_____.h"
#include "anab__FeatureVector_4_.h"
#include "art__Wrapper_vector_anab__MVADescription_4_____.h"
#include "anab__MVADescription_4_.h"
#include "art__Wrapper_vector_anab__ParticleID___.h"
#include "anab__ParticleID.h"
#include "art__Wrapper_vector_anab__T0___.h"
#include "anab__T0.h"
#include "art__Wrapper_vector_beam__ProtoDUNEBeamEvent___.h"
#include "beam__ProtoDUNEBeamEvent.h"
#include "beam__CKov.h"
#include "art__Wrapper_vector_dune__ProtoDUNETimeStamp___.h"
#include "dune__ProtoDUNETimeStamp.h"
#include "art__Wrapper_vector_larpandoraobj__PFParticleMetadata___.h"
#include "larpandoraobj__PFParticleMetadata.h"
#include "art__Wrapper_vector_raw__OpDetWaveform___.h"
#include "raw__OpDetWaveform.h"
#include "art__Wrapper_vector_raw__RDStatus___.h"
#include "raw__RDStatus.h"
#include "art__Wrapper_vector_raw__RDTimeStamp___.h"
#include "raw__RDTimeStamp.h"
#include "art__Wrapper_vector_raw__ctb__pdspctb___.h"
#include "raw__ctb__pdspctb.h"
#include "art__Wrapper_vector_recob__Cluster___.h"
#include "recob__Cluster.h"
#include "art__Wrapper_vector_recob__Hit___.h"
#include "recob__Hit.h"
#include "geo__WireID.h"
#include "art__Wrapper_vector_recob__OpFlash___.h"
#include "recob__OpFlash.h"
#include "art__Wrapper_vector_recob__OpHit___.h"
#include "recob__OpHit.h"
#include "art__Wrapper_vector_recob__PCAxis___.h"
#include "recob__PCAxis.h"
#include "art__Wrapper_vector_recob__PFParticle___.h"
#include "recob__PFParticle.h"
#include "art__Wrapper_vector_recob__PointCharge___.h"
#include "recob__PointCharge.h"
#include "art__Wrapper_vector_recob__Shower___.h"
#include "recob__Shower.h"
#include "art__Wrapper_vector_recob__Slice___.h"
#include "recob__Slice.h"
#include "art__Wrapper_vector_recob__SpacePoint___.h"
#include "recob__SpacePoint.h"
#include "art__Wrapper_vector_recob__Track___.h"
#include "recob__Track.h"
#include "recob__TrackTrajectory.h"
#include "recob__Trajectory.h"
#include "art__Wrapper_vector_recob__Vertex___.h"
#include "recob__Vertex.h"
#include "art__Wrapper_vector_recob__Wire___.h"
#include "recob__Wire.h"
#include "lar__sparse_vector_float_.h"
#include "art__RefCore.h"
#include "recob__TrackHitMeta.h"
#include "CRT__Hit.h"
#include "beam__FBM.h"
#include "recob__TrajectoryPointFlags.h"
#include "util__flags__FlagSet_32_unsigned_int_.h"
#include "util__flags__BitMask_unsigned_int_.h"
#include "util__flags__Bits_t_unsigned_int_.h"
#include "raw__ctb__Trigger.h"
#include "raw__ctb__ChStatus.h"
#include "raw__ctb__Misc.h"
#include "raw__ctb__WordIndex.h"
#include "lar__range_t_unsigned_long_.h"
#include "art__BranchType.h"
#include "raw__RawDigit.h"
#include "anab__cosmic_tag_id.h"
#include "dune__ProtoDUNETimingCommand.h"
#include "raw__ctb__Feedback.h"
#include "geo___plane_proj.h"
#include "geo___plane_sigtype.h"
#include "LArSoftReaderProjectInstances.h"