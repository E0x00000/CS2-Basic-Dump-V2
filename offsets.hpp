inline struct CAnimFrameBlockAnimOffsets {
	DWORD m_nStartFrame;
	DWORD m_nEndFrame;
	DWORD m_segmentIndexArray;
} CAnimFrameBlockAnim;

inline struct CSlowDownOnSlopesUpdateNodeOffsets {
	DWORD m_flSlowDownStrength;
} CSlowDownOnSlopesUpdateNode;

inline struct COrientationWarpUpdateNodeOffsets {
	DWORD m_eMode;
	DWORD m_hTargetParam;
	DWORD m_hTargetPositionParam;
	DWORD m_hFallbackTargetPositionParam;
	DWORD m_eTargetOffsetMode;
	DWORD m_flTargetOffset;
	DWORD m_hTargetOffsetParam;
	DWORD m_damping;
	DWORD m_eRootMotionSource;
	DWORD m_flMaxRootMotionScale;
	DWORD m_bEnablePreferredRotationDirection;
	DWORD m_ePreferredRotationDirection;
	DWORD m_flPreferredRotationThreshold;
} COrientationWarpUpdateNode;

inline struct CAnimParameterBaseOffsets {
	DWORD m_name;
	DWORD m_sComment;
	DWORD m_group;
	DWORD m_id;
	DWORD m_componentName;
	DWORD m_bNetworkingRequested;
	DWORD m_bIsReferenced;
} CAnimParameterBase;

inline struct CSequenceFinishedAnimTagOffsets {
	DWORD m_sequenceName;
} CSequenceFinishedAnimTag;

inline struct CSceneObjectDataOffsets {
	DWORD m_vMinBounds;
	DWORD m_vMaxBounds;
	DWORD m_drawCalls;
	DWORD m_drawBounds;
	DWORD m_meshlets;
	DWORD m_vTintColor;
} CSceneObjectData;

inline struct CParticleModelInputOffsets {
	DWORD m_nType;
	DWORD m_NamedValue;
	DWORD m_nControlPoint;
} CParticleModelInput;

inline struct CIntAnimParameterOffsets {
	DWORD m_defaultValue;
	DWORD m_minValue;
	DWORD m_maxValue;
} CIntAnimParameter;

inline struct CNmParameterizedBlendNode__CDefinitionOffsets {
	DWORD m_sourceNodeIndices;
	DWORD m_nInputParameterValueNodeIdx;
	DWORD m_bAllowLooping;
} CNmParameterizedBlendNode__CDefinition;

inline struct CNmFrameSnapEventOffsets {
	DWORD m_frameSnapMode;
} CNmFrameSnapEvent;

inline struct CAnimNodePathOffsets {
	DWORD m_path;
	DWORD m_nCount;
} CAnimNodePath;

inline struct AnimNodeOutputIDOffsets {
	DWORD m_id;
} AnimNodeOutputID;

inline struct CNmSyncTrackOffsets {
	DWORD m_syncEvents;
	DWORD m_nStartEventOffset;
} CNmSyncTrack;

inline struct CSeqBoneMaskListOffsets {
	DWORD m_sName;
	DWORD m_nLocalBoneArray;
	DWORD m_flBoneWeightArray;
	DWORD m_flDefaultMorphCtrlWeight;
	DWORD m_morphCtrlWeightArray;
} CSeqBoneMaskList;

inline struct CAnimEncodedFramesOffsets {
	DWORD m_fileName;
	DWORD m_nFrames;
	DWORD m_nFramesPerBlock;
	DWORD m_frameblockArray;
	DWORD m_usageDifferences;
} CAnimEncodedFrames;

inline struct SampleCodeOffsets {
	DWORD m_subCode;
} SampleCode;

inline struct CCachedPoseOffsets {
	DWORD m_transforms;
	DWORD m_morphWeights;
	DWORD m_hSequence;
	DWORD m_flCycle;
} CCachedPose;

inline struct CNmTransitionEventConditionNode__CDefinitionOffsets {
	DWORD m_requireRuleID;
	DWORD m_eventConditionRules;
	DWORD m_nSourceStateNodeIdx;
	DWORD m_ruleCondition;
} CNmTransitionEventConditionNode__CDefinition;

inline struct CMotionGraphConfigOffsets {
	DWORD m_paramValues;
	DWORD m_flDuration;
	DWORD m_nMotionIndex;
	DWORD m_nSampleStart;
	DWORD m_nSampleCount;
} CMotionGraphConfig;

inline struct CMotionSearchNodeOffsets {
	DWORD m_children;
	DWORD m_quantizer;
	DWORD m_sampleCodes;
	DWORD m_sampleIndices;
	DWORD m_selectableSamples;
} CMotionSearchNode;

inline struct CAnimActivityOffsets {
	DWORD m_name;
	DWORD m_nActivity;
	DWORD m_nFlags;
	DWORD m_nWeight;
} CAnimActivity;

inline struct CAnimScriptManagerOffsets {
	DWORD m_scriptInfo;
} CAnimScriptManager;

inline struct AnimationDecodeDebugDumpElement_tOffsets {
	DWORD m_nEntityIndex;
	DWORD m_modelName;
	DWORD m_poseParams;
	DWORD m_decodeOps;
	DWORD m_internalOps;
	DWORD m_decodedAnims;
} AnimationDecodeDebugDumpElement_t;

inline struct MovementGaitId_tOffsets {
	DWORD m_sId;
} MovementGaitId_t;

inline struct PulseRuntimeVarIndex_tOffsets {
	DWORD m_Value;
} PulseRuntimeVarIndex_t;

inline struct ConfigIndexOffsets {
	DWORD m_nGroup;
	DWORD m_nConfig;
} ConfigIndex;

inline struct VPhysXCollisionAttributes_tOffsets {
	DWORD m_CollisionGroup;
	DWORD m_InteractAs;
	DWORD m_InteractWith;
	DWORD m_InteractExclude;
	DWORD m_CollisionGroupString;
	DWORD m_InteractAsStrings;
	DWORD m_InteractWithStrings;
	DWORD m_InteractExcludeStrings;
} VPhysXCollisionAttributes_t;

inline struct CSequenceUpdateNodeOffsets {
	DWORD m_hSequence;
	DWORD m_duration;
	DWORD m_paramSpans;
	DWORD m_tags;
} CSequenceUpdateNode;

inline struct CNmPassthroughNode__CDefinitionOffsets {
	DWORD m_nChildNodeIdx;
} CNmPassthroughNode__CDefinition;

inline struct CNmGraphDefinition__ExternalGraphSlot_tOffsets {
	DWORD m_nNodeIdx;
	DWORD m_slotID;
} CNmGraphDefinition__ExternalGraphSlot_t;

inline struct PulseRuntimeEntrypointIndex_tOffsets {
	DWORD m_Value;
} PulseRuntimeEntrypointIndex_t;

inline struct CAimCameraUpdateNodeOffsets {
	DWORD m_hParameterPosition;
	DWORD m_hParameterOrientation;
	DWORD m_hParameterSpineRotationWeight;
	DWORD m_hParameterPelvisOffset;
	DWORD m_hParameterUseIK;
	DWORD m_hParameterCameraOnly;
	DWORD m_hParameterWeaponDepenetrationDistance;
	DWORD m_hParameterWeaponDepenetrationDelta;
	DWORD m_hParameterCameraClearanceDistance;
	DWORD m_opFixedSettings;
} CAimCameraUpdateNode;

inline struct PulseRuntimeDomainValueIndex_tOffsets {
	DWORD m_Value;
} PulseRuntimeDomainValueIndex_t;

inline struct CSeqSeqDescFlagOffsets {
	DWORD m_bLooping;
	DWORD m_bSnap;
	DWORD m_bAutoplay;
	DWORD m_bPost;
	DWORD m_bHidden;
	DWORD m_bMulti;
	DWORD m_bLegacyDelta;
	DWORD m_bLegacyWorldspace;
	DWORD m_bLegacyCyclepose;
	DWORD m_bLegacyRealtime;
	DWORD m_bModelDoc;
} CSeqSeqDescFlag;

inline struct PermModelInfo_tOffsets {
	DWORD m_nFlags;
	DWORD m_vHullMin;
	DWORD m_vHullMax;
	DWORD m_vViewMin;
	DWORD m_vViewMax;
	DWORD m_flMass;
	DWORD m_vEyePosition;
	DWORD m_flMaxEyeDeflection;
	DWORD m_sSurfaceProperty;
	DWORD m_keyValueText;
} PermModelInfo_t;

inline struct StanceInfo_tOffsets {
	DWORD m_vPosition;
	DWORD m_flDirection;
} StanceInfo_t;

inline struct IKBoneNameAndIndex_tOffsets {
	DWORD m_Name;
} IKBoneNameAndIndex_t;

inline struct CPulse_ChunkOffsets {
	DWORD m_Instructions;
	DWORD m_Registers;
	DWORD m_InstructionEditorIDs;
} CPulse_Chunk;

inline struct CStanceScaleUpdateNodeOffsets {
	DWORD m_hParam;
} CStanceScaleUpdateNode;

inline struct PulseRuntimeInvokeIndex_tOffsets {
	DWORD m_Value;
} PulseRuntimeInvokeIndex_t;

inline struct CNmBoneMaskBlendNode__CDefinitionOffsets {
	DWORD m_nSourceMaskNodeIdx;
	DWORD m_nTargetMaskNodeIdx;
	DWORD m_nBlendWeightValueNodeIdx;
} CNmBoneMaskBlendNode__CDefinition;

inline struct CNmIDEventNode__CDefinitionOffsets {
	DWORD m_nSourceStateNodeIdx;
	DWORD m_eventConditionRules;
	DWORD m_defaultValue;
} CNmIDEventNode__CDefinition;

inline struct HitReactFixedSettings_tOffsets {
	DWORD m_nWeightListIndex;
	DWORD m_nEffectedBoneCount;
	DWORD m_flMaxImpactForce;
	DWORD m_flMinImpactForce;
	DWORD m_flWhipImpactScale;
	DWORD m_flCounterRotationScale;
	DWORD m_flDistanceFadeScale;
	DWORD m_flPropagationScale;
	DWORD m_flWhipDelay;
	DWORD m_flSpringStrength;
	DWORD m_flWhipSpringStrength;
	DWORD m_flMaxAngleRadians;
	DWORD m_nHipBoneIndex;
	DWORD m_flHipBoneTranslationScale;
	DWORD m_flHipDipSpringStrength;
	DWORD m_flHipDipImpactScale;
	DWORD m_flHipDipDelay;
} HitReactFixedSettings_t;

inline struct CAnimTagBaseOffsets {
	DWORD m_name;
	DWORD m_sComment;
	DWORD m_group;
	DWORD m_tagID;
	DWORD m_bIsReferenced;
} CAnimTagBase;

inline struct CMotionGraphOffsets {
	DWORD m_paramSpans;
	DWORD m_tags;
	DWORD m_pRootNode;
	DWORD m_nParameterCount;
	DWORD m_nConfigStartIndex;
	DWORD m_nConfigCount;
	DWORD m_bLoop;
} CMotionGraph;

inline struct CNmVectorInfoNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_desiredInfo;
} CNmVectorInfoNode__CDefinition;

inline struct AnimationSnapshot_tOffsets {
	DWORD m_nEntIndex;
	DWORD m_modelName;
} AnimationSnapshot_t;

inline struct CSeqTransitionOffsets {
	DWORD m_flFadeInTime;
	DWORD m_flFadeOutTime;
} CSeqTransition;

inline struct CNmVirtualParameterTargetNode__CDefinitionOffsets {
	DWORD m_nChildNodeIdx;
} CNmVirtualParameterTargetNode__CDefinition;

inline struct CAnimGraphDebugReplayOffsets {
	DWORD m_animGraphFileName;
	DWORD m_frameList;
	DWORD m_startIndex;
	DWORD m_writeIndex;
	DWORD m_frameCount;
} CAnimGraphDebugReplay;

inline struct CVectorAnimParameterOffsets {
	DWORD m_defaultValue;
	DWORD m_bInterpolate;
	DWORD m_vectorType;
} CVectorAnimParameter;

inline struct CNmStateMachineNode__StateDefinition_tOffsets {
	DWORD m_nStateNodeIdx;
	DWORD m_nEntryConditionNodeIdx;
	DWORD m_transitionDefinitions;
} CNmStateMachineNode__StateDefinition_t;

inline struct CStanceOverrideUpdateNodeOffsets {
	DWORD m_footStanceInfo;
	DWORD m_pStanceSourceNode;
	DWORD m_hParameter;
	DWORD m_eMode;
} CStanceOverrideUpdateNode;

inline struct PhysShapeMarkup_tOffsets {
	DWORD m_nBodyInAggregate;
	DWORD m_nShapeInBody;
	DWORD m_sHitGroup;
} PhysShapeMarkup_t;

inline struct LookAtBone_tOffsets {
	DWORD m_index;
	DWORD m_weight;
} LookAtBone_t;

inline struct CNmTransitionNode__CDefinitionOffsets {
	DWORD m_nTargetStateNodeIdx;
	DWORD m_nDurationOverrideNodeIdx;
	DWORD m_timeOffsetOverrideNodeIdx;
	DWORD m_startBoneMaskNodeIdx;
	DWORD m_flDuration;
	DWORD m_boneMaskBlendInTimePercentage;
	DWORD m_flTimeOffset;
	DWORD m_transitionOptions;
	DWORD m_targetSyncIDNodeIdx;
	DWORD m_blendWeightEasing;
	DWORD m_rootMotionBlend;
} CNmTransitionNode__CDefinition;

inline struct PulseRuntimeRegisterIndex_tOffsets {
	DWORD m_Value;
} PulseRuntimeRegisterIndex_t;

inline struct CNmFloatEaseNode__CDefinitionOffsets {
	DWORD m_flEaseTime;
	DWORD m_flStartValue;
	DWORD m_nInputValueNodeIdx;
	DWORD m_easingOp;
	DWORD m_bUseStartValue;
} CNmFloatEaseNode__CDefinition;

inline struct CAnimEncodeDifferenceOffsets {
	DWORD m_boneArray;
	DWORD m_morphArray;
	DWORD m_userArray;
	DWORD m_bHasRotationBitArray;
	DWORD m_bHasMovementBitArray;
	DWORD m_bHasMorphBitArray;
	DWORD m_bHasUserBitArray;
} CAnimEncodeDifference;

inline struct CNmTargetOffsetNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_bIsBoneSpaceOffset;
	DWORD m_rotationOffset;
	DWORD m_translationOffset;
} CNmTargetOffsetNode__CDefinition;

inline struct CMotionGraphUpdateNodeOffsets {
	DWORD m_pMotionGraph;
} CMotionGraphUpdateNode;

inline struct CNmFloatAngleMathNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_operation;
} CNmFloatAngleMathNode__CDefinition;

inline struct PulseCursorID_tOffsets {
	DWORD m_Value;
} PulseCursorID_t;

inline struct CAnimParamHandleOffsets {
	DWORD m_type;
	DWORD m_index;
} CAnimParamHandle;

inline struct WeightListOffsets {
	DWORD m_name;
	DWORD m_weights;
} WeightList;

inline struct MotionIndexOffsets {
	DWORD m_nGroup;
	DWORD m_nMotion;
} MotionIndex;

inline struct FollowAttachmentSettings_tOffsets {
	DWORD m_attachment;
	DWORD m_boneIndex;
	DWORD m_attachmentHandle;
	DWORD m_bMatchTranslation;
	DWORD m_bMatchRotation;
} FollowAttachmentSettings_t;

inline struct CNmReferencedGraphNode__CDefinitionOffsets {
	DWORD m_nReferencedGraphIdx;
	DWORD m_nFallbackNodeIdx;
} CNmReferencedGraphNode__CDefinition;

inline struct AnimNodeIDOffsets {
	DWORD m_id;
} AnimNodeID;

inline struct CNmClipSelectorNode__CDefinitionOffsets {
	DWORD m_optionNodeIndices;
	DWORD m_conditionNodeIndices;
} CNmClipSelectorNode__CDefinition;

inline struct CLookComponentUpdaterOffsets {
	DWORD m_hLookHeading;
	DWORD m_hLookHeadingNormalized;
	DWORD m_hLookHeadingVelocity;
	DWORD m_hLookPitch;
	DWORD m_hLookDistance;
	DWORD m_hLookDirection;
	DWORD m_hLookTarget;
	DWORD m_hLookTargetWorldSpace;
	DWORD m_bNetworkLookTarget;
} CLookComponentUpdater;

inline struct CAnimGraphNetworkSettingsOffsets {
	DWORD m_bNetworkingEnabled;
} CAnimGraphNetworkSettings;

inline struct CSingleFrameUpdateNodeOffsets {
	DWORD m_actions;
	DWORD m_hPoseCacheHandle;
	DWORD m_hSequence;
	DWORD m_flCycle;
} CSingleFrameUpdateNode;

inline struct CNmChainLookatNode__CDefinitionOffsets {
	DWORD m_chainEndBoneID;
	DWORD m_nLookatTargetNodeIdx;
	DWORD m_nEnabledNodeIdx;
	DWORD m_flBlendTimeSeconds;
	DWORD m_nChainLength;
	DWORD m_bIsTargetInWorldSpace;
	DWORD m_chainForwardDir;
} CNmChainLookatNode__CDefinition;

inline struct CNmFollowBoneNode__CDefinitionOffsets {
	DWORD m_bone;
	DWORD m_followTargetBone;
	DWORD m_nEnabledNodeIdx;
	DWORD m_mode;
} CNmFollowBoneNode__CDefinition;

inline struct CRemapValueComponentUpdaterOffsets {
	DWORD m_items;
} CRemapValueComponentUpdater;

inline struct CModelConfigListOffsets {
	DWORD m_bHideMaterialGroupInTools;
	DWORD m_bHideRenderColorInTools;
	DWORD m_Configs;
} CModelConfigList;

inline struct CSeqAutoLayerFlagOffsets {
	DWORD m_bPost;
	DWORD m_bSpline;
	DWORD m_bXFade;
	DWORD m_bNoBlend;
	DWORD m_bLocal;
	DWORD m_bPose;
	DWORD m_bFetchFrame;
	DWORD m_bSubtract;
} CSeqAutoLayerFlag;

inline struct AnimStateIDOffsets {
	DWORD m_id;
} AnimStateID;

inline struct CNmIDEventConditionNode__CDefinitionOffsets {
	DWORD m_nSourceStateNodeIdx;
	DWORD m_eventConditionRules;
	DWORD m_eventIDs;
} CNmIDEventConditionNode__CDefinition;

inline struct ModelBoneFlexDriver_tOffsets {
	DWORD m_boneName;
	DWORD m_boneNameToken;
	DWORD m_controls;
} ModelBoneFlexDriver_t;

inline struct CMorphDataOffsets {
	DWORD m_name;
	DWORD m_morphRectDatas;
} CMorphData;

inline struct CFootPinningUpdateNodeOffsets {
	DWORD m_poseOpFixedData;
	DWORD m_eTimingSource;
	DWORD m_params;
	DWORD m_bResetChild;
} CFootPinningUpdateNode;

inline struct CSeqPoseSettingOffsets {
	DWORD m_sPoseParameter;
	DWORD m_sAttachment;
	DWORD m_sReferenceSequence;
	DWORD m_flValue;
	DWORD m_bX;
	DWORD m_bY;
	DWORD m_bZ;
	DWORD m_eType;
} CSeqPoseSetting;

inline struct PulseGraphExecutionHistoryCursorDesc_tOffsets {
	DWORD vecAncestorCursorIDs;
	DWORD nSpawnNodeID;
	DWORD nRetiredAtNodeID;
	DWORD flLastReferenced;
	DWORD nLastValidEntryIdx;
} PulseGraphExecutionHistoryCursorDesc_t;

inline struct CNmVirtualParameterFloatNode__CDefinitionOffsets {
	DWORD m_nChildNodeIdx;
} CNmVirtualParameterFloatNode__CDefinition;

inline struct CAttachmentOffsets {
	DWORD m_name;
	DWORD m_influenceNames;
	DWORD m_vInfluenceRotations;
	DWORD m_vInfluenceOffsets;
	DWORD m_influenceWeights;
	DWORD m_bInfluenceRootTransform;
	DWORD m_nInfluences;
	DWORD m_bIgnoreRotation;
} CAttachment;

inline struct CSequenceUpdateNodeBaseOffsets {
	DWORD m_playbackSpeed;
	DWORD m_bLoop;
} CSequenceUpdateNodeBase;

inline struct CDrawCullingDataOffsets {
	DWORD m_ConeAxis;
	DWORD m_ConeCutoff;
} CDrawCullingData;

inline struct VPhysXJoint_tOffsets {
	DWORD m_nType;
	DWORD m_nBody1;
	DWORD m_nBody2;
	DWORD m_nFlags;
	DWORD m_Frame1;
	DWORD m_Frame2;
	DWORD m_bEnableCollision;
	DWORD m_bIsLinearConstraintDisabled;
	DWORD m_bIsAngularConstraintDisabled;
	DWORD m_bEnableLinearLimit;
	DWORD m_LinearLimit;
	DWORD m_bEnableLinearMotor;
	DWORD m_vLinearTargetVelocity;
	DWORD m_flMaxForce;
	DWORD m_bEnableSwingLimit;
	DWORD m_SwingLimit;
	DWORD m_bEnableTwistLimit;
	DWORD m_TwistLimit;
	DWORD m_bEnableAngularMotor;
	DWORD m_vAngularTargetVelocity;
	DWORD m_flMaxTorque;
	DWORD m_flLinearFrequency;
	DWORD m_flLinearDampingRatio;
	DWORD m_flAngularFrequency;
	DWORD m_flAngularDampingRatio;
	DWORD m_flFriction;
	DWORD m_flElasticity;
	DWORD m_flElasticDamping;
	DWORD m_flPlasticity;
	DWORD m_Tag;
} VPhysXJoint_t;

inline struct CStateNodeTransitionDataOffsets {
	DWORD m_curve;
	DWORD m_blendDuration;
	DWORD m_resetCycleValue;
	DWORD m_bReset;
	DWORD m_resetCycleOption;
} CStateNodeTransitionData;

inline struct CTimeRemainingMetricEvaluatorOffsets {
	DWORD m_bMatchByTimeRemaining;
	DWORD m_flMaxTimeRemaining;
	DWORD m_bFilterByTimeRemaining;
	DWORD m_flMinTimeRemaining;
} CTimeRemainingMetricEvaluator;

inline struct CModelConfigElementOffsets {
	DWORD m_ElementName;
	DWORD m_NestedElements;
} CModelConfigElement;

inline struct FootFixedSettingsOffsets {
	DWORD m_traceSettings;
	DWORD m_vFootBaseBindPosePositionMS;
	DWORD m_flFootBaseLength;
	DWORD m_flMaxRotationLeft;
	DWORD m_flMaxRotationRight;
	DWORD m_footstepLandedTagIndex;
	DWORD m_bEnableTracing;
	DWORD m_flTraceAngleBlend;
	DWORD m_nDisableTagIndex;
	DWORD m_nFootIndex;
} FootFixedSettings;

inline struct CModelConfigOffsets {
	DWORD m_ConfigName;
	DWORD m_Elements;
	DWORD m_bTopLevel;
	DWORD m_bActiveInEditorByDefault;
} CModelConfig;

inline struct AnimComponentIDOffsets {
	DWORD m_id;
} AnimComponentID;

inline struct VPhysXAggregateData_tOffsets {
	DWORD m_nFlags;
	DWORD m_nRefCounter;
	DWORD m_bonesHash;
	DWORD m_boneNames;
	DWORD m_indexNames;
	DWORD m_indexHash;
	DWORD m_bindPose;
	DWORD m_parts;
	DWORD m_shapeMarkups;
	DWORD m_constraints2;
	DWORD m_joints;
	DWORD m_pFeModel;
	DWORD m_boneParents;
	DWORD m_surfacePropertyHashes;
	DWORD m_collisionAttributes;
	DWORD m_debugPartNames;
	DWORD m_embeddedKeyvalues;
} VPhysXAggregateData_t;

inline struct CNmGraphDefinitionOffsets {
	DWORD m_variationID;
	DWORD m_skeleton;
	DWORD m_persistentNodeIndices;
	DWORD m_nRootNodeIdx;
	DWORD m_controlParameterIDs;
	DWORD m_virtualParameterIDs;
	DWORD m_virtualParameterNodeIndices;
	DWORD m_referencedGraphSlots;
	DWORD m_externalGraphSlots;
	DWORD m_nodePaths;
	DWORD m_resources;
} CNmGraphDefinition;

inline struct CNmSelectorNode__CDefinitionOffsets {
	DWORD m_optionNodeIndices;
	DWORD m_conditionNodeIndices;
} CNmSelectorNode__CDefinition;

inline struct CAnimDemoCaptureSettingsOffsets {
	DWORD m_vecErrorRangeSplineRotation;
	DWORD m_vecErrorRangeSplineTranslation;
	DWORD m_vecErrorRangeSplineScale;
	DWORD m_flIkRotation_MaxSplineError;
	DWORD m_flIkTranslation_MaxSplineError;
	DWORD m_vecErrorRangeQuantizationRotation;
	DWORD m_vecErrorRangeQuantizationTranslation;
	DWORD m_vecErrorRangeQuantizationScale;
	DWORD m_flIkRotation_MaxQuantizationError;
	DWORD m_flIkTranslation_MaxQuantizationError;
	DWORD m_baseSequence;
	DWORD m_nBaseSequenceFrame;
	DWORD m_boneSelectionMode;
	DWORD m_bones;
	DWORD m_ikChains;
} CAnimDemoCaptureSettings;

inline struct IKDemoCaptureSettings_tOffsets {
	DWORD m_parentBoneName;
	DWORD m_eMode;
	DWORD m_ikChainName;
	DWORD m_oneBoneStart;
	DWORD m_oneBoneEnd;
} IKDemoCaptureSettings_t;

inline struct CSeqMultiFetchFlagOffsets {
	DWORD m_bRealtime;
	DWORD m_bCylepose;
	DWORD m_b0D;
	DWORD m_b1D;
	DWORD m_b2D;
	DWORD m_b2D_TRI;
} CSeqMultiFetchFlag;

inline struct PulseRegisterMap_tOffsets {
	DWORD m_Inparams;
	DWORD m_InparamsWhichCanBeMoved;
	DWORD m_Outparams;
} PulseRegisterMap_t;

inline struct VPhysXRange_tOffsets {
	DWORD m_flMin;
	DWORD m_flMax;
} VPhysXRange_t;

inline struct CStopAtGoalUpdateNodeOffsets {
	DWORD m_flOuterRadius;
	DWORD m_flInnerRadius;
	DWORD m_flMaxScale;
	DWORD m_flMinScale;
	DWORD m_damping;
} CStopAtGoalUpdateNode;

inline struct CNmIDEventPercentageThroughNode__CDefinitionOffsets {
	DWORD m_nSourceStateNodeIdx;
	DWORD m_eventConditionRules;
	DWORD m_eventID;
} CNmIDEventPercentageThroughNode__CDefinition;

inline struct CAnimBoneDifferenceOffsets {
	DWORD m_name;
	DWORD m_parent;
	DWORD m_posError;
	DWORD m_bHasRotation;
	DWORD m_bHasMovement;
} CAnimBoneDifference;

inline struct CNmCachedBoolNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_mode;
} CNmCachedBoolNode__CDefinition;

inline struct CActionComponentUpdaterOffsets {
	DWORD m_actions;
} CActionComponentUpdater;

inline struct CDampedPathAnimMotorUpdaterOffsets {
	DWORD m_flAnticipationTime;
	DWORD m_flMinSpeedScale;
	DWORD m_hAnticipationPosParam;
	DWORD m_hAnticipationHeadingParam;
	DWORD m_flSpringConstant;
	DWORD m_flMinSpringTension;
	DWORD m_flMaxSpringTension;
} CDampedPathAnimMotorUpdater;

inline struct CNmCachedFloatNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_mode;
} CNmCachedFloatNode__CDefinition;

inline struct CNmFloatSwitchNode__CDefinitionOffsets {
	DWORD m_nSwitchValueNodeIdx;
	DWORD m_nTrueValueNodeIdx;
	DWORD m_nFalseValueNodeIdx;
	DWORD m_flFalseValue;
	DWORD m_flTrueValue;
} CNmFloatSwitchNode__CDefinition;

inline struct CModelConfigElement_SetMaterialGroupOnAttachedModelsOffsets {
	DWORD m_MaterialGroupName;
} CModelConfigElement_SetMaterialGroupOnAttachedModels;

inline struct CNmEntityAttributeEventBaseOffsets {
	DWORD m_attributeName;
} CNmEntityAttributeEventBase;

inline struct CNmVirtualParameterBoneMaskNode__CDefinitionOffsets {
	DWORD m_nChildNodeIdx;
} CNmVirtualParameterBoneMaskNode__CDefinition;

inline struct CPathHelperUpdateNodeOffsets {
	DWORD m_flStoppingRadius;
	DWORD m_flStoppingSpeedScale;
} CPathHelperUpdateNode;

inline struct MaterialGroup_tOffsets {
	DWORD m_name;
	DWORD m_materials;
} MaterialGroup_t;

inline struct CMorphBundleDataOffsets {
	DWORD m_flULeftSrc;
	DWORD m_flVTopSrc;
	DWORD m_offsets;
	DWORD m_ranges;
} CMorphBundleData;

inline struct CModelConfigElement_UserPickOffsets {
	DWORD m_Choices;
} CModelConfigElement_UserPick;

inline struct CSolveIKTargetHandle_tOffsets {
	DWORD m_positionHandle;
	DWORD m_orientationHandle;
} CSolveIKTargetHandle_t;

inline struct CFootAdjustmentUpdateNodeOffsets {
	DWORD m_clips;
	DWORD m_hBasePoseCacheHandle;
	DWORD m_facingTarget;
	DWORD m_flTurnTimeMin;
	DWORD m_flTurnTimeMax;
	DWORD m_flStepHeightMax;
	DWORD m_flStepHeightMaxAngle;
	DWORD m_bResetChild;
	DWORD m_bAnimationDriven;
} CFootAdjustmentUpdateNode;

inline struct CAimConstraintOffsets {
	DWORD m_qAimOffset;
	DWORD m_nUpType;
} CAimConstraint;

inline struct CMaterialDrawDescriptor__RigidMeshPart_tOffsets {
	DWORD m_nRigidBLASIndex;
	DWORD m_nBoneIndex;
	DWORD m_nStartIndexOffset;
	DWORD m_nPrimitiveCount;
} CMaterialDrawDescriptor__RigidMeshPart_t;

inline struct CFootFallAnimTagOffsets {
	DWORD m_foot;
} CFootFallAnimTag;

inline struct CMaterialDrawDescriptorOffsets {
	DWORD m_flUvDensity;
	DWORD m_vTintColor;
	DWORD m_flAlpha;
	DWORD m_nNumMeshlets;
	DWORD m_nFirstMeshlet;
	DWORD m_nAppliedIndexOffset;
	DWORD m_nDepthVertexBufferIndex;
	DWORD m_nMeshletPackedIVBIndex;
	DWORD m_rigidMeshParts;
	DWORD m_nPrimitiveType;
	DWORD m_nBaseVertex;
	DWORD m_nVertexCount;
	DWORD m_nStartIndex;
	DWORD m_nIndexCount;
	DWORD m_indexBuffer;
	DWORD m_meshletPackedIVB;
	DWORD m_material;
} CMaterialDrawDescriptor;

inline struct CNmSkeletonOffsets {
	DWORD m_ID;
	DWORD m_boneIDs;
	DWORD m_parentIndices;
	DWORD m_parentSpaceReferencePose;
	DWORD m_modelSpaceReferencePose;
	DWORD m_numBonesToSampleAtLowLOD;
	DWORD m_maskDefinitions;
	DWORD m_secondarySkeletons;
	DWORD m_bIsPropSkeleton;
} CNmSkeleton;

inline struct CStepsRemainingMetricEvaluatorOffsets {
	DWORD m_footIndices;
	DWORD m_flMinStepsRemaining;
} CStepsRemainingMetricEvaluator;

inline struct CBodyGroupSettingOffsets {
	DWORD m_BodyGroupName;
	DWORD m_nBodyGroupOption;
} CBodyGroupSetting;

inline struct CVectorQuantizerOffsets {
	DWORD m_centroidVectors;
	DWORD m_nCentroids;
	DWORD m_nDimensions;
} CVectorQuantizer;

inline struct ParticleNamedValueConfiguration_tOffsets {
	DWORD m_ConfigName;
	DWORD m_ConfigValue;
	DWORD m_BoundValuePath;
	DWORD m_iAttachType;
	DWORD m_strEntityScope;
	DWORD m_strAttachmentName;
} ParticleNamedValueConfiguration_t;

inline struct CNmVectorCreateNode__CDefinitionOffsets {
	DWORD m_inputVectorValueNodeIdx;
	DWORD m_inputValueXNodeIdx;
	DWORD m_inputValueYNodeIdx;
	DWORD m_inputValueZNodeIdx;
} CNmVectorCreateNode__CDefinition;

inline struct CParticleVecInputOffsets {
	DWORD m_nType;
	DWORD m_vLiteralValue;
	DWORD m_LiteralColor;
	DWORD m_NamedValue;
	DWORD m_bFollowNamedValue;
	DWORD m_nVectorAttribute;
	DWORD m_vVectorAttributeScale;
	DWORD m_nControlPoint;
	DWORD m_nDeltaControlPoint;
	DWORD m_vCPValueScale;
	DWORD m_vCPRelativePosition;
	DWORD m_vCPRelativeDir;
	DWORD m_FloatComponentX;
	DWORD m_FloatComponentY;
	DWORD m_FloatComponentZ;
	DWORD m_FloatInterp;
	DWORD m_flInterpInput0;
	DWORD m_flInterpInput1;
	DWORD m_vInterpOutput0;
	DWORD m_vInterpOutput1;
	DWORD m_Gradient;
	DWORD m_vRandomMin;
	DWORD m_vRandomMax;
} CParticleVecInput;

inline struct CNmStateNode__CDefinitionOffsets {
	DWORD m_nChildNodeIdx;
	DWORD m_entryEvents;
	DWORD m_executeEvents;
	DWORD m_exitEvents;
	DWORD m_timedRemainingEvents;
	DWORD m_timedElapsedEvents;
	DWORD m_nLayerWeightNodeIdx;
	DWORD m_nLayerRootMotionWeightNodeIdx;
	DWORD m_nLayerBoneMaskNodeIdx;
	DWORD m_bIsOffState;
	DWORD m_bUseActualElapsedTimeInStateForTimedEvents;
} CNmStateNode__CDefinition;

inline struct CNmBoneMaskSelectorNode__CDefinitionOffsets {
	DWORD m_defaultMaskNodeIdx;
	DWORD m_parameterValueNodeIdx;
	DWORD m_switchDynamically;
	DWORD m_maskNodeIndices;
	DWORD m_parameterValues;
	DWORD m_flBlendTimeSeconds;
} CNmBoneMaskSelectorNode__CDefinition;

inline struct CNmVirtualParameterVectorNode__CDefinitionOffsets {
	DWORD m_nChildNodeIdx;
} CNmVirtualParameterVectorNode__CDefinition;

inline struct CFootCycleMetricEvaluatorOffsets {
	DWORD m_footIndices;
} CFootCycleMetricEvaluator;

inline struct CNmConstIDNode__CDefinitionOffsets {
	DWORD m_value;
} CNmConstIDNode__CDefinition;

inline struct CHitBoxOffsets {
	DWORD m_name;
	DWORD m_sSurfaceProperty;
	DWORD m_sBoneName;
	DWORD m_vMinBounds;
	DWORD m_vMaxBounds;
	DWORD m_flShapeRadius;
	DWORD m_nBoneNameHash;
	DWORD m_nGroupId;
	DWORD m_nShapeType;
	DWORD m_bTranslationOnly;
	DWORD m_CRC;
	DWORD m_cRenderColor;
	DWORD m_nHitBoxIndex;
} CHitBox;

inline struct CNmParameterizedSelectorNode__CDefinitionOffsets {
	DWORD m_optionNodeIndices;
	DWORD m_optionWeights;
	DWORD m_parameterNodeIdx;
	DWORD m_bIgnoreInvalidOptions;
	DWORD m_bHasWeightsSet;
} CNmParameterizedSelectorNode__CDefinition;

inline struct ModelSkeletonData_tOffsets {
	DWORD m_boneName;
	DWORD m_nParent;
	DWORD m_boneSphere;
	DWORD m_nFlag;
	DWORD m_bonePosParent;
	DWORD m_boneRotParent;
	DWORD m_boneScaleParent;
} ModelSkeletonData_t;

inline struct CNmEventOffsets {
	DWORD m_flStartTimeSeconds;
	DWORD m_flDurationSeconds;
	DWORD m_syncID;
	DWORD m_bClientOnly;
} CNmEvent;

inline struct NmCompressionSettings_t__QuantizationRange_tOffsets {
	DWORD m_flRangeStart;
	DWORD m_flRangeLength;
} NmCompressionSettings_t__QuantizationRange_t;

inline struct TagSpan_tOffsets {
	DWORD m_tagIndex;
	DWORD m_startCycle;
	DWORD m_endCycle;
} TagSpan_t;

inline struct CNmConstTargetNode__CDefinitionOffsets {
	DWORD m_value;
} CNmConstTargetNode__CDefinition;

inline struct CRemapValueUpdateItemOffsets {
	DWORD m_hParamIn;
	DWORD m_hParamOut;
	DWORD m_flMinInputValue;
	DWORD m_flMaxInputValue;
	DWORD m_flMinOutputValue;
	DWORD m_flMaxOutputValue;
} CRemapValueUpdateItem;

inline struct PermModelDataAnimatedMaterialAttribute_tOffsets {
	DWORD m_AttributeName;
	DWORD m_nNumChannels;
} PermModelDataAnimatedMaterialAttribute_t;

inline struct CMotionDataSetOffsets {
	DWORD m_groups;
	DWORD m_nDimensionCount;
} CMotionDataSet;

inline struct CProductQuantizerOffsets {
	DWORD m_subQuantizers;
	DWORD m_nDimensions;
} CProductQuantizer;

inline struct CChoiceUpdateNodeOffsets {
	DWORD m_children;
	DWORD m_weights;
	DWORD m_blendTimes;
	DWORD m_choiceMethod;
	DWORD m_choiceChangeMethod;
	DWORD m_blendMethod;
	DWORD m_blendTime;
	DWORD m_bCrossFade;
	DWORD m_bResetChosen;
	DWORD m_bDontResetSameSelection;
} CChoiceUpdateNode;

inline struct SkeletonAnimCapture_t__Bone_tOffsets {
	DWORD m_Name;
	DWORD m_BindPose;
	DWORD m_nParent;
} SkeletonAnimCapture_t__Bone_t;

inline struct CExpressionActionUpdaterOffsets {
	DWORD m_hParam;
	DWORD m_eParamType;
	DWORD m_hScript;
} CExpressionActionUpdater;

inline struct CNmFloatMathNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdxA;
	DWORD m_nInputValueNodeIdxB;
	DWORD m_bReturnAbsoluteResult;
	DWORD m_bReturnNegatedResult;
	DWORD m_operator;
	DWORD m_flValueB;
} CNmFloatMathNode__CDefinition;

inline struct CAnimationGraphVisualizerLineOffsets {
	DWORD m_vWsPositionStart;
	DWORD m_vWsPositionEnd;
	DWORD m_Color;
} CAnimationGraphVisualizerLine;

inline struct CCycleControlUpdateNodeOffsets {
	DWORD m_valueSource;
	DWORD m_paramIndex;
	DWORD m_bLockWhenWaning;
} CCycleControlUpdateNode;

inline struct CNmTargetInfoNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_infoType;
	DWORD m_bIsWorldSpaceTarget;
} CNmTargetInfoNode__CDefinition;

inline struct CDampedValueComponentUpdaterOffsets {
	DWORD m_items;
} CDampedValueComponentUpdater;

inline struct CBaseConstraintOffsets {
	DWORD m_name;
	DWORD m_vUpVector;
	DWORD m_slaves;
	DWORD m_targets;
} CBaseConstraint;

inline struct BlendItem_tOffsets {
	DWORD m_tags;
	DWORD m_pChild;
	DWORD m_hSequence;
	DWORD m_vPos;
	DWORD m_flDuration;
	DWORD m_bUseCustomDuration;
} BlendItem_t;

inline struct CNewParticleEffectOffsets {
	DWORD m_pNext;
	DWORD m_pPrev;
	DWORD m_pParticles;
	DWORD m_pDebugName;
	DWORD m_bDontRemove;
	DWORD m_bRemove;
	DWORD m_bNeedsBBoxUpdate;
	DWORD m_bIsFirstFrame;
	DWORD m_bAutoUpdateBBox;
	DWORD m_bAllocated;
	DWORD m_bSimulate;
	DWORD m_bShouldPerformCullCheck;
	DWORD m_bForceNoDraw;
	DWORD m_bSuppressScreenSpaceEffect;
	DWORD m_bShouldSave;
	DWORD m_bShouldSimulateDuringGamePaused;
	DWORD m_bShouldCheckFoW;
	DWORD m_bIsAsyncCreate;
	DWORD m_bFreezeTransitionActive;
	DWORD m_bFreezeTargetState;
	DWORD m_bCanFreeze;
	DWORD m_vSortOrigin;
	DWORD m_flScale;
	DWORD m_hOwner;
	DWORD m_pOwningParticleProperty;
	DWORD m_flFreezeTransitionStart;
	DWORD m_flFreezeTransitionDuration;
	DWORD m_flFreezeTransitionOverride;
	DWORD m_LastMin;
	DWORD m_LastMax;
	DWORD m_nSplitScreenUser;
	DWORD m_vecAggregationCenter;
	DWORD m_RefCount;
} CNewParticleEffect;

inline struct CNmClipNode__CDefinitionOffsets {
	DWORD m_nPlayInReverseValueNodeIdx;
	DWORD m_nResetTimeValueNodeIdx;
	DWORD m_flSpeedMultiplier;
	DWORD m_nStartSyncEventOffset;
	DWORD m_bSampleRootMotion;
	DWORD m_bAllowLooping;
	DWORD m_nDataSlotIdx;
} CNmClipNode__CDefinition;

inline struct CNmMaterialAttributeEventOffsets {
	DWORD m_attributeName;
	DWORD m_attributeNameToken;
	DWORD m_x;
	DWORD m_y;
	DWORD m_z;
	DWORD m_w;
} CNmMaterialAttributeEvent;

inline struct CNmBlend1DNode__CDefinitionOffsets {
	DWORD m_parameterization;
} CNmBlend1DNode__CDefinition;

inline struct CConcreteAnimParameterOffsets {
	DWORD m_previewButton;
	DWORD m_eNetworkSetting;
	DWORD m_bUseMostRecentValue;
	DWORD m_bAutoReset;
	DWORD m_bGameWritable;
	DWORD m_bGraphWritable;
} CConcreteAnimParameter;

inline struct CNmBoneWeightListOffsets {
	DWORD m_skeletonName;
	DWORD m_boneIDs;
	DWORD m_weights;
} CNmBoneWeightList;

inline struct CPairedSequenceUpdateNodeOffsets {
	DWORD m_sPairedSequenceRole;
} CPairedSequenceUpdateNode;

inline struct CModelConfigElement_RandomPickOffsets {
	DWORD m_Choices;
	DWORD m_ChoiceWeights;
} CModelConfigElement_RandomPick;

inline struct CNmScaleNode__CDefinitionOffsets {
	DWORD m_nMaskNodeIdx;
	DWORD m_nEnableNodeIdx;
} CNmScaleNode__CDefinition;

inline struct VPhysXConstraint2_tOffsets {
	DWORD m_nFlags;
	DWORD m_nParent;
	DWORD m_nChild;
	DWORD m_params;
} VPhysXConstraint2_t;

inline struct CConstraintTargetOffsets {
	DWORD m_qOffset;
	DWORD m_vOffset;
	DWORD m_nBoneHash;
	DWORD m_sName;
	DWORD m_flWeight;
	DWORD m_bIsAttachment;
} CConstraintTarget;

inline struct SkeletonAnimCapture_tOffsets {
	DWORD m_nEntIndex;
	DWORD m_nEntParent;
	DWORD m_ImportedCollision;
	DWORD m_ModelName;
	DWORD m_CaptureName;
	DWORD m_ModelBindPose;
	DWORD m_FeModelInitPose;
	DWORD m_nFlexControllers;
	DWORD m_bPredicted;
	DWORD m_Frames;
} SkeletonAnimCapture_t;

inline struct CAnimUserOffsets {
	DWORD m_name;
	DWORD m_nType;
} CAnimUser;

inline struct CRagdollComponentUpdaterOffsets {
	DWORD m_ragdollNodePaths;
	DWORD m_followAttachmentNodePaths;
	DWORD m_boneIndices;
	DWORD m_boneNames;
	DWORD m_weightLists;
	DWORD m_boneToWeightIndices;
	DWORD m_flSpringFrequencyMin;
	DWORD m_flSpringFrequencyMax;
	DWORD m_flMaxStretch;
	DWORD m_bSolidCollisionAtZeroWeight;
} CRagdollComponentUpdater;

inline struct ParticleNamedValueSource_tOffsets {
	DWORD m_Name;
	DWORD m_IsPublic;
	DWORD m_ValueType;
	DWORD m_DefaultConfig;
} ParticleNamedValueSource_t;

inline struct CFootDefinitionOffsets {
	DWORD m_name;
	DWORD m_ankleBoneName;
	DWORD m_toeBoneName;
	DWORD m_vBallOffset;
	DWORD m_vHeelOffset;
	DWORD m_flFootLength;
	DWORD m_flBindPoseDirectionMS;
	DWORD m_flTraceHeight;
	DWORD m_flTraceRadius;
} CFootDefinition;

inline struct CSeqSynthAnimDescOffsets {
	DWORD m_sName;
	DWORD m_flags;
	DWORD m_transition;
	DWORD m_nLocalBaseReference;
	DWORD m_nLocalBoneMask;
	DWORD m_activityArray;
} CSeqSynthAnimDesc;

inline struct CNmLayerBlendNode__LayerDefinition_tOffsets {
	DWORD m_nInputNodeIdx;
	DWORD m_nWeightValueNodeIdx;
	DWORD m_nBoneMaskValueNodeIdx;
	DWORD m_nRootMotionWeightValueNodeIdx;
	DWORD m_bIsSynchronized;
	DWORD m_bIgnoreEvents;
	DWORD m_bIsStateMachineLayer;
	DWORD m_blendMode;
} CNmLayerBlendNode__LayerDefinition_t;

inline struct CAnimComponentUpdaterOffsets {
	DWORD m_name;
	DWORD m_id;
	DWORD m_networkMode;
	DWORD m_bStartEnabled;
} CAnimComponentUpdater;

inline struct CBlend2DUpdateNodeOffsets {
	DWORD m_items;
	DWORD m_tags;
	DWORD m_paramSpans;
	DWORD m_nodeItemIndices;
	DWORD m_damping;
	DWORD m_blendSourceX;
	DWORD m_paramX;
	DWORD m_blendSourceY;
	DWORD m_paramY;
	DWORD m_eBlendMode;
	DWORD m_playbackSpeed;
	DWORD m_bLoop;
	DWORD m_bLockBlendOnReset;
	DWORD m_bLockWhenWaning;
	DWORD m_bAnimEventsAndTagsOnMostWeightedOnly;
} CBlend2DUpdateNode;

inline struct CNPCPhysicsHullOffsets {
	DWORD m_sName;
	DWORD m_eType;
	DWORD m_flCapsuleHeight;
	DWORD m_flCapsuleRadius;
	DWORD m_vCapsuleCenter1;
	DWORD m_vCapsuleCenter2;
	DWORD m_flGroundBoxHeight;
	DWORD m_flGroundBoxWidth;
} CNPCPhysicsHull;

inline struct PermModelExtPart_tOffsets {
	DWORD m_Transform;
	DWORD m_Name;
	DWORD m_nParent;
	DWORD m_refModel;
} PermModelExtPart_t;

inline struct CNmCachedIDNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_mode;
} CNmCachedIDNode__CDefinition;

inline struct CLeanMatrixUpdateNodeOffsets {
	DWORD m_frameCorners;
	DWORD m_poses;
	DWORD m_damping;
	DWORD m_blendSource;
	DWORD m_paramIndex;
	DWORD m_verticalAxis;
	DWORD m_horizontalAxis;
	DWORD m_hSequence;
	DWORD m_flMaxValue;
	DWORD m_nSequenceMaxFrame;
} CLeanMatrixUpdateNode;

inline struct CSymbolAnimParameterOffsets {
	DWORD m_defaultValue;
} CSymbolAnimParameter;

inline struct CNmFloatCurveEventNode__CDefinitionOffsets {
	DWORD m_eventID;
	DWORD m_nDefaultNodeIdx;
	DWORD m_flDefaultValue;
	DWORD m_eventConditionRules;
} CNmFloatCurveEventNode__CDefinition;

inline struct CNmStateMachineNode__TransitionDefinition_tOffsets {
	DWORD m_nTargetStateIdx;
	DWORD m_nConditionNodeIdx;
	DWORD m_nTransitionNodeIdx;
	DWORD m_bCanBeForced;
} CNmStateMachineNode__TransitionDefinition_t;

inline struct CNmFloatSelectorNode__CDefinitionOffsets {
	DWORD m_conditionNodeIndices;
	DWORD m_values;
	DWORD m_flDefaultValue;
	DWORD m_flEaseTime;
	DWORD m_easingOp;
} CNmFloatSelectorNode__CDefinition;

inline struct CTargetSelectorUpdateNodeOffsets {
	DWORD m_eAngleMode;
	DWORD m_children;
	DWORD m_hTargetPosition;
	DWORD m_hTargetFacePositionParameter;
	DWORD m_hMoveHeadingParameter;
	DWORD m_hDesiredMoveHeadingParameter;
	DWORD m_bTargetPositionIsWorldSpace;
	DWORD m_bTargetFacePositionIsWorldSpace;
	DWORD m_bEnablePhaseMatching;
	DWORD m_flPhaseMatchingMaxRootMotionSkip;
} CTargetSelectorUpdateNode;

inline struct CHitBoxSetListOffsets {
	DWORD m_HitBoxSets;
} CHitBoxSetList;

inline struct MotionDBIndexOffsets {
	DWORD m_nIndex;
} MotionDBIndex;

inline struct CDirectPlaybackTagDataOffsets {
	DWORD m_sequenceName;
	DWORD m_tags;
} CDirectPlaybackTagData;

inline struct CNmGraphEventConditionNode__Condition_tOffsets {
	DWORD m_eventID;
	DWORD m_eventTypeCondition;
} CNmGraphEventConditionNode__Condition_t;

inline struct CNmFloatRemapNode__RemapRange_tOffsets {
	DWORD m_flBegin;
	DWORD m_flEnd;
} CNmFloatRemapNode__RemapRange_t;

inline struct CNmCurrentSyncEventIDNode__CDefinitionOffsets {
	DWORD m_nSourceStateNodeIdx;
} CNmCurrentSyncEventIDNode__CDefinition;

inline struct CNmStateCompletedConditionNode__CDefinitionOffsets {
	DWORD m_nSourceStateNodeIdx;
	DWORD m_nTransitionDurationOverrideNodeIdx;
	DWORD m_flTransitionDurationSeconds;
} CNmStateCompletedConditionNode__CDefinition;

inline struct CNmTargetWarpEventOffsets {
	DWORD m_rule;
	DWORD m_algorithm;
} CNmTargetWarpEvent;

inline struct CParamSpanUpdaterOffsets {
	DWORD m_spans;
} CParamSpanUpdater;

inline struct CParticleAnimTagOffsets {
	DWORD m_hParticleSystem;
	DWORD m_particleSystemName;
	DWORD m_configName;
	DWORD m_bDetachFromOwner;
	DWORD m_bAggregate;
	DWORD m_bStopWhenTagEnds;
	DWORD m_bTagEndStopIsInstant;
	DWORD m_attachmentName;
	DWORD m_attachmentType;
	DWORD m_attachmentCP1Name;
	DWORD m_attachmentCP1Type;
} CParticleAnimTag;

inline struct CCycleBaseOffsets {
	DWORD m_flCycle;
} CCycleBase;

inline struct FollowTargetOpFixedSettings_tOffsets {
	DWORD m_boneIndex;
	DWORD m_bBoneTarget;
	DWORD m_boneTargetIndex;
	DWORD m_bWorldCoodinateTarget;
	DWORD m_bMatchTargetOrientation;
} FollowTargetOpFixedSettings_t;

inline struct CNmIDSwitchNode__CDefinitionOffsets {
	DWORD m_nSwitchValueNodeIdx;
	DWORD m_nTrueValueNodeIdx;
	DWORD m_nFalseValueNodeIdx;
	DWORD m_falseValue;
	DWORD m_trueValue;
} CNmIDSwitchNode__CDefinition;

inline struct CNmRootMotionEventOffsets {
	DWORD m_flBlendTimeSeconds;
} CNmRootMotionEvent;

inline struct CPulse_PublicOutputOffsets {
	DWORD m_Name;
	DWORD m_Description;
	DWORD m_Args;
} CPulse_PublicOutput;

inline struct AnimationSnapshotBase_tOffsets {
	DWORD m_flRealTime;
	DWORD m_rootToWorld;
	DWORD m_bBonesInWorldSpace;
	DWORD m_boneSetupMask;
	DWORD m_boneTransforms;
	DWORD m_flexControllers;
	DWORD m_SnapshotType;
	DWORD m_bHasDecodeDump;
	DWORD m_DecodeDump;
} AnimationSnapshotBase_t;

inline struct CNmIKEffectorOffsets {
	DWORD m_nBodyIndex;
	DWORD m_bEnabled;
	DWORD m_vTargetPosition;
	DWORD m_qTargetOrientation;
	DWORD m_flWeight;
} CNmIKEffector;

inline struct CEmitTagActionUpdaterOffsets {
	DWORD m_nTagIndex;
	DWORD m_bIsZeroDuration;
} CEmitTagActionUpdater;

inline struct DynamicMeshDeformParams_tOffsets {
	DWORD m_flTensionCompressScale;
	DWORD m_flTensionStretchScale;
	DWORD m_bRecomputeSmoothNormalsAfterAnimation;
	DWORD m_bComputeDynamicMeshTensionAfterAnimation;
	DWORD m_bSmoothNormalsAcrossUvSeams;
} DynamicMeshDeformParams_t;

inline struct CNmTimeConditionNode__CDefinitionOffsets {
	DWORD m_sourceStateNodeIdx;
	DWORD m_nInputValueNodeIdx;
	DWORD m_flComparand;
	DWORD m_type;
	DWORD m_operator;
} CNmTimeConditionNode__CDefinition;

inline struct CNmSyncEventIndexConditionNode__CDefinitionOffsets {
	DWORD m_nSourceStateNodeIdx;
	DWORD m_triggerMode;
	DWORD m_syncEventIdx;
} CNmSyncEventIndexConditionNode__CDefinition;

inline struct CAnimStateMachineUpdaterOffsets {
	DWORD m_states;
	DWORD m_transitions;
	DWORD m_startStateIndex;
} CAnimStateMachineUpdater;

inline struct CUnaryUpdateNodeOffsets {
	DWORD m_pChildNode;
} CUnaryUpdateNode;

inline struct CNmIDToFloatNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_defaultValue;
	DWORD m_IDs;
	DWORD m_values;
} CNmIDToFloatNode__CDefinition;

inline struct CCompressorGroupOffsets {
	DWORD m_nTotalElementCount;
	DWORD m_szChannelClass;
	DWORD m_szVariableName;
	DWORD m_nType;
	DWORD m_nFlags;
	DWORD m_szGrouping;
	DWORD m_nCompressorIndex;
	DWORD m_szElementNames;
	DWORD m_nElementUniqueID;
	DWORD m_nElementMask;
	DWORD m_vectorCompressor;
	DWORD m_quaternionCompressor;
	DWORD m_intCompressor;
	DWORD m_boolCompressor;
	DWORD m_colorCompressor;
	DWORD m_vector2DCompressor;
	DWORD m_vector4DCompressor;
} CCompressorGroup;

inline struct CSelectorUpdateNodeOffsets {
	DWORD m_children;
	DWORD m_tags;
	DWORD m_blendCurve;
	DWORD m_flBlendTime;
	DWORD m_hParameter;
	DWORD m_nTagIndex;
	DWORD m_eTagBehavior;
	DWORD m_bResetOnChange;
	DWORD m_bLockWhenWaning;
	DWORD m_bSyncCyclesOnChange;
} CSelectorUpdateNode;

inline struct NmPercent_tOffsets {
	DWORD m_flValue;
} NmPercent_t;

inline struct CStateMachineComponentUpdaterOffsets {
	DWORD m_stateMachine;
} CStateMachineComponentUpdater;

inline struct CAnimUpdateNodeRefOffsets {
	DWORD m_nodeIndex;
} CAnimUpdateNodeRef;

inline struct CPulse_OutputConnectionOffsets {
	DWORD m_SourceOutput;
	DWORD m_TargetEntity;
	DWORD m_TargetInput;
	DWORD m_Param;
} CPulse_OutputConnection;

inline struct CPhysSurfacePropertiesOffsets {
	DWORD m_name;
	DWORD m_nameHash;
	DWORD m_baseNameHash;
	DWORD m_bHidden;
	DWORD m_description;
	DWORD m_physics;
	DWORD m_vehicleParams;
	DWORD m_audioSounds;
	DWORD m_audioParams;
} CPhysSurfaceProperties;

inline struct CSeqPoseParamDescOffsets {
	DWORD m_sName;
	DWORD m_flStart;
	DWORD m_flEnd;
	DWORD m_flLoop;
	DWORD m_bLooping;
} CSeqPoseParamDesc;

inline struct CModelConfigElement_SetBodygroupOffsets {
	DWORD m_GroupName;
	DWORD m_nChoice;
} CModelConfigElement_SetBodygroup;

inline struct CAnimMovementOffsets {
	DWORD endframe;
	DWORD motionflags;
	DWORD v0;
	DWORD v1;
	DWORD angle;
	DWORD vector;
	DWORD position;
} CAnimMovement;

inline struct FollowAttachmentDataOffsets {
	DWORD m_boneIndex;
	DWORD m_attachmentHandle;
} FollowAttachmentData;

inline struct FootStepTriggerOffsets {
	DWORD m_tags;
	DWORD m_nFootIndex;
	DWORD m_triggerPhase;
} FootStepTrigger;

inline struct CNmSyncTrack__EventMarker_tOffsets {
	DWORD m_startTime;
	DWORD m_ID;
} CNmSyncTrack__EventMarker_t;

inline struct CPathMetricEvaluatorOffsets {
	DWORD m_pathTimeSamples;
	DWORD m_flDistance;
	DWORD m_bExtrapolateMovement;
	DWORD m_flMinExtrapolationSpeed;
} CPathMetricEvaluator;

inline struct CFootLockUpdateNodeOffsets {
	DWORD m_opFixedSettings;
	DWORD m_footSettings;
	DWORD m_hipShiftDamping;
	DWORD m_rootHeightDamping;
	DWORD m_flStrideCurveScale;
	DWORD m_flStrideCurveLimitScale;
	DWORD m_flStepHeightIncreaseScale;
	DWORD m_flStepHeightDecreaseScale;
	DWORD m_flHipShiftScale;
	DWORD m_flBlendTime;
	DWORD m_flMaxRootHeightOffset;
	DWORD m_flMinRootHeightOffset;
	DWORD m_flTiltPlanePitchSpringStrength;
	DWORD m_flTiltPlaneRollSpringStrength;
	DWORD m_bApplyFootRotationLimits;
	DWORD m_bApplyHipShift;
	DWORD m_bModulateStepHeight;
	DWORD m_bResetChild;
	DWORD m_bEnableVerticalCurvedPaths;
	DWORD m_bEnableRootHeightDamping;
} CFootLockUpdateNode;

inline struct PulseGraphExecutionHistoryNodeDesc_tOffsets {
	DWORD strCellDesc;
	DWORD strBindingName;
} PulseGraphExecutionHistoryNodeDesc_t;

inline struct JiggleBoneSettings_tOffsets {
	DWORD m_nBoneIndex;
	DWORD m_flSpringStrength;
	DWORD m_flMaxTimeStep;
	DWORD m_flDamping;
	DWORD m_vBoundsMaxLS;
	DWORD m_vBoundsMinLS;
	DWORD m_eSimSpace;
} JiggleBoneSettings_t;

inline struct CJumpHelperUpdateNodeOffsets {
	DWORD m_hTargetParam;
	DWORD m_flOriginalJumpMovement;
	DWORD m_flOriginalJumpDuration;
	DWORD m_flJumpStartCycle;
	DWORD m_flJumpEndCycle;
	DWORD m_eCorrectionMethod;
	DWORD m_bTranslationAxis;
	DWORD m_bScaleSpeed;
} CJumpHelperUpdateNode;

inline struct CNmChainLookatTaskOffsets {
	DWORD m_nChainEndBoneIdx;
	DWORD m_nNumBonesInChain;
	DWORD m_chainForwardDir;
	DWORD m_flBlendWeight;
	DWORD m_flHorizontalAngleLimitDegrees;
	DWORD m_flVerticalAngleLimitDegrees;
	DWORD m_lookatTarget;
	DWORD m_bIsTargetInWorldSpace;
	DWORD m_bIsRunningFromDeserializedData;
	DWORD m_flHorizontalAngleDegrees;
	DWORD m_flVerticalAngleDegrees;
} CNmChainLookatTask;

inline struct FootLockPoseOpFixedSettingsOffsets {
	DWORD m_footInfo;
	DWORD m_hipDampingSettings;
	DWORD m_nHipBoneIndex;
	DWORD m_ikSolverType;
	DWORD m_bApplyTilt;
	DWORD m_bApplyHipDrop;
	DWORD m_bAlwaysUseFallbackHinge;
	DWORD m_bApplyFootRotationLimits;
	DWORD m_bApplyLegTwistLimits;
	DWORD m_flMaxFootHeight;
	DWORD m_flExtensionScale;
	DWORD m_flMaxLegTwist;
	DWORD m_bEnableLockBreaking;
	DWORD m_flLockBreakTolerance;
	DWORD m_flLockBlendTime;
	DWORD m_bEnableStretching;
	DWORD m_flMaxStretchAmount;
	DWORD m_flStretchExtensionScale;
} FootLockPoseOpFixedSettings;

inline struct CBoneVelocityMetricEvaluatorOffsets {
	DWORD m_nBoneIndex;
} CBoneVelocityMetricEvaluator;

inline struct CWarpSectionAnimTagOffsets {
	DWORD m_bWarpPosition;
	DWORD m_bWarpOrientation;
} CWarpSectionAnimTag;

inline struct CModelConfigElement_RandomColorOffsets {
	DWORD m_Gradient;
} CModelConfigElement_RandomColor;

inline struct CFootMotionOffsets {
	DWORD m_strides;
	DWORD m_name;
	DWORD m_bAdditive;
} CFootMotion;

inline struct CJiggleBoneUpdateNodeOffsets {
	DWORD m_opFixedData;
} CJiggleBoneUpdateNode;

inline struct CNmConstVectorNode__CDefinitionOffsets {
	DWORD m_value;
} CNmConstVectorNode__CDefinition;

inline struct MoodAnimation_tOffsets {
	DWORD m_sName;
	DWORD m_flWeight;
} MoodAnimation_t;

inline struct CLODComponentUpdaterOffsets {
	DWORD m_nServerLOD;
} CLODComponentUpdater;

inline struct CNmIsTargetSetNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
} CNmIsTargetSetNode__CDefinition;

inline struct CPhysSurfacePropertiesVehicleOffsets {
	DWORD m_wheelDrag;
	DWORD m_wheelFrictionScale;
} CPhysSurfacePropertiesVehicle;

inline struct CAnimDataChannelDescOffsets {
	DWORD m_szChannelClass;
	DWORD m_szVariableName;
	DWORD m_nFlags;
	DWORD m_nType;
	DWORD m_szGrouping;
	DWORD m_szDescription;
	DWORD m_szElementNameArray;
	DWORD m_nElementIndexArray;
	DWORD m_nElementMaskArray;
} CAnimDataChannelDesc;

inline struct CNmParticleEventOffsets {
	DWORD m_relevance;
	DWORD m_type;
	DWORD m_hParticleSystem;
	DWORD m_tags;
	DWORD m_bStopImmediately;
	DWORD m_bDetachFromOwner;
	DWORD m_bPlayEndCap;
	DWORD m_attachmentPoint0;
	DWORD m_attachmentType0;
	DWORD m_attachmentPoint1;
	DWORD m_attachmentType1;
	DWORD m_config;
	DWORD m_effectForConfig;
} CNmParticleEvent;

inline struct CMorphRectDataOffsets {
	DWORD m_nXLeftDst;
	DWORD m_nYTopDst;
	DWORD m_flUWidthSrc;
	DWORD m_flVHeightSrc;
	DWORD m_bundleDatas;
} CMorphRectData;

inline struct CAnimFootOffsets {
	DWORD m_name;
	DWORD m_vBallOffset;
	DWORD m_vHeelOffset;
	DWORD m_ankleBoneIndex;
	DWORD m_toeBoneIndex;
} CAnimFoot;

inline struct CNmCachedVectorNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_mode;
} CNmCachedVectorNode__CDefinition;

inline struct CNmStateNode__TimedEvent_tOffsets {
	DWORD m_ID;
	DWORD m_flTimeValueSeconds;
	DWORD m_comparisionOperator;
} CNmStateNode__TimedEvent_t;

inline struct CFootPositionMetricEvaluatorOffsets {
	DWORD m_footIndices;
	DWORD m_bIgnoreSlope;
} CFootPositionMetricEvaluator;

inline struct CParticleVariableRefOffsets {
	DWORD m_variableName;
	DWORD m_variableType;
} CParticleVariableRef;

inline struct HSequenceOffsets {
	DWORD m_Value;
} HSequence;

inline struct CDampedValueUpdateItemOffsets {
	DWORD m_damping;
	DWORD m_hParamIn;
	DWORD m_hParamOut;
} CDampedValueUpdateItem;

inline struct CAnimLocalHierarchyOffsets {
	DWORD m_sBone;
	DWORD m_sNewParent;
	DWORD m_nStartFrame;
	DWORD m_nPeakFrame;
	DWORD m_nTailFrame;
	DWORD m_nEndFrame;
} CAnimLocalHierarchy;

inline struct CBlendUpdateNodeOffsets {
	DWORD m_children;
	DWORD m_sortedOrder;
	DWORD m_targetValues;
	DWORD m_blendValueSource;
	DWORD m_eLinearRootMotionBlendMode;
	DWORD m_paramIndex;
	DWORD m_damping;
	DWORD m_blendKeyType;
	DWORD m_bLockBlendOnReset;
	DWORD m_bSyncCycles;
	DWORD m_bLoop;
	DWORD m_bLockWhenWaning;
	DWORD m_bIsAngle;
} CBlendUpdateNode;

inline struct PulseGraphExecutionHistoryEntry_tOffsets {
	DWORD nCursorID;
	DWORD nEditorID;
	DWORD flExecTime;
	DWORD unFlags;
	DWORD tagName;
} PulseGraphExecutionHistoryEntry_t;

inline struct CQuaternionAnimParameterOffsets {
	DWORD m_defaultValue;
	DWORD m_bInterpolate;
} CQuaternionAnimParameter;

inline struct PermModelData_tOffsets {
	DWORD m_name;
	DWORD m_modelInfo;
	DWORD m_ExtParts;
	DWORD m_refMeshes;
	DWORD m_refMeshGroupMasks;
	DWORD m_refPhysGroupMasks;
	DWORD m_refLODGroupMasks;
	DWORD m_lodGroupSwitchDistances;
	DWORD m_refPhysicsData;
	DWORD m_refPhysicsHitboxData;
	DWORD m_refAnimGroups;
	DWORD m_refSequenceGroups;
	DWORD m_meshGroups;
	DWORD m_materialGroups;
	DWORD m_nDefaultMeshGroupMask;
	DWORD m_modelSkeleton;
	DWORD m_remappingTable;
	DWORD m_remappingTableStarts;
	DWORD m_boneFlexDrivers;
	DWORD m_pModelConfigList;
	DWORD m_BodyGroupsHiddenInTools;
	DWORD m_refAnimIncludeModels;
	DWORD m_AnimatedMaterialAttributes;
} PermModelData_t;

inline struct PulseCursorYieldToken_tOffsets {
	DWORD m_Value;
} PulseCursorYieldToken_t;

inline struct ModelMeshBufferData_tOffsets {
	DWORD m_nBlockIndex;
	DWORD m_nElementCount;
	DWORD m_nElementSizeInBytes;
	DWORD m_bMeshoptCompressed;
	DWORD m_bMeshoptIndexSequence;
	DWORD m_bCompressedZSTD;
	DWORD m_bCreateBufferSRV;
	DWORD m_bCreateBufferUAV;
	DWORD m_bCreateRawBuffer;
	DWORD m_bCreatePooledBuffer;
	DWORD m_inputLayoutFields;
} ModelMeshBufferData_t;

inline struct CSequenceGroupDataOffsets {
	DWORD m_sName;
	DWORD m_nFlags;
	DWORD m_localSequenceNameArray;
	DWORD m_localS1SeqDescArray;
	DWORD m_localMultiSeqDescArray;
	DWORD m_localSynthAnimDescArray;
	DWORD m_localCmdSeqDescArray;
	DWORD m_localBoneMaskArray;
	DWORD m_localScaleSetArray;
	DWORD m_localBoneNameArray;
	DWORD m_localNodeName;
	DWORD m_localPoseParamArray;
	DWORD m_keyValues;
	DWORD m_localIKAutoplayLockArray;
} CSequenceGroupData;

inline struct CStateMachineUpdateNodeOffsets {
	DWORD m_stateMachine;
	DWORD m_stateData;
	DWORD m_transitionData;
	DWORD m_bBlockWaningTags;
	DWORD m_bLockStateWhenWaning;
	DWORD m_bResetWhenActivated;
} CStateMachineUpdateNode;

inline struct CAimMatrixUpdateNodeOffsets {
	DWORD m_opFixedSettings;
	DWORD m_target;
	DWORD m_paramIndex;
	DWORD m_hSequence;
	DWORD m_bResetChild;
	DWORD m_bLockWhenWaning;
} CAimMatrixUpdateNode;

inline struct SkeletonAnimCapture_t__Frame_tOffsets {
	DWORD m_flTime;
	DWORD m_Stamp;
	DWORD m_Transform;
	DWORD m_bTeleport;
	DWORD m_CompositeBones;
	DWORD m_SimStateBones;
	DWORD m_FeModelAnims;
	DWORD m_FeModelPos;
	DWORD m_FlexControllerWeights;
} SkeletonAnimCapture_t__Frame_t;

inline struct CModelConfigElement_CommandOffsets {
	DWORD m_Command;
	DWORD m_Args;
} CModelConfigElement_Command;

inline struct CAnimEventDefinitionOffsets {
	DWORD m_nFrame;
	DWORD m_nEndFrame;
	DWORD m_flCycle;
	DWORD m_flDuration;
	DWORD m_EventData;
	DWORD m_sLegacyOptions;
	DWORD m_sEventName;
} CAnimEventDefinition;

inline struct CNmRootMotionDataOffsets {
	DWORD m_transforms;
	DWORD m_nNumFrames;
	DWORD m_flAverageLinearVelocity;
	DWORD m_flAverageAngularVelocityRadians;
	DWORD m_totalDelta;
} CNmRootMotionData;

inline struct CPulseGraphExecutionHistoryOffsets {
	DWORD m_nInstanceID;
	DWORD m_strFileName;
	DWORD m_vecHistory;
	DWORD m_mapCellDesc;
	DWORD m_mapCursorDesc;
} CPulseGraphExecutionHistory;

inline struct AnimScriptHandleOffsets {
	DWORD m_id;
} AnimScriptHandle;

inline struct CFlexOpOffsets {
	DWORD m_OpCode;
	DWORD m_Data;
} CFlexOp;

inline struct CHitReactUpdateNodeOffsets {
	DWORD m_opFixedSettings;
	DWORD m_triggerParam;
	DWORD m_hitBoneParam;
	DWORD m_hitOffsetParam;
	DWORD m_hitDirectionParam;
	DWORD m_hitStrengthParam;
	DWORD m_flMinDelayBetweenHits;
	DWORD m_bResetChild;
} CHitReactUpdateNode;

inline struct CLookAtUpdateNodeOffsets {
	DWORD m_opFixedSettings;
	DWORD m_target;
	DWORD m_paramIndex;
	DWORD m_weightParamIndex;
	DWORD m_bResetChild;
	DWORD m_bLockWhenWaning;
} CLookAtUpdateNode;

inline struct CAnimBoneOffsets {
	DWORD m_name;
	DWORD m_parent;
	DWORD m_pos;
	DWORD m_quat;
	DWORD m_scale;
	DWORD m_qAlignment;
	DWORD m_flags;
} CAnimBone;

inline struct CAnimParameterManagerUpdaterOffsets {
	DWORD m_parameters;
	DWORD m_idToIndexMap;
	DWORD m_nameToIndexMap;
	DWORD m_indexToHandle;
	DWORD m_autoResetParams;
	DWORD m_autoResetMap;
} CAnimParameterManagerUpdater;

inline struct BoneDemoCaptureSettings_tOffsets {
	DWORD m_boneName;
	DWORD m_flErrorSplineRotationMax;
	DWORD m_flErrorSplineTranslationMax;
	DWORD m_flErrorSplineScaleMax;
	DWORD m_flErrorQuantizationRotationMax;
	DWORD m_flErrorQuantizationTranslationMax;
	DWORD m_flErrorQuantizationScaleMax;
} BoneDemoCaptureSettings_t;

inline struct CBoneConstraintPoseSpaceMorph__Input_tOffsets {
	DWORD m_inputValue;
	DWORD m_outputWeightList;
} CBoneConstraintPoseSpaceMorph__Input_t;

inline struct MoodAnimationLayer_tOffsets {
	DWORD m_sName;
	DWORD m_bActiveListening;
	DWORD m_bActiveTalking;
	DWORD m_layerAnimations;
	DWORD m_flIntensity;
	DWORD m_flDurationScale;
	DWORD m_bScaleWithInts;
	DWORD m_flNextStart;
	DWORD m_flStartOffset;
	DWORD m_flEndOffset;
	DWORD m_flFadeIn;
	DWORD m_flFadeOut;
} MoodAnimationLayer_t;

inline struct CSpeedScaleUpdateNodeOffsets {
	DWORD m_paramIndex;
} CSpeedScaleUpdateNode;

inline struct CSequenceTagSpansOffsets {
	DWORD m_sSequenceName;
	DWORD m_tags;
} CSequenceTagSpans;

inline struct CModelConfigElement_SetBodygroupOnAttachedModelsOffsets {
	DWORD m_GroupName;
	DWORD m_nChoice;
} CModelConfigElement_SetBodygroupOnAttachedModels;

inline struct CAnimReplayFrameOffsets {
	DWORD m_inputDataBlocks;
	DWORD m_instanceData;
	DWORD m_startingLocalToWorldTransform;
	DWORD m_localToWorldTransform;
	DWORD m_timeStamp;
} CAnimReplayFrame;

inline struct CNmTransitionEventOffsets {
	DWORD m_rule;
	DWORD m_ID;
} CNmTransitionEvent;

inline struct CNmIKRigOffsets {
	DWORD m_skeleton;
	DWORD m_vecBodies;
	DWORD m_vecJoints;
} CNmIKRig;

inline struct CNmFloatCurveEventOffsets {
	DWORD m_ID;
	DWORD m_curve;
} CNmFloatCurveEvent;

inline struct CParticleTransformInputOffsets {
	DWORD m_nType;
	DWORD m_NamedValue;
	DWORD m_bFollowNamedValue;
	DWORD m_bSupportsDisabled;
	DWORD m_bUseOrientation;
	DWORD m_nControlPoint;
	DWORD m_nControlPointRangeMax;
	DWORD m_flEndCPGrowthTime;
} CParticleTransformInput;

inline struct CPathAnimMotorUpdaterBaseOffsets {
	DWORD m_bLockToPath;
} CPathAnimMotorUpdaterBase;

inline struct PGDInstruction_tOffsets {
	DWORD m_nCode;
	DWORD m_nVar;
	DWORD m_nReg0;
	DWORD m_nReg1;
	DWORD m_nReg2;
	DWORD m_nInvokeBindingIndex;
	DWORD m_nChunk;
	DWORD m_nDestInstruction;
	DWORD m_nCallInfoIndex;
	DWORD m_nConstIdx;
	DWORD m_nDomainValueIdx;
	DWORD m_nBlackboardReferenceIdx;
} PGDInstruction_t;

inline struct CNmFootstepEventPercentageThroughNode__CDefinitionOffsets {
	DWORD m_nSourceStateNodeIdx;
	DWORD m_phaseCondition;
	DWORD m_eventConditionRules;
} CNmFootstepEventPercentageThroughNode__CDefinition;

inline struct AimCameraOpFixedSettings_tOffsets {
	DWORD m_nChainIndex;
	DWORD m_nCameraJointIndex;
	DWORD m_nPelvisJointIndex;
	DWORD m_nClavicleLeftJointIndex;
	DWORD m_nClavicleRightJointIndex;
	DWORD m_nDepenetrationJointIndex;
	DWORD m_propJoints;
} AimCameraOpFixedSettings_t;

inline struct SkeletonAnimCapture_t__Camera_tOffsets {
	DWORD m_tmCamera;
	DWORD m_flTime;
} SkeletonAnimCapture_t__Camera_t;

inline struct CNmGraphEventConditionNode__CDefinitionOffsets {
	DWORD m_nSourceStateNodeIdx;
	DWORD m_eventConditionRules;
	DWORD m_conditions;
} CNmGraphEventConditionNode__CDefinition;

inline struct CFollowAttachmentUpdateNodeOffsets {
	DWORD m_opFixedData;
} CFollowAttachmentUpdateNode;

inline struct CMovementComponentUpdaterOffsets {
	DWORD m_motors;
	DWORD m_facingDamping;
	DWORD m_nDefaultMotorIndex;
	DWORD m_flDefaultRunSpeed;
	DWORD m_bMoveVarsDisabled;
	DWORD m_bNetworkPath;
	DWORD m_bNetworkFacing;
	DWORD m_paramHandles;
} CMovementComponentUpdater;

inline struct CModelConfigElement_SetMaterialGroupOffsets {
	DWORD m_MaterialGroupName;
} CModelConfigElement_SetMaterialGroup;

inline struct CNmIKJointOffsets {
	DWORD m_nParentIndex;
	DWORD m_nBodyIndex;
	DWORD m_xLocalFrame;
	DWORD m_flSwingLimit;
	DWORD m_flMinTwistLimit;
	DWORD m_flMaxTwistLimit;
	DWORD m_flWeight;
} CNmIKJoint;

inline struct CFutureFacingMetricEvaluatorOffsets {
	DWORD m_flDistance;
	DWORD m_flTime;
} CFutureFacingMetricEvaluator;

inline struct NmCompressionSettings_tOffsets {
	DWORD m_translationRangeX;
	DWORD m_translationRangeY;
	DWORD m_translationRangeZ;
	DWORD m_scaleRange;
	DWORD m_constantRotation;
	DWORD m_bIsRotationStatic;
	DWORD m_bIsTranslationStatic;
	DWORD m_bIsScaleStatic;
} NmCompressionSettings_t;

inline struct CPulse_VariableOffsets {
	DWORD m_Name;
	DWORD m_Description;
	DWORD m_Type;
	DWORD m_DefaultValue;
	DWORD m_nKeysSource;
	DWORD m_bIsPublicBlackboardVariable;
	DWORD m_bIsObservable;
	DWORD m_nEditorNodeID;
} CPulse_Variable;

inline struct PARTICLE_EHANDLE__Offsets {
	DWORD unused;
} PARTICLE_EHANDLE__;

inline struct CAddUpdateNodeOffsets {
	DWORD m_footMotionTiming;
	DWORD m_bApplyToFootMotion;
	DWORD m_bApplyChannelsSeparately;
	DWORD m_bUseModelSpace;
	DWORD m_bApplyScale;
} CAddUpdateNode;

inline struct CAnimEnumOffsets {
	DWORD m_value;
} CAnimEnum;

inline struct CDemoSettingsComponentUpdaterOffsets {
	DWORD m_settings;
} CDemoSettingsComponentUpdater;

inline struct CAnimDecoderOffsets {
	DWORD m_szName;
	DWORD m_nVersion;
	DWORD m_nType;
} CAnimDecoder;

inline struct CNmCachedTargetNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_mode;
} CNmCachedTargetNode__CDefinition;

inline struct CNmConstBoolNode__CDefinitionOffsets {
	DWORD m_bValue;
} CNmConstBoolNode__CDefinition;

inline struct CNmBitFlagsOffsets {
	DWORD m_flags;
} CNmBitFlags;

inline struct CFootStrideOffsets {
	DWORD m_definition;
	DWORD m_trajectories;
} CFootStride;

inline struct CNmLegacyEventOffsets {
	DWORD m_animEventClassName;
	DWORD m_KV;
} CNmLegacyEvent;

inline struct CStateNodeStateDataOffsets {
	DWORD m_pChild;
	DWORD m_bExclusiveRootMotion;
	DWORD m_bExclusiveRootMotionFirstFrame;
} CStateNodeStateData;

inline struct CFootstepLandedAnimTagOffsets {
	DWORD m_FootstepType;
	DWORD m_OverrideSoundName;
	DWORD m_DebugAnimSourceString;
	DWORD m_BoneName;
} CFootstepLandedAnimTag;

inline struct CEnumAnimParameterOffsets {
	DWORD m_defaultValue;
	DWORD m_enumOptions;
	DWORD m_vecEnumReferenced;
} CEnumAnimParameter;

inline struct CHandshakeAnimTagBaseOffsets {
	DWORD m_bIsDisableTag;
} CHandshakeAnimTagBase;

inline struct AnimTagIDOffsets {
	DWORD m_id;
} AnimTagID;

inline struct CAnimFrameSegmentOffsets {
	DWORD m_nUniqueFrameIndex;
	DWORD m_nLocalElementMasks;
	DWORD m_nLocalChannel;
	DWORD m_container;
} CAnimFrameSegment;

inline struct CSlopeComponentUpdaterOffsets {
	DWORD m_flTraceDistance;
	DWORD m_hSlopeAngle;
	DWORD m_hSlopeAngleFront;
	DWORD m_hSlopeAngleSide;
	DWORD m_hSlopeHeading;
	DWORD m_hSlopeNormal;
	DWORD m_hSlopeNormal_WorldSpace;
} CSlopeComponentUpdater;

inline struct CAnimInputDampingOffsets {
	DWORD m_speedFunction;
	DWORD m_fSpeedScale;
	DWORD m_fFallingSpeedScale;
} CAnimInputDamping;

inline struct CNmIKBodyOffsets {
	DWORD m_flMass;
	DWORD m_vLocalMassCenter;
	DWORD m_vRadius;
	DWORD m_flResistance;
} CNmIKBody;

inline struct CHitBoxSetOffsets {
	DWORD m_name;
	DWORD m_nNameHash;
	DWORD m_HitBoxes;
	DWORD m_SourceFilename;
} CHitBoxSet;

inline struct ChainToSolveData_tOffsets {
	DWORD m_nChainIndex;
	DWORD m_SolverSettings;
	DWORD m_TargetSettings;
	DWORD m_DebugSetting;
	DWORD m_flDebugNormalizedValue;
	DWORD m_vDebugOffset;
} ChainToSolveData_t;

inline struct CConstraintSlaveOffsets {
	DWORD m_qBaseOrientation;
	DWORD m_vBasePosition;
	DWORD m_nBoneHash;
	DWORD m_flWeight;
	DWORD m_sName;
} CConstraintSlave;

inline struct PulseRuntimeOutputIndex_tOffsets {
	DWORD m_Value;
} PulseRuntimeOutputIndex_t;

inline struct CFootCycleDefinitionOffsets {
	DWORD m_vStancePositionMS;
	DWORD m_vMidpointPositionMS;
	DWORD m_flStanceDirectionMS;
	DWORD m_vToStrideStartPos;
	DWORD m_stanceCycle;
	DWORD m_footLiftCycle;
	DWORD m_footOffCycle;
	DWORD m_footStrikeCycle;
	DWORD m_footLandCycle;
} CFootCycleDefinition;

inline struct CVirtualAnimParameterOffsets {
	DWORD m_expressionString;
	DWORD m_eParamType;
} CVirtualAnimParameter;

inline struct CMotionMetricEvaluatorOffsets {
	DWORD m_means;
	DWORD m_standardDeviations;
	DWORD m_flWeight;
	DWORD m_nDimensionStartIndex;
} CMotionMetricEvaluator;

inline struct CFutureVelocityMetricEvaluatorOffsets {
	DWORD m_flDistance;
	DWORD m_flStoppingDistance;
	DWORD m_flTargetSpeed;
	DWORD m_eMode;
} CFutureVelocityMetricEvaluator;

inline struct CNmSkeleton__SecondarySkeleton_tOffsets {
	DWORD m_attachToBoneID;
	DWORD m_skeleton;
} CNmSkeleton__SecondarySkeleton_t;

inline struct CAnimUpdateNodeBaseOffsets {
	DWORD m_nodePath;
	DWORD m_networkMode;
	DWORD m_name;
} CAnimUpdateNodeBase;

inline struct CSetParameterActionUpdaterOffsets {
	DWORD m_hParam;
	DWORD m_value;
} CSetParameterActionUpdater;

inline struct CNmFixedWeightBoneMaskNode__CDefinitionOffsets {
	DWORD m_flBoneWeight;
} CNmFixedWeightBoneMaskNode__CDefinition;

inline struct SkeletonAnimCapture_t__FrameStamp_tOffsets {
	DWORD m_flTime;
	DWORD m_flEntitySimTime;
	DWORD m_bTeleportTick;
	DWORD m_bPredicted;
	DWORD m_flCurTime;
	DWORD m_flRealTime;
	DWORD m_nFrameCount;
	DWORD m_nTickCount;
} SkeletonAnimCapture_t__FrameStamp_t;

inline struct CPulse_DomainValueOffsets {
	DWORD m_nType;
	DWORD m_Value;
	DWORD m_RequiredRuntimeType;
} CPulse_DomainValue;

inline struct CBonePositionMetricEvaluatorOffsets {
	DWORD m_nBoneIndex;
} CBonePositionMetricEvaluator;

inline struct CRenderBufferBindingOffsets {
	DWORD m_hBuffer;
	DWORD m_nBindOffsetBytes;
} CRenderBufferBinding;

inline struct CNmParameterizedBlendNode__Parameterization_tOffsets {
	DWORD m_blendRanges;
	DWORD m_parameterRange;
} CNmParameterizedBlendNode__Parameterization_t;

inline struct CNmEntityAttributeIntEventOffsets {
	DWORD m_nIntValue;
} CNmEntityAttributeIntEvent;

inline struct CNmNotNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
} CNmNotNode__CDefinition;

inline struct CMeshletDescriptorOffsets {
	DWORD m_PackedAABB;
	DWORD m_CullingData;
	DWORD m_nVertexOffset;
	DWORD m_nTriangleOffset;
	DWORD m_nVertexCount;
	DWORD m_nTriangleCount;
} CMeshletDescriptor;

inline struct CMorphSetDataOffsets {
	DWORD m_nWidth;
	DWORD m_nHeight;
	DWORD m_bundleTypes;
	DWORD m_morphDatas;
	DWORD m_pTextureAtlas;
	DWORD m_FlexDesc;
	DWORD m_FlexControllers;
	DWORD m_FlexRules;
} CMorphSetData;

inline struct CNmAndNode__CDefinitionOffsets {
	DWORD m_conditionNodeIndices;
} CNmAndNode__CDefinition;

inline struct CMorphConstraintOffsets {
	DWORD m_sTargetMorph;
	DWORD m_nSlaveChannel;
	DWORD m_flMin;
	DWORD m_flMax;
} CMorphConstraint;

inline struct CClothSettingsAnimTagOffsets {
	DWORD m_flStiffness;
	DWORD m_flEaseIn;
	DWORD m_flEaseOut;
	DWORD m_nVertexSet;
} CClothSettingsAnimTag;

inline struct CAnimDesc_FlagOffsets {
	DWORD m_bLooping;
	DWORD m_bAllZeros;
	DWORD m_bHidden;
	DWORD m_bDelta;
	DWORD m_bLegacyWorldspace;
	DWORD m_bModelDoc;
	DWORD m_bImplicitSeqIgnoreDelta;
	DWORD m_bAnimGraphAdditive;
} CAnimDesc_Flag;

inline struct CNmBlend2DNode__CDefinitionOffsets {
	DWORD m_sourceNodeIndices;
	DWORD m_nInputParameterNodeIdx0;
	DWORD m_nInputParameterNodeIdx1;
	DWORD m_values;
	DWORD m_indices;
	DWORD m_hullIndices;
	DWORD m_bAllowLooping;
} CNmBlend2DNode__CDefinition;

inline struct CBlendCurveOffsets {
	DWORD m_flControlPoint1;
	DWORD m_flControlPoint2;
} CBlendCurve;

inline struct CNmGraphNode__CDefinitionOffsets {
	DWORD m_nNodeIdx;
} CNmGraphNode__CDefinition;

inline struct CAnimationGraphVisualizerSphereOffsets {
	DWORD m_vWsPosition;
	DWORD m_flRadius;
	DWORD m_Color;
} CAnimationGraphVisualizerSphere;

inline struct CNmClip__ModelSpaceSamplingChainLink_tOffsets {
	DWORD m_nBoneIdx;
	DWORD m_nParentBoneIdx;
	DWORD m_nParentChainLinkIdx;
} CNmClip__ModelSpaceSamplingChainLink_t;

inline struct CAnimUserDifferenceOffsets {
	DWORD m_name;
	DWORD m_nType;
} CAnimUserDifference;

inline struct CTransitionUpdateDataOffsets {
	DWORD m_srcStateIndex;
	DWORD m_destStateIndex;
	DWORD m_nHandshakeMaskToDisableFirst;
	DWORD m_bDisabled;
} CTransitionUpdateData;

inline struct PulseRuntimeBlackboardReferenceIndex_tOffsets {
	DWORD m_Value;
} PulseRuntimeBlackboardReferenceIndex_t;

inline struct CBoneConstraintPoseSpaceBone__Input_tOffsets {
	DWORD m_inputValue;
	DWORD m_outputTransformList;
} CBoneConstraintPoseSpaceBone__Input_t;

inline struct CSeqMultiFetchOffsets {
	DWORD m_flags;
	DWORD m_localReferenceArray;
	DWORD m_nGroupSize;
	DWORD m_nLocalPose;
	DWORD m_poseKeyArray0;
	DWORD m_poseKeyArray1;
	DWORD m_nLocalCyclePoseParameter;
	DWORD m_bCalculatePoseParameters;
	DWORD m_bFixedBlendWeight;
	DWORD m_flFixedBlendWeightVals;
} CSeqMultiFetch;

inline struct CPhysSurfacePropertiesSoundNamesOffsets {
	DWORD m_impactSoft;
	DWORD m_impactHard;
	DWORD m_scrapeSmooth;
	DWORD m_scrapeRough;
	DWORD m_bulletImpact;
	DWORD m_rolling;
	DWORD m_break;
	DWORD m_strain;
	DWORD m_meleeImpact;
	DWORD m_pushOff;
	DWORD m_skidStop;
	DWORD m_resonant;
} CPhysSurfacePropertiesSoundNames;

inline struct NmBoneMaskSetDefinition_tOffsets {
	DWORD m_ID;
	DWORD m_primaryWeightList;
	DWORD m_secondaryWeightLists;
} NmBoneMaskSetDefinition_t;

inline struct CAudioAnimTagOffsets {
	DWORD m_clipName;
	DWORD m_attachmentName;
	DWORD m_flVolume;
	DWORD m_bStopWhenTagEnds;
	DWORD m_bStopWhenGraphEnds;
	DWORD m_bPlayOnServer;
	DWORD m_bPlayOnClient;
} CAudioAnimTag;

inline struct CTurnHelperUpdateNodeOffsets {
	DWORD m_facingTarget;
	DWORD m_turnStartTimeOffset;
	DWORD m_turnDuration;
	DWORD m_bMatchChildDuration;
	DWORD m_manualTurnOffset;
	DWORD m_bUseManualTurnOffset;
} CTurnHelperUpdateNode;

inline struct CAnimationGroupOffsets {
	DWORD m_nFlags;
	DWORD m_name;
	DWORD m_localHAnimArray_Handle;
	DWORD m_includedGroupArray_Handle;
	DWORD m_directHSeqGroup_Handle;
	DWORD m_decodeKey;
	DWORD m_szScripts;
	DWORD m_AdditionalExtRefs;
} CAnimationGroup;

inline struct NmSyncTrackTime_tOffsets {
	DWORD m_nEventIdx;
	DWORD m_percentageThrough;
} NmSyncTrackTime_t;

inline struct CNmClipOffsets {
	DWORD m_skeleton;
	DWORD m_nNumFrames;
	DWORD m_flDuration;
	DWORD m_compressedPoseData;
	DWORD m_trackCompressionSettings;
	DWORD m_compressedPoseOffsets;
	DWORD m_floatCurveIDs;
	DWORD m_floatCurveDefs;
	DWORD m_compressedFloatCurveData;
	DWORD m_compressedFloatCurveOffsets;
	DWORD m_secondaryAnimations;
	DWORD m_syncTrack;
	DWORD m_rootMotion;
	DWORD m_bIsAdditive;
	DWORD m_modelSpaceSamplingChain;
	DWORD m_modelSpaceBoneSamplingIndices;
} CNmClip;

inline struct CToggleComponentActionUpdaterOffsets {
	DWORD m_componentID;
	DWORD m_bSetEnabled;
} CToggleComponentActionUpdater;

inline struct CNmSpeedScaleBaseNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_flDefaultInputValue;
} CNmSpeedScaleBaseNode__CDefinition;

inline struct CAnimationGraphVisualizerPrimitiveBaseOffsets {
	DWORD m_Type;
	DWORD m_OwningAnimNodePaths;
	DWORD m_nOwningAnimNodePathCount;
} CAnimationGraphVisualizerPrimitiveBase;

inline struct NmSyncTrackTimeRange_tOffsets {
	DWORD m_startTime;
	DWORD m_endTime;
} NmSyncTrackTimeRange_t;

inline struct CAnimationGraphVisualizerTextOffsets {
	DWORD m_vWsPosition;
	DWORD m_Color;
	DWORD m_Text;
} CAnimationGraphVisualizerText;

inline struct CFootTrajectoryOffsets {
	DWORD m_vOffset;
	DWORD m_flRotationOffset;
	DWORD m_flProgression;
} CFootTrajectory;

inline struct CMotionMatchingUpdateNodeOffsets {
	DWORD m_dataSet;
	DWORD m_metrics;
	DWORD m_weights;
	DWORD m_bSearchEveryTick;
	DWORD m_flSearchInterval;
	DWORD m_bSearchWhenClipEnds;
	DWORD m_bSearchWhenGoalChanges;
	DWORD m_blendCurve;
	DWORD m_flSampleRate;
	DWORD m_flBlendTime;
	DWORD m_bLockClipWhenWaning;
	DWORD m_flSelectionThreshold;
	DWORD m_flReselectionTimeWindow;
	DWORD m_bEnableRotationCorrection;
	DWORD m_bGoalAssist;
	DWORD m_flGoalAssistDistance;
	DWORD m_flGoalAssistTolerance;
	DWORD m_distanceScale_Damping;
	DWORD m_flDistanceScale_OuterRadius;
	DWORD m_flDistanceScale_InnerRadius;
	DWORD m_flDistanceScale_MaxScale;
	DWORD m_flDistanceScale_MinScale;
	DWORD m_bEnableDistanceScaling;
} CMotionMatchingUpdateNode;

inline struct CSeqS1SeqDescOffsets {
	DWORD m_sName;
	DWORD m_flags;
	DWORD m_fetch;
	DWORD m_nLocalWeightlist;
	DWORD m_autoLayerArray;
	DWORD m_IKLockArray;
	DWORD m_transition;
	DWORD m_SequenceKeys;
	DWORD m_LegacyKeyValueText;
	DWORD m_activityArray;
	DWORD m_footMotion;
} CSeqS1SeqDesc;

inline struct CFlexControllerOffsets {
	DWORD m_szName;
	DWORD m_szType;
	DWORD min;
	DWORD max;
} CFlexController;

inline struct SkeletonDemoDb_tOffsets {
	DWORD m_AnimCaptures;
	DWORD m_CameraTrack;
	DWORD m_flRecordingTime;
} SkeletonDemoDb_t;

inline struct CNmFloatRangeComparisonNode__CDefinitionOffsets {
	DWORD m_range;
	DWORD m_nInputValueNodeIdx;
	DWORD m_bIsInclusiveCheck;
} CNmFloatRangeComparisonNode__CDefinition;

inline struct CMotionNodeSequenceOffsets {
	DWORD m_tags;
	DWORD m_hSequence;
	DWORD m_flPlaybackSpeed;
} CMotionNodeSequence;

inline struct CNmTwoBoneIKNode__CDefinitionOffsets {
	DWORD m_effectorBoneID;
	DWORD m_nEffectorTargetNodeIdx;
	DWORD m_nEnabledNodeIdx;
	DWORD m_flBlendTimeSeconds;
	DWORD m_blendMode;
	DWORD m_bIsTargetInWorldSpace;
} CNmTwoBoneIKNode__CDefinition;

inline struct CFlexDescOffsets {
	DWORD m_szFacs;
} CFlexDesc;

inline struct CRenderMeshOffsets {
	DWORD m_sceneObjects;
	DWORD m_constraints;
	DWORD m_skeleton;
	DWORD m_bUseUV2ForCharting;
	DWORD m_bEmbeddedMapMesh;
	DWORD m_meshDeformParams;
	DWORD m_pGroomData;
} CRenderMesh;

inline struct CAnimSkeletonOffsets {
	DWORD m_localSpaceTransforms;
	DWORD m_modelSpaceTransforms;
	DWORD m_boneNames;
	DWORD m_children;
	DWORD m_parents;
	DWORD m_feet;
	DWORD m_morphNames;
	DWORD m_lodBoneCounts;
} CAnimSkeleton;

inline struct PulseRuntimeConstantIndex_tOffsets {
	DWORD m_Value;
} PulseRuntimeConstantIndex_t;

inline struct VPhysics2ShapeDef_tOffsets {
	DWORD m_spheres;
	DWORD m_capsules;
	DWORD m_hulls;
	DWORD m_meshes;
	DWORD m_CollisionAttributeIndices;
} VPhysics2ShapeDef_t;

inline struct CNmFloatCurveNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_curve;
} CNmFloatCurveNode__CDefinition;

inline struct CAnimationGraphVisualizerAxisOffsets {
	DWORD m_xWsTransform;
	DWORD m_flAxisSize;
} CAnimationGraphVisualizerAxis;

inline struct CTwistConstraintOffsets {
	DWORD m_bInverse;
	DWORD m_qParentBindRotation;
	DWORD m_qChildBindRotation;
} CTwistConstraint;

inline struct PulseDocNodeID_tOffsets {
	DWORD m_Value;
} PulseDocNodeID_t;

inline struct ModelBoneFlexDriverControl_tOffsets {
	DWORD m_nBoneComponent;
	DWORD m_flexController;
	DWORD m_flexControllerToken;
	DWORD m_flMin;
	DWORD m_flMax;
} ModelBoneFlexDriverControl_t;

inline struct CSeqCmdLayerOffsets {
	DWORD m_cmd;
	DWORD m_nLocalReference;
	DWORD m_nLocalBonemask;
	DWORD m_nDstResult;
	DWORD m_nSrcResult;
	DWORD m_bSpline;
	DWORD m_flVar1;
	DWORD m_flVar2;
	DWORD m_nLineNumber;
} CSeqCmdLayer;

inline struct FootPinningPoseOpFixedData_tOffsets {
	DWORD m_footInfo;
	DWORD m_flBlendTime;
	DWORD m_flLockBreakDistance;
	DWORD m_flMaxLegTwist;
	DWORD m_nHipBoneIndex;
	DWORD m_bApplyLegTwistLimits;
	DWORD m_bApplyFootRotationLimits;
} FootPinningPoseOpFixedData_t;

inline struct RenderSkeletonBone_tOffsets {
	DWORD m_boneName;
	DWORD m_parentName;
	DWORD m_invBindPose;
	DWORD m_bbox;
	DWORD m_flSphereRadius;
} RenderSkeletonBone_t;

inline struct CDistanceRemainingMetricEvaluatorOffsets {
	DWORD m_flMaxDistance;
	DWORD m_flMinDistance;
	DWORD m_flStartGoalFilterDistance;
	DWORD m_flMaxGoalOvershootScale;
	DWORD m_bFilterFixedMinDistance;
	DWORD m_bFilterGoalDistance;
	DWORD m_bFilterGoalOvershoot;
} CDistanceRemainingMetricEvaluator;

inline struct CDirectPlaybackUpdateNodeOffsets {
	DWORD m_bFinishEarly;
	DWORD m_bResetOnFinish;
	DWORD m_allTags;
} CDirectPlaybackUpdateNode;

inline struct CNmIDEventOffsets {
	DWORD m_ID;
	DWORD m_secondaryID;
} CNmIDEvent;

inline struct CFlexRuleOffsets {
	DWORD m_nFlex;
	DWORD m_FlexOps;
} CFlexRule;

inline struct ScriptInfo_tOffsets {
	DWORD m_code;
	DWORD m_paramsModified;
	DWORD m_proxyReadParams;
	DWORD m_proxyWriteParams;
	DWORD m_eScriptType;
} ScriptInfo_t;

inline struct CBoneConstraintRbfOffsets {
	DWORD m_inputBones;
	DWORD m_outputBones;
} CBoneConstraintRbf;

inline struct CNmSoundEventOffsets {
	DWORD m_relevance;
	DWORD m_name;
	DWORD m_position;
	DWORD m_attachmentName;
	DWORD m_tags;
	DWORD m_bContinuePlayingSoundAtDurationEnd;
	DWORD m_flDurationInterruptionThreshold;
} CNmSoundEvent;

inline struct CRenderGroomOffsets {
	DWORD m_hairs;
	DWORD m_hairPositionOffsets;
	DWORD m_hSimParamsMat;
	DWORD m_strandSegmentCountHist;
	DWORD m_nMaxSegmentsPerHairStrand;
	DWORD m_nGuideHairCount;
	DWORD m_nHairCount;
	DWORD m_nTotalVertexCount;
	DWORD m_nTotalSegmentCount;
	DWORD m_nGroomGroupID;
	DWORD m_nAttachBoneIdx;
	DWORD m_nAttachMeshIdx;
	DWORD m_nAttachMeshDrawCallIdx;
	DWORD m_bEnableSimulation;
} CRenderGroom;

inline struct CNmParameterizedClipSelectorNode__CDefinitionOffsets {
	DWORD m_optionNodeIndices;
	DWORD m_optionWeights;
	DWORD m_parameterNodeIdx;
	DWORD m_bIgnoreInvalidOptions;
	DWORD m_bHasWeightsSet;
} CNmParameterizedClipSelectorNode__CDefinition;

inline struct CTiltTwistConstraintOffsets {
	DWORD m_nTargetAxis;
	DWORD m_nSlaveAxis;
} CTiltTwistConstraint;

inline struct CVPhysXSurfacePropertiesListOffsets {
	DWORD m_surfacePropertiesList;
} CVPhysXSurfacePropertiesList;

inline struct RenderHairStrandInfo_tOffsets {
	DWORD m_nGuideHairIndices_nSurfaceTriIndex;
	DWORD m_vGuideBary_vBaseBary;
	DWORD m_vRootOffset_flLengthScale;
	DWORD m_nPackedBaseUv;
	DWORD m_nPackedSurfaceNormalOs;
	DWORD m_nPackedSurfaceTangentOs;
	DWORD m_nDataOffset_Segments;
} RenderHairStrandInfo_t;

inline struct CCycleControlClipUpdateNodeOffsets {
	DWORD m_tags;
	DWORD m_hSequence;
	DWORD m_duration;
	DWORD m_valueSource;
	DWORD m_paramIndex;
	DWORD m_bLockWhenWaning;
} CCycleControlClipUpdateNode;

inline struct CNmTargetPointNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_bIsWorldSpaceTarget;
} CNmTargetPointNode__CDefinition;

inline struct CPulse_RegisterInfoOffsets {
	DWORD m_nReg;
	DWORD m_Type;
	DWORD m_OriginName;
	DWORD m_nWrittenByInstruction;
	DWORD m_nLastReadByInstruction;
} CPulse_RegisterInfo;

inline struct CStaticPoseCacheOffsets {
	DWORD m_poses;
	DWORD m_nBoneCount;
	DWORD m_nMorphCount;
} CStaticPoseCache;

inline struct LookAtOpFixedSettings_tOffsets {
	DWORD m_attachment;
	DWORD m_damping;
	DWORD m_bones;
	DWORD m_flYawLimit;
	DWORD m_flPitchLimit;
	DWORD m_flHysteresisInnerAngle;
	DWORD m_flHysteresisOuterAngle;
	DWORD m_bRotateYawForward;
	DWORD m_bMaintainUpDirection;
	DWORD m_bTargetIsPosition;
	DWORD m_bUseHysteresis;
} LookAtOpFixedSettings_t;

inline struct CAnimGraphSettingsManagerOffsets {
	DWORD m_settingsGroups;
} CAnimGraphSettingsManager;

inline struct CAnimGraphModelBindingOffsets {
	DWORD m_modelName;
	DWORD m_pSharedData;
} CAnimGraphModelBinding;

inline struct CBoneConstraintPoseSpaceBoneOffsets {
	DWORD m_inputList;
} CBoneConstraintPoseSpaceBone;

inline struct MotionBlendItemOffsets {
	DWORD m_pChild;
	DWORD m_flKeyValue;
} MotionBlendItem;

inline struct CBoneConstraintPoseSpaceMorphOffsets {
	DWORD m_sBoneName;
	DWORD m_sAttachmentName;
	DWORD m_outputMorph;
	DWORD m_inputList;
	DWORD m_bClamp;
} CBoneConstraintPoseSpaceMorph;

inline struct CFloatAnimParameterOffsets {
	DWORD m_fDefaultValue;
	DWORD m_fMinValue;
	DWORD m_fMaxValue;
	DWORD m_bInterpolate;
} CFloatAnimParameter;

inline struct CStateActionUpdaterOffsets {
	DWORD m_pAction;
	DWORD m_eBehavior;
} CStateActionUpdater;

inline struct CPlayerInputAnimMotorUpdaterOffsets {
	DWORD m_sampleTimes;
	DWORD m_flSpringConstant;
	DWORD m_flAnticipationDistance;
	DWORD m_hAnticipationPosParam;
	DWORD m_hAnticipationHeadingParam;
	DWORD m_bUseAcceleration;
} CPlayerInputAnimMotorUpdater;

inline struct CRenderSkeletonOffsets {
	DWORD m_bones;
	DWORD m_boneParents;
	DWORD m_nBoneWeightCount;
} CRenderSkeleton;

inline struct CSeqIKLockOffsets {
	DWORD m_flPosWeight;
	DWORD m_flAngleWeight;
	DWORD m_nLocalBone;
	DWORD m_bBonesOrientedAlongPositiveX;
} CSeqIKLock;

inline struct CAnimParamHandleMapOffsets {
	DWORD m_list;
} CAnimParamHandleMap;

inline struct CNmFloatClampNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_clampRange;
} CNmFloatClampNode__CDefinition;

inline struct PulseRuntimeCellIndex_tOffsets {
	DWORD m_Value;
} PulseRuntimeCellIndex_t;

inline struct CAnimDescOffsets {
	DWORD m_name;
	DWORD m_flags;
	DWORD fps;
	DWORD m_Data;
	DWORD m_movementArray;
	DWORD m_xInitialOffset;
	DWORD m_eventArray;
	DWORD m_activityArray;
	DWORD m_hierarchyArray;
	DWORD framestalltime;
	DWORD m_vecRootMin;
	DWORD m_vecRootMax;
	DWORD m_vecBoneWorldMin;
	DWORD m_vecBoneWorldMax;
	DWORD m_sequenceParams;
} CAnimDesc;

inline struct CNmRootMotionOverrideNode__CDefinitionOffsets {
	DWORD m_desiredMovingVelocityNodeIdx;
	DWORD m_desiredFacingDirectionNodeIdx;
	DWORD m_linearVelocityLimitNodeIdx;
	DWORD m_angularVelocityLimitNodeIdx;
	DWORD m_maxLinearVelocity;
	DWORD m_maxAngularVelocityRadians;
	DWORD m_overrideFlags;
} CNmRootMotionOverrideNode__CDefinition;

inline struct CNmTargetWarpNode__CDefinitionOffsets {
	DWORD m_nClipReferenceNodeIdx;
	DWORD m_nTargetValueNodeIdx;
	DWORD m_samplingMode;
	DWORD m_bAllowTargetUpdate;
	DWORD m_flSamplingPositionErrorThresholdSq;
	DWORD m_flMaxTangentLength;
	DWORD m_flLerpFallbackDistanceThreshold;
	DWORD m_flTargetUpdateDistanceThreshold;
	DWORD m_flTargetUpdateAngleThresholdRadians;
} CNmTargetWarpNode__CDefinition;

inline struct CPhysSurfacePropertiesPhysicsOffsets {
	DWORD m_friction;
	DWORD m_elasticity;
	DWORD m_density;
	DWORD m_thickness;
	DWORD m_softContactFrequency;
	DWORD m_softContactDampingRatio;
} CPhysSurfacePropertiesPhysics;

inline struct CAnimationGraphVisualizerPieOffsets {
	DWORD m_vWsCenter;
	DWORD m_vWsStart;
	DWORD m_vWsEnd;
	DWORD m_Color;
} CAnimationGraphVisualizerPie;

inline struct NmFloatCurveCompressionSettings_tOffsets {
	DWORD m_range;
	DWORD m_bIsStatic;
} NmFloatCurveCompressionSettings_t;

inline struct CBoneConstraintDotToMorphOffsets {
	DWORD m_sBoneName;
	DWORD m_sTargetBoneName;
	DWORD m_sMorphChannelName;
	DWORD m_flRemap;
} CBoneConstraintDotToMorph;

inline struct TraceSettings_tOffsets {
	DWORD m_flTraceHeight;
	DWORD m_flTraceRadius;
} TraceSettings_t;

inline struct ParamSpanSample_tOffsets {
	DWORD m_value;
	DWORD m_flCycle;
} ParamSpanSample_t;

inline struct VPhysXConstraintParams_tOffsets {
	DWORD m_nType;
	DWORD m_nTranslateMotion;
	DWORD m_nRotateMotion;
	DWORD m_nFlags;
	DWORD m_anchor;
	DWORD m_axes;
	DWORD m_maxForce;
	DWORD m_maxTorque;
	DWORD m_linearLimitValue;
	DWORD m_linearLimitRestitution;
	DWORD m_linearLimitSpring;
	DWORD m_linearLimitDamping;
	DWORD m_twistLowLimitValue;
	DWORD m_twistLowLimitRestitution;
	DWORD m_twistLowLimitSpring;
	DWORD m_twistLowLimitDamping;
	DWORD m_twistHighLimitValue;
	DWORD m_twistHighLimitRestitution;
	DWORD m_twistHighLimitSpring;
	DWORD m_twistHighLimitDamping;
	DWORD m_swing1LimitValue;
	DWORD m_swing1LimitRestitution;
	DWORD m_swing1LimitSpring;
	DWORD m_swing1LimitDamping;
	DWORD m_swing2LimitValue;
	DWORD m_swing2LimitRestitution;
	DWORD m_swing2LimitSpring;
	DWORD m_swing2LimitDamping;
	DWORD m_goalPosition;
	DWORD m_goalOrientation;
	DWORD m_goalAngularVelocity;
	DWORD m_driveSpringX;
	DWORD m_driveSpringY;
	DWORD m_driveSpringZ;
	DWORD m_driveDampingX;
	DWORD m_driveDampingY;
	DWORD m_driveDampingZ;
	DWORD m_driveSpringTwist;
	DWORD m_driveSpringSwing;
	DWORD m_driveSpringSlerp;
	DWORD m_driveDampingTwist;
	DWORD m_driveDampingSwing;
	DWORD m_driveDampingSlerp;
	DWORD m_solverIterationCount;
	DWORD m_projectionLinearTolerance;
	DWORD m_projectionAngularTolerance;
} VPhysXConstraintParams_t;

inline struct CNmFloatComparisonNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_nComparandValueNodeIdx;
	DWORD m_comparison;
	DWORD m_flEpsilon;
	DWORD m_flComparisonValue;
} CNmFloatComparisonNode__CDefinition;

inline struct CNmChainSolverTaskOffsets {
	DWORD m_nEffectorBoneIdx;
	DWORD m_nEffectorTargetBoneIdx;
	DWORD m_targetTransform;
	DWORD m_nNumBonesInChain;
	DWORD m_effectorTarget;
	DWORD m_blendMode;
	DWORD m_flBlendWeight;
	DWORD m_bIsTargetInWorldSpace;
	DWORD m_bIsRunningFromDeserializedData;
	DWORD m_debugEffectorBoneID;
	DWORD m_chainStartTransformMS;
	DWORD m_debugRequestedTargetTransformMS;
	DWORD m_debugTotalChainLength;
} CNmChainSolverTask;

inline struct CStateUpdateDataOffsets {
	DWORD m_name;
	DWORD m_hScript;
	DWORD m_transitionIndices;
	DWORD m_actions;
	DWORD m_stateID;
	DWORD m_bIsStartState;
	DWORD m_bIsEndState;
	DWORD m_bIsPassthrough;
	DWORD m_bIsPassthroughRootMotion;
	DWORD m_bPreEvaluatePassthroughTransitionPath;
} CStateUpdateData;

inline struct CMoverUpdateNodeOffsets {
	DWORD m_damping;
	DWORD m_facingTarget;
	DWORD m_hMoveVecParam;
	DWORD m_hMoveHeadingParam;
	DWORD m_hTurnToFaceParam;
	DWORD m_flTurnToFaceOffset;
	DWORD m_flTurnToFaceLimit;
	DWORD m_bAdditive;
	DWORD m_bApplyMovement;
	DWORD m_bOrientMovement;
	DWORD m_bApplyRotation;
	DWORD m_bLimitOnly;
} CMoverUpdateNode;

inline struct CNmLayerBlendNode__CDefinitionOffsets {
	DWORD m_nBaseNodeIdx;
	DWORD m_bOnlySampleBaseRootMotion;
	DWORD m_layerDefinition;
} CNmLayerBlendNode__CDefinition;

inline struct CAnimMotorUpdaterBaseOffsets {
	DWORD m_name;
	DWORD m_bDefault;
} CAnimMotorUpdaterBase;

inline struct JiggleBoneSettingsList_tOffsets {
	DWORD m_boneSettings;
} JiggleBoneSettingsList_t;

inline struct CSubtractUpdateNodeOffsets {
	DWORD m_footMotionTiming;
	DWORD m_bApplyToFootMotion;
	DWORD m_bApplyChannelsSeparately;
	DWORD m_bUseModelSpace;
} CSubtractUpdateNode;

inline struct PulseGraphInstanceID_tOffsets {
	DWORD m_Value;
} PulseGraphInstanceID_t;

inline struct CNmFloatRemapNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_inputRange;
	DWORD m_outputRange;
} CNmFloatRemapNode__CDefinition;

inline struct CPoseHandleOffsets {
	DWORD m_nIndex;
	DWORD m_eType;
} CPoseHandle;

inline struct CNmFootstepEventIDNode__CDefinitionOffsets {
	DWORD m_nSourceStateNodeIdx;
	DWORD m_eventConditionRules;
} CNmFootstepEventIDNode__CDefinition;

inline struct CSolveIKChainUpdateNodeOffsets {
	DWORD m_targetHandles;
	DWORD m_opFixedData;
} CSolveIKChainUpdateNode;

inline struct CNmOrNode__CDefinitionOffsets {
	DWORD m_conditionNodeIndices;
} CNmOrNode__CDefinition;

inline struct CSeqCmdSeqDescOffsets {
	DWORD m_sName;
	DWORD m_flags;
	DWORD m_transition;
	DWORD m_nFrameRangeSequence;
	DWORD m_nFrameCount;
	DWORD m_flFPS;
	DWORD m_nSubCycles;
	DWORD m_numLocalResults;
	DWORD m_cmdLayerArray;
	DWORD m_eventArray;
	DWORD m_activityArray;
	DWORD m_poseSettingArray;
} CSeqCmdSeqDesc;

inline struct CBoneMaskUpdateNodeOffsets {
	DWORD m_nWeightListIndex;
	DWORD m_flRootMotionBlend;
	DWORD m_blendSpace;
	DWORD m_footMotionTiming;
	DWORD m_bUseBlendScale;
	DWORD m_blendValueSource;
	DWORD m_hBlendParameter;
} CBoneMaskUpdateNode;

inline struct CPulse_ConstantOffsets {
	DWORD m_Type;
	DWORD m_Value;
} CPulse_Constant;

inline struct CParticleFloatInputOffsets {
	DWORD m_nType;
	DWORD m_nMapType;
	DWORD m_flLiteralValue;
	DWORD m_NamedValue;
	DWORD m_nControlPoint;
	DWORD m_nScalarAttribute;
	DWORD m_nVectorAttribute;
	DWORD m_nVectorComponent;
	DWORD m_bReverseOrder;
	DWORD m_flRandomMin;
	DWORD m_flRandomMax;
	DWORD m_bHasRandomSignFlip;
	DWORD m_nRandomSeed;
	DWORD m_nRandomMode;
	DWORD m_strSnapshotSubset;
	DWORD m_flLOD0;
	DWORD m_flLOD1;
	DWORD m_flLOD2;
	DWORD m_flLOD3;
	DWORD m_nNoiseInputVectorAttribute;
	DWORD m_flNoiseOutputMin;
	DWORD m_flNoiseOutputMax;
	DWORD m_flNoiseScale;
	DWORD m_vecNoiseOffsetRate;
	DWORD m_flNoiseOffset;
	DWORD m_nNoiseOctaves;
	DWORD m_nNoiseTurbulence;
	DWORD m_nNoiseType;
	DWORD m_nNoiseModifier;
	DWORD m_flNoiseTurbulenceScale;
	DWORD m_flNoiseTurbulenceMix;
	DWORD m_flNoiseImgPreviewScale;
	DWORD m_bNoiseImgPreviewLive;
	DWORD m_flNoCameraFallback;
	DWORD m_bUseBoundsCenter;
	DWORD m_nInputMode;
	DWORD m_flMultFactor;
	DWORD m_flInput0;
	DWORD m_flInput1;
	DWORD m_flOutput0;
	DWORD m_flOutput1;
	DWORD m_flNotchedRangeMin;
	DWORD m_flNotchedRangeMax;
	DWORD m_flNotchedOutputOutside;
	DWORD m_flNotchedOutputInside;
	DWORD m_nRoundType;
	DWORD m_nBiasType;
	DWORD m_flBiasParameter;
	DWORD m_Curve;
} CParticleFloatInput;

inline struct SolveIKChainPoseOpFixedSettings_tOffsets {
	DWORD m_ChainsToSolveData;
} SolveIKChainPoseOpFixedSettings_t;

inline struct CNmEntityAttributeFloatEventOffsets {
	DWORD m_FloatValue;
} CNmEntityAttributeFloatEvent;

inline struct CNmIDSelectorNode__CDefinitionOffsets {
	DWORD m_conditionNodeIndices;
	DWORD m_values;
	DWORD m_defaultValue;
} CNmIDSelectorNode__CDefinition;

inline struct TwoBoneIKSettings_tOffsets {
	DWORD m_endEffectorType;
	DWORD m_endEffectorAttachment;
	DWORD m_targetType;
	DWORD m_targetAttachment;
	DWORD m_targetBoneIndex;
	DWORD m_hPositionParam;
	DWORD m_hRotationParam;
	DWORD m_bAlwaysUseFallbackHinge;
	DWORD m_vLsFallbackHingeAxis;
	DWORD m_nFixedBoneIndex;
	DWORD m_nMiddleBoneIndex;
	DWORD m_nEndBoneIndex;
	DWORD m_bMatchTargetOrientation;
	DWORD m_bConstrainTwist;
	DWORD m_flMaxTwist;
} TwoBoneIKSettings_t;

inline struct CAnimUpdateSharedDataOffsets {
	DWORD m_nodes;
	DWORD m_nodeIndexMap;
	DWORD m_components;
	DWORD m_pParamListUpdater;
	DWORD m_pTagManagerUpdater;
	DWORD m_scriptManager;
	DWORD m_settings;
	DWORD m_pStaticPoseCache;
	DWORD m_pSkeleton;
	DWORD m_rootNodePath;
} CAnimUpdateSharedData;

inline struct CAnimAttachmentOffsets {
	DWORD m_influenceRotations;
	DWORD m_influenceOffsets;
	DWORD m_influenceIndices;
	DWORD m_influenceWeights;
	DWORD m_numInfluences;
} CAnimAttachment;

inline struct CFootTrajectoriesOffsets {
	DWORD m_trajectories;
} CFootTrajectories;

inline struct CNmIDComparisonNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
	DWORD m_comparison;
	DWORD m_comparisionIDs;
} CNmIDComparisonNode__CDefinition;

inline struct CNmConstFloatNode__CDefinitionOffsets {
	DWORD m_flValue;
} CNmConstFloatNode__CDefinition;

inline struct CBoolAnimParameterOffsets {
	DWORD m_bDefaultValue;
} CBoolAnimParameter;

inline struct CRagdollAnimTagOffsets {
	DWORD m_profileName;
} CRagdollAnimTag;

inline struct CMotionNodeOffsets {
	DWORD m_name;
	DWORD m_id;
} CMotionNode;

inline struct CNmStateMachineNode__CDefinitionOffsets {
	DWORD m_stateDefinitions;
	DWORD m_nDefaultStateIndex;
} CNmStateMachineNode__CDefinition;

inline struct CBodyGroupAnimTagOffsets {
	DWORD m_nPriority;
	DWORD m_bodyGroupSettings;
} CBodyGroupAnimTag;

inline struct CNmOrientationWarpNode__CDefinitionOffsets {
	DWORD m_nClipReferenceNodeIdx;
	DWORD m_nTargetValueNodeIdx;
	DWORD m_bIsOffsetNode;
	DWORD m_bIsOffsetRelativeToCharacter;
	DWORD m_samplingMode;
} CNmOrientationWarpNode__CDefinition;

inline struct AnimParamIDOffsets {
	DWORD m_id;
} AnimParamID;

inline struct CNmBoneMaskNode__CDefinitionOffsets {
	DWORD m_boneMaskID;
} CNmBoneMaskNode__CDefinition;

inline struct AnimationDecodeDebugDump_tOffsets {
	DWORD m_processingType;
	DWORD m_elems;
} AnimationDecodeDebugDump_t;

inline struct CNmVirtualParameterIDNode__CDefinitionOffsets {
	DWORD m_nChildNodeIdx;
} CNmVirtualParameterIDNode__CDefinition;

inline struct CSeqScaleSetOffsets {
	DWORD m_sName;
	DWORD m_bRootOffset;
	DWORD m_vRootOffset;
	DWORD m_nLocalBoneArray;
	DWORD m_flBoneScaleArray;
} CSeqScaleSet;

inline struct PulseRuntimeCallInfoIndex_tOffsets {
	DWORD m_Value;
} PulseRuntimeCallInfoIndex_t;

inline struct CDirectionalBlendUpdateNodeOffsets {
	DWORD m_hSequences;
	DWORD m_damping;
	DWORD m_blendValueSource;
	DWORD m_paramIndex;
	DWORD m_playbackSpeed;
	DWORD m_duration;
	DWORD m_bLoop;
	DWORD m_bLockBlendOnReset;
} CDirectionalBlendUpdateNode;

inline struct CNmGraphDefinition__ReferencedGraphSlot_tOffsets {
	DWORD m_nNodeIdx;
	DWORD m_dataSlotIdx;
} CNmGraphDefinition__ReferencedGraphSlot_t;

inline struct ParamSpan_tOffsets {
	DWORD m_samples;
	DWORD m_hParam;
	DWORD m_eParamType;
	DWORD m_flStartCycle;
	DWORD m_flEndCycle;
} ParamSpan_t;

inline struct CFootStepTriggerUpdateNodeOffsets {
	DWORD m_triggers;
	DWORD m_flTolerance;
} CFootStepTriggerUpdateNode;

inline struct IKTargetSettings_tOffsets {
	DWORD m_TargetSource;
	DWORD m_Bone;
	DWORD m_AnimgraphParameterNamePosition;
	DWORD m_AnimgraphParameterNameOrientation;
	DWORD m_TargetCoordSystem;
} IKTargetSettings_t;

inline struct CModelConfigElement_SetRenderColorOffsets {
	DWORD m_Color;
} CModelConfigElement_SetRenderColor;

inline struct CNmAnimationPoseNode__CDefinitionOffsets {
	DWORD m_nPoseTimeValueNodeIdx;
	DWORD m_nDataSlotIdx;
	DWORD m_inputTimeRemapRange;
	DWORD m_flUserSpecifiedTime;
	DWORD m_bUseFramesAsInput;
} CNmAnimationPoseNode__CDefinition;

inline struct CMotionSearchDBOffsets {
	DWORD m_rootNode;
	DWORD m_residualQuantizer;
	DWORD m_codeIndices;
} CMotionSearchDB;

inline struct CMotionNodeBlend1DOffsets {
	DWORD m_blendItems;
	DWORD m_nParamIndex;
} CMotionNodeBlend1D;

inline struct CNmCurrentSyncEventNode__CDefinitionOffsets {
	DWORD m_nSourceStateNodeIdx;
	DWORD m_infoType;
} CNmCurrentSyncEventNode__CDefinition;

inline struct SkeletonBoneBounds_tOffsets {
	DWORD m_vecCenter;
	DWORD m_vecSize;
} SkeletonBoneBounds_t;

inline struct CTwoBoneIKUpdateNodeOffsets {
	DWORD m_opFixedData;
} CTwoBoneIKUpdateNode;

inline struct VPhysXBodyPart_tOffsets {
	DWORD m_nFlags;
	DWORD m_flMass;
	DWORD m_rnShape;
	DWORD m_nCollisionAttributeIndex;
	DWORD m_nReserved;
	DWORD m_flInertiaScale;
	DWORD m_flLinearDamping;
	DWORD m_flAngularDamping;
	DWORD m_flLinearDrag;
	DWORD m_flAngularDrag;
	DWORD m_bOverrideMassCenter;
	DWORD m_vMassCenterOverride;
} VPhysXBodyPart_t;

inline struct PulseRuntimeChunkIndex_tOffsets {
	DWORD m_Value;
} PulseRuntimeChunkIndex_t;

inline struct CFollowPathUpdateNodeOffsets {
	DWORD m_flBlendOutTime;
	DWORD m_bBlockNonPathMovement;
	DWORD m_bStopFeetAtGoal;
	DWORD m_bScaleSpeed;
	DWORD m_flScale;
	DWORD m_flMinAngle;
	DWORD m_flMaxAngle;
	DWORD m_flSpeedScaleBlending;
	DWORD m_turnDamping;
	DWORD m_facingTarget;
	DWORD m_hParam;
	DWORD m_flTurnToFaceOffset;
	DWORD m_bTurnToFace;
} CFollowPathUpdateNode;

inline struct AimMatrixOpFixedSettings_tOffsets {
	DWORD m_attachment;
	DWORD m_damping;
	DWORD m_poseCacheHandles;
	DWORD m_eBlendMode;
	DWORD m_flMaxYawAngle;
	DWORD m_flMaxPitchAngle;
	DWORD m_nSequenceMaxFrame;
	DWORD m_nBoneMaskIndex;
	DWORD m_bTargetIsPosition;
	DWORD m_bUseBiasAndClamp;
	DWORD m_flBiasAndClampYawOffset;
	DWORD m_flBiasAndClampPitchOffset;
	DWORD m_biasAndClampBlendCurve;
} AimMatrixOpFixedSettings_t;

inline struct CAnimScriptComponentUpdaterOffsets {
	DWORD m_hScript;
} CAnimScriptComponentUpdater;

inline struct CRagdollUpdateNodeOffsets {
	DWORD m_nWeightListIndex;
	DWORD m_poseControlMethod;
} CRagdollUpdateNode;

inline struct CMaterialAttributeAnimTagOffsets {
	DWORD m_AttributeName;
	DWORD m_AttributeType;
	DWORD m_flValue;
	DWORD m_Color;
} CMaterialAttributeAnimTag;

inline struct CNmFootEventConditionNode__CDefinitionOffsets {
	DWORD m_nSourceStateNodeIdx;
	DWORD m_phaseCondition;
	DWORD m_eventConditionRules;
} CNmFootEventConditionNode__CDefinition;

inline struct CNmFootEventOffsets {
	DWORD m_phase;
} CNmFootEvent;

inline struct CPhysSurfacePropertiesAudioOffsets {
	DWORD m_reflectivity;
	DWORD m_hardnessFactor;
	DWORD m_roughnessFactor;
	DWORD m_roughThreshold;
	DWORD m_hardThreshold;
	DWORD m_hardVelocityThreshold;
	DWORD m_flStaticImpactVolume;
	DWORD m_flOcclusionFactor;
} CPhysSurfacePropertiesAudio;

inline struct CSeqAutoLayerOffsets {
	DWORD m_nLocalReference;
	DWORD m_nLocalPose;
	DWORD m_flags;
	DWORD m_start;
	DWORD m_peak;
	DWORD m_tail;
	DWORD m_end;
} CSeqAutoLayer;

inline struct ModelEmbeddedMesh_tOffsets {
	DWORD m_Name;
	DWORD m_nMeshIndex;
	DWORD m_nDataBlock;
	DWORD m_nMorphBlock;
	DWORD m_vertexBuffers;
	DWORD m_indexBuffers;
	DWORD m_toolsBuffers;
	DWORD m_nVBIBBlock;
	DWORD m_nToolsVBBlock;
} ModelEmbeddedMesh_t;

inline struct PhysSoftbodyDesc_tOffsets {
	DWORD m_ParticleBoneHash;
	DWORD m_Particles;
	DWORD m_Springs;
	DWORD m_Capsules;
	DWORD m_InitPose;
	DWORD m_ParticleBoneName;
} PhysSoftbodyDesc_t;

inline struct CPulseRuntimeMethodArgOffsets {
	DWORD m_Name;
	DWORD m_Description;
	DWORD m_Type;
} CPulseRuntimeMethodArg;

inline struct CAnimSequenceParamsOffsets {
	DWORD m_flFadeInTime;
	DWORD m_flFadeOutTime;
} CAnimSequenceParams;

inline struct CTargetWarpUpdateNodeOffsets {
	DWORD m_eAngleMode;
	DWORD m_hTargetPositionParameter;
	DWORD m_hTargetUpVectorParameter;
	DWORD m_hTargetFacePositionParameter;
	DWORD m_hMoveHeadingParameter;
	DWORD m_hDesiredMoveHeadingParameter;
	DWORD m_eCorrectionMethod;
	DWORD m_eTargetWarpTimingMethod;
	DWORD m_bTargetFacePositionIsWorldSpace;
	DWORD m_bTargetPositionIsWorldSpace;
	DWORD m_bOnlyWarpWhenTagIsFound;
	DWORD m_bWarpOrientationDuringTranslation;
	DWORD m_bWarpAroundCenter;
	DWORD m_flMaxAngle;
} CTargetWarpUpdateNode;

inline struct CNmVirtualParameterBoolNode__CDefinitionOffsets {
	DWORD m_nChildNodeIdx;
} CNmVirtualParameterBoolNode__CDefinition;

inline struct CFollowTargetUpdateNodeOffsets {
	DWORD m_opFixedData;
	DWORD m_hParameterPosition;
	DWORD m_hParameterOrientation;
} CFollowTargetUpdateNode;

inline struct PulseRuntimeStateOffset_tOffsets {
	DWORD m_Value;
} PulseRuntimeStateOffset_t;

inline struct CCPPScriptComponentUpdaterOffsets {
	DWORD m_scriptsToRun;
} CCPPScriptComponentUpdater;

inline struct CAnimDataOffsets {
	DWORD m_name;
	DWORD m_animArray;
	DWORD m_decoderArray;
	DWORD m_nMaxUniqueFrameIndex;
	DWORD m_segmentArray;
} CAnimData;

inline struct IKSolverSettings_tOffsets {
	DWORD m_SolverType;
	DWORD m_nNumIterations;
	DWORD m_EndEffectorRotationFixUpMode;
} IKSolverSettings_t;

inline struct CBinaryUpdateNodeOffsets {
	DWORD m_pChild1;
	DWORD m_pChild2;
	DWORD m_timingBehavior;
	DWORD m_flTimingBlend;
	DWORD m_bResetChild1;
	DWORD m_bResetChild2;
} CBinaryUpdateNode;

inline struct CNmParameterizedBlendNode__BlendRange_tOffsets {
	DWORD m_nInputIdx0;
	DWORD m_nInputIdx1;
	DWORD m_parameterValueRange;
} CNmParameterizedBlendNode__BlendRange_t;

inline struct CAnimKeyDataOffsets {
	DWORD m_name;
	DWORD m_boneArray;
	DWORD m_userArray;
	DWORD m_morphArray;
	DWORD m_nChannelElements;
	DWORD m_dataChannelArray;
} CAnimKeyData;

inline struct AttachmentHandle_tOffsets {
	DWORD m_Value;
} AttachmentHandle_t;

inline struct CAnimMorphDifferenceOffsets {
	DWORD m_name;
} CAnimMorphDifference;

inline struct FootFixedData_tOffsets {
	DWORD m_vToeOffset;
	DWORD m_vHeelOffset;
	DWORD m_nTargetBoneIndex;
	DWORD m_nAnkleBoneIndex;
	DWORD m_nIKAnchorBoneIndex;
	DWORD m_ikChainIndex;
	DWORD m_flMaxIKLength;
	DWORD m_nFootIndex;
	DWORD m_nTagIndex;
	DWORD m_flMaxRotationLeft;
	DWORD m_flMaxRotationRight;
} FootFixedData_t;

inline struct CMotionGraphGroupOffsets {
	DWORD m_searchDB;
	DWORD m_motionGraphs;
	DWORD m_motionGraphConfigs;
	DWORD m_sampleToConfig;
	DWORD m_hIsActiveScript;
} CMotionGraphGroup;

inline struct CNmVectorNegateNode__CDefinitionOffsets {
	DWORD m_nInputValueNodeIdx;
} CNmVectorNegateNode__CDefinition;

inline struct CNmSyncTrack__Event_tOffsets {
	DWORD m_ID;
	DWORD m_startTime;
	DWORD m_duration;
} CNmSyncTrack__Event_t;

inline struct CNmTargetOffsets {
	DWORD m_transform;
	DWORD m_boneID;
	DWORD m_bIsBoneTarget;
	DWORD m_bIsUsingBoneSpaceOffsets;
	DWORD m_bHasOffsets;
	DWORD m_bIsSet;
} CNmTarget;

inline struct CNmBodyGroupEventOffsets {
	DWORD m_groupName;
} CNmBodyGroupEvent;

inline struct CWayPointHelperUpdateNodeOffsets {
	DWORD m_flStartCycle;
	DWORD m_flEndCycle;
	DWORD m_bOnlyGoals;
	DWORD m_bPreventOvershoot;
	DWORD m_bPreventUndershoot;
} CWayPointHelperUpdateNode;

inline struct CMoodVDataOffsets {
	DWORD m_sModelName;
	DWORD m_nMoodType;
	DWORD m_animationLayers;
} CMoodVData;

inline struct CModelConfigElement_AttachedModelOffsets {
	DWORD m_InstanceName;
	DWORD m_EntityClass;
	DWORD m_hModel;
	DWORD m_vOffset;
	DWORD m_aAngOffset;
	DWORD m_AttachmentName;
	DWORD m_LocalAttachmentOffsetName;
	DWORD m_AttachmentType;
	DWORD m_bBoneMergeFlex;
	DWORD m_bUserSpecifiedColor;
	DWORD m_bUserSpecifiedMaterialGroup;
	DWORD m_bAcceptParentMaterialDrivenDecals;
	DWORD m_BodygroupOnOtherModels;
	DWORD m_MaterialGroupOnOtherModels;
} CModelConfigElement_AttachedModel;

inline struct CAnimTagManagerUpdaterOffsets {
	DWORD m_tags;
} CAnimTagManagerUpdater;

inline struct buttonsOffsets {
	DWORD attack;
	DWORD attack2;
	DWORD back;
	DWORD duck;
	DWORD forward;
	DWORD jump;
	DWORD left;
	DWORD lookatweapon;
	DWORD reload;
	DWORD right;
	DWORD showscores;
	DWORD sprint;
	DWORD turnleft;
	DWORD turnright;
	DWORD use;
	DWORD zoom;
} buttons;

inline struct CPulseCell_WaitForCursorsWithTagOffsets {
	DWORD m_bTagSelfWhenComplete;
	DWORD m_nDesiredKillPriority;
} CPulseCell_WaitForCursorsWithTag;

inline struct C_SceneEntity__QueuedEvents_tOffsets {
	DWORD starttime;
} C_SceneEntity__QueuedEvents_t;

inline struct CCSPlayer_PingServicesOffsets {
	DWORD m_hPlayerPing;
	DWORD m_flPlayerPingTokens;
} CCSPlayer_PingServices;

inline struct CEconItemAttributeOffsets {
	DWORD m_iAttributeDefinitionIndex;
	DWORD m_flValue;
	DWORD m_flInitialValue;
	DWORD m_nRefundableCurrency;
	DWORD m_bSetBonus;
} CEconItemAttribute;

inline struct PredictedDamageTag_tOffsets {
	DWORD nTagTick;
	DWORD flFlinchModSmall;
	DWORD flFlinchModLarge;
	DWORD flFriendlyFireDamageReductionRatio;
} PredictedDamageTag_t;

inline struct C_EnvWindSharedOffsets {
	DWORD m_flStartTime;
	DWORD m_iWindSeed;
	DWORD m_iMinWind;
	DWORD m_iMaxWind;
	DWORD m_windRadius;
	DWORD m_iMinGust;
	DWORD m_iMaxGust;
	DWORD m_flMinGustDelay;
	DWORD m_flMaxGustDelay;
	DWORD m_flGustDuration;
	DWORD m_iGustDirChange;
	DWORD m_iInitialWindDir;
	DWORD m_flInitialWindSpeed;
	DWORD m_location;
	DWORD m_hEntOwner;
} C_EnvWindShared;

inline struct C_SkyCameraOffsets {
	DWORD m_skyboxData;
	DWORD m_skyboxSlotToken;
	DWORD m_bUseAngles;
	DWORD m_pNext;
} C_SkyCamera;

inline struct CPulseCell_BaseOffsets {
	DWORD m_nEditorNodeID;
} CPulseCell_Base;

inline struct C_SoundOpvarSetPointBaseOffsets {
	DWORD m_iszStackName;
	DWORD m_iszOperatorName;
	DWORD m_iszOpvarName;
	DWORD m_iOpvarIndex;
	DWORD m_bUseAutoCompare;
} C_SoundOpvarSetPointBase;

inline struct C_EnvCubemapFogOffsets {
	DWORD m_flEndDistance;
	DWORD m_flStartDistance;
	DWORD m_flFogFalloffExponent;
	DWORD m_bHeightFogEnabled;
	DWORD m_flFogHeightWidth;
	DWORD m_flFogHeightEnd;
	DWORD m_flFogHeightStart;
	DWORD m_flFogHeightExponent;
	DWORD m_flLODBias;
	DWORD m_bActive;
	DWORD m_bStartDisabled;
	DWORD m_flFogMaxOpacity;
	DWORD m_nCubemapSourceType;
	DWORD m_hSkyMaterial;
	DWORD m_iszSkyEntity;
	DWORD m_hFogCubemapTexture;
	DWORD m_bHasHeightFogEnd;
	DWORD m_bFirstTime;
} C_EnvCubemapFog;

inline struct C_BaseFlex__Emphasized_PhonemeOffsets {
	DWORD m_sClassName;
	DWORD m_flAmount;
	DWORD m_bRequired;
	DWORD m_bBasechecked;
	DWORD m_bValid;
} C_BaseFlex__Emphasized_Phoneme;

inline struct C_EnvParticleGlowOffsets {
	DWORD m_flAlphaScale;
	DWORD m_flRadiusScale;
	DWORD m_flSelfIllumScale;
	DWORD m_ColorTint;
	DWORD m_hTextureOverride;
} C_EnvParticleGlow;

inline struct CCSPlayerController_InventoryServicesOffsets {
	DWORD m_vecNetworkableLoadout;
	DWORD m_unMusicID;
	DWORD m_rank;
	DWORD m_nPersonaDataPublicLevel;
	DWORD m_nPersonaDataPublicCommendsLeader;
	DWORD m_nPersonaDataPublicCommendsTeacher;
	DWORD m_nPersonaDataPublicCommendsFriendly;
	DWORD m_nPersonaDataXpTrailLevel;
	DWORD m_vecServerAuthoritativeWeaponSlots;
	DWORD m_unEquippedPlayerSprayIDs;
	DWORD m_unCurrentLoadoutHash;
} CCSPlayerController_InventoryServices;

inline struct C_EconEntity__AttachedModelData_tOffsets {
	DWORD m_iModelDisplayFlags;
} C_EconEntity__AttachedModelData_t;

inline struct CTriggerFanOffsets {
	DWORD m_vFanOriginOffset;
	DWORD m_vDirection;
	DWORD m_bPushTowardsInfoTarget;
	DWORD m_bPushAwayFromInfoTarget;
	DWORD m_qNoiseDelta;
	DWORD m_hInfoFan;
	DWORD m_flForce;
	DWORD m_bFalloff;
	DWORD m_RampTimer;
	DWORD m_vFanOriginWS;
	DWORD m_vFanOriginLS;
	DWORD m_vFanEndLS;
	DWORD m_vNoiseDirectionTarget;
	DWORD m_iszInfoFan;
	DWORD m_flRopeForceScale;
	DWORD m_flParticleForceScale;
	DWORD m_flPlayerForce;
	DWORD m_bPlayerWindblock;
	DWORD m_flNPCForce;
	DWORD m_flRampTime;
	DWORD m_fNoiseDegrees;
	DWORD m_fNoiseSpeed;
	DWORD m_bPushPlayer;
	DWORD m_bRampDown;
	DWORD m_nManagerFanIdx;
} CTriggerFan;

inline struct C_BulletHitModelOffsets {
	DWORD m_matLocal;
	DWORD m_iBoneIndex;
	DWORD m_hPlayerParent;
	DWORD m_bIsHit;
	DWORD m_flTimeCreated;
	DWORD m_vecStartPos;
} C_BulletHitModel;

inline struct C_FuncElectrifiedVolumeOffsets {
	DWORD m_nAmbientEffect;
	DWORD m_EffectName;
	DWORD m_bState;
} C_FuncElectrifiedVolume;

inline struct C_MapVetoPickControllerOffsets {
	DWORD m_nDraftType;
	DWORD m_nTeamWinningCoinToss;
	DWORD m_nTeamWithFirstChoice;
	DWORD m_nVoteMapIdsList;
	DWORD m_nAccountIDs;
	DWORD m_nMapId0;
	DWORD m_nMapId1;
	DWORD m_nMapId2;
	DWORD m_nMapId3;
	DWORD m_nMapId4;
	DWORD m_nMapId5;
	DWORD m_nStartingSide0;
	DWORD m_nCurrentPhase;
	DWORD m_nPhaseStartTick;
	DWORD m_nPhaseDurationTicks;
	DWORD m_nPostDataUpdateTick;
	DWORD m_bDisabledHud;
} C_MapVetoPickController;

inline struct C_EnvVolumetricFogVolumeOffsets {
	DWORD m_bActive;
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
	DWORD m_bStartDisabled;
	DWORD m_bIndirectUseLPVs;
	DWORD m_flStrength;
	DWORD m_nFalloffShape;
	DWORD m_flFalloffExponent;
	DWORD m_flHeightFogDepth;
	DWORD m_fHeightFogEdgeWidth;
	DWORD m_fIndirectLightStrength;
	DWORD m_fSunLightStrength;
	DWORD m_fNoiseStrength;
	DWORD m_TintColor;
	DWORD m_bOverrideTintColor;
	DWORD m_bOverrideIndirectLightStrength;
	DWORD m_bOverrideSunLightStrength;
	DWORD m_bOverrideNoiseStrength;
} C_EnvVolumetricFogVolume;

inline struct CPulseCell_PlaySequenceOffsets {
	DWORD m_SequenceName;
	DWORD m_PulseAnimEvents;
	DWORD m_OnFinished;
	DWORD m_OnCanceled;
} CPulseCell_PlaySequence;

inline struct C_BarnLightOffsets {
	DWORD m_bEnabled;
	DWORD m_nColorMode;
	DWORD m_Color;
	DWORD m_flColorTemperature;
	DWORD m_flBrightness;
	DWORD m_flBrightnessScale;
	DWORD m_nDirectLight;
	DWORD m_nBakedShadowIndex;
	DWORD m_nLightPathUniqueId;
	DWORD m_nLightMapUniqueId;
	DWORD m_nLuminaireShape;
	DWORD m_flLuminaireSize;
	DWORD m_flLuminaireAnisotropy;
	DWORD m_LightStyleString;
	DWORD m_flLightStyleStartTime;
	DWORD m_QueuedLightStyleStrings;
	DWORD m_LightStyleEvents;
	DWORD m_LightStyleTargets;
	DWORD m_StyleEvent;
	DWORD m_hLightCookie;
	DWORD m_flShape;
	DWORD m_flSoftX;
	DWORD m_flSoftY;
	DWORD m_flSkirt;
	DWORD m_flSkirtNear;
	DWORD m_vSizeParams;
	DWORD m_flRange;
	DWORD m_vShear;
	DWORD m_nBakeSpecularToCubemaps;
	DWORD m_vBakeSpecularToCubemapsSize;
	DWORD m_nCastShadows;
	DWORD m_nShadowMapSize;
	DWORD m_nShadowPriority;
	DWORD m_bContactShadow;
	DWORD m_bForceShadowsEnabled;
	DWORD m_nBounceLight;
	DWORD m_flBounceScale;
	DWORD m_flMinRoughness;
	DWORD m_vAlternateColor;
	DWORD m_fAlternateColorBrightness;
	DWORD m_nFog;
	DWORD m_flFogStrength;
	DWORD m_nFogShadows;
	DWORD m_flFogScale;
	DWORD m_bFogMixedShadows;
	DWORD m_flFadeSizeStart;
	DWORD m_flFadeSizeEnd;
	DWORD m_flShadowFadeSizeStart;
	DWORD m_flShadowFadeSizeEnd;
	DWORD m_bPrecomputedFieldsValid;
	DWORD m_vPrecomputedBoundsMins;
	DWORD m_vPrecomputedBoundsMaxs;
	DWORD m_vPrecomputedOBBOrigin;
	DWORD m_vPrecomputedOBBAngles;
	DWORD m_vPrecomputedOBBExtent;
	DWORD m_nPrecomputedSubFrusta;
	DWORD m_vPrecomputedOBBOrigin0;
	DWORD m_vPrecomputedOBBAngles0;
	DWORD m_vPrecomputedOBBExtent0;
	DWORD m_vPrecomputedOBBOrigin1;
	DWORD m_vPrecomputedOBBAngles1;
	DWORD m_vPrecomputedOBBExtent1;
	DWORD m_vPrecomputedOBBOrigin2;
	DWORD m_vPrecomputedOBBAngles2;
	DWORD m_vPrecomputedOBBExtent2;
	DWORD m_vPrecomputedOBBOrigin3;
	DWORD m_vPrecomputedOBBAngles3;
	DWORD m_vPrecomputedOBBExtent3;
	DWORD m_vPrecomputedOBBOrigin4;
	DWORD m_vPrecomputedOBBAngles4;
	DWORD m_vPrecomputedOBBExtent4;
	DWORD m_vPrecomputedOBBOrigin5;
	DWORD m_vPrecomputedOBBAngles5;
	DWORD m_vPrecomputedOBBExtent5;
	DWORD m_bInitialBoneSetup;
	DWORD m_VisClusters;
} C_BarnLight;

inline struct CPulseCell_LerpCameraSettingsOffsets {
	DWORD m_flSeconds;
	DWORD m_Start;
	DWORD m_End;
} CPulseCell_LerpCameraSettings;

inline struct CPointOffScreenIndicatorUiOffsets {
	DWORD m_bBeenEnabled;
	DWORD m_bHide;
	DWORD m_flSeenTargetTime;
	DWORD m_pTargetPanel;
} CPointOffScreenIndicatorUi;

inline struct C_PostProcessingVolumeOffsets {
	DWORD m_hPostSettings;
	DWORD m_flFadeDuration;
	DWORD m_flMinLogExposure;
	DWORD m_flMaxLogExposure;
	DWORD m_flMinExposure;
	DWORD m_flMaxExposure;
	DWORD m_flExposureCompensation;
	DWORD m_flExposureFadeSpeedUp;
	DWORD m_flExposureFadeSpeedDown;
	DWORD m_flTonemapEVSmoothingRange;
	DWORD m_bMaster;
	DWORD m_bExposureControl;
} C_PostProcessingVolume;

inline struct CPulseCell_PickBestOutflowSelectorOffsets {
	DWORD m_nCheckType;
	DWORD m_OutflowList;
} CPulseCell_PickBestOutflowSelector;

inline struct CInfoFanOffsets {
	DWORD m_fFanForceMaxRadius;
	DWORD m_fFanForceMinRadius;
	DWORD m_flCurveDistRange;
	DWORD m_FanForceCurveString;
} CInfoFan;

inline struct C_VoteControllerOffsets {
	DWORD m_iActiveIssueIndex;
	DWORD m_iOnlyTeamToVote;
	DWORD m_nVoteOptionCount;
	DWORD m_nPotentialVotes;
	DWORD m_bVotesDirty;
	DWORD m_bTypeDirty;
	DWORD m_bIsYesNoVote;
} C_VoteController;

inline struct C_CSPlayerPawnBaseOffsets {
	DWORD m_pPingServices;
	DWORD m_previousPlayerState;
	DWORD m_iPlayerState;
	DWORD m_bHasMovedSinceSpawn;
	DWORD m_flLastSpawnTimeIndex;
	DWORD m_iProgressBarDuration;
	DWORD m_flProgressBarStartTime;
	DWORD m_flClientDeathTime;
	DWORD m_flFlashBangTime;
	DWORD m_flFlashScreenshotAlpha;
	DWORD m_flFlashOverlayAlpha;
	DWORD m_bFlashBuildUp;
	DWORD m_bFlashDspHasBeenCleared;
	DWORD m_bFlashScreenshotHasBeenGrabbed;
	DWORD m_flFlashMaxAlpha;
	DWORD m_flFlashDuration;
	DWORD m_flClientHealthFadeChangeTimestamp;
	DWORD m_nClientHealthFadeParityValue;
	DWORD m_fNextThinkPushAway;
	DWORD m_flCurrentMusicStartTime;
	DWORD m_flMusicRoundStartTime;
	DWORD m_bDeferStartMusicOnWarmup;
	DWORD m_flLastSmokeOverlayAlpha;
	DWORD m_flLastSmokeAge;
	DWORD m_vLastSmokeOverlayColor;
	DWORD m_hOriginalController;
} C_CSPlayerPawnBase;

inline struct C_C4Offsets {
	DWORD m_activeLightParticleIndex;
	DWORD m_eActiveLightEffect;
	DWORD m_bStartedArming;
	DWORD m_fArmedTime;
	DWORD m_bBombPlacedAnimation;
	DWORD m_bIsPlantingViaUse;
	DWORD m_entitySpottedState;
	DWORD m_nSpotRules;
	DWORD m_bPlayedArmingBeeps;
	DWORD m_bBombPlanted;
} C_C4;

inline struct C_BreakablePropOffsets {
	DWORD m_CPropDataComponent;
	DWORD m_OnStartDeath;
	DWORD m_OnBreak;
	DWORD m_OnHealthChanged;
	DWORD m_OnTakeDamage;
	DWORD m_impactEnergyScale;
	DWORD m_iMinHealthDmg;
	DWORD m_flPressureDelay;
	DWORD m_flDefBurstScale;
	DWORD m_vDefBurstOffset;
	DWORD m_hBreaker;
	DWORD m_PerformanceMode;
	DWORD m_flPreventDamageBeforeTime;
	DWORD m_BreakableContentsType;
	DWORD m_strBreakableContentsPropGroupOverride;
	DWORD m_strBreakableContentsParticleOverride;
	DWORD m_bHasBreakPiecesOrCommands;
	DWORD m_explodeDamage;
	DWORD m_explodeRadius;
	DWORD m_explosionDelay;
	DWORD m_explosionBuildupSound;
	DWORD m_explosionCustomEffect;
	DWORD m_explosionCustomSound;
	DWORD m_explosionModifier;
	DWORD m_hPhysicsAttacker;
	DWORD m_flLastPhysicsInfluenceTime;
	DWORD m_flDefaultFadeScale;
	DWORD m_hLastAttacker;
} C_BreakableProp;

inline struct CPrecipitationVDataOffsets {
	DWORD m_szParticlePrecipitationEffect;
	DWORD m_flInnerDistance;
	DWORD m_nAttachType;
	DWORD m_bBatchSameVolumeType;
	DWORD m_nRTEnvCP;
	DWORD m_nRTEnvCPComponent;
	DWORD m_szModifier;
} CPrecipitationVData;

inline struct C_RetakeGameRulesOffsets {
	DWORD m_nMatchSeed;
	DWORD m_bBlockersPresent;
	DWORD m_bRoundInProgress;
	DWORD m_iFirstSecondHalfRound;
	DWORD m_iBombSite;
	DWORD m_hBombPlanter;
} C_RetakeGameRules;

inline struct CPulseCell_WaitForObservableOffsets {
	DWORD m_Condition;
	DWORD m_OnTrue;
} CPulseCell_WaitForObservable;

inline struct C_SoundAreaEntitySphereOffsets {
	DWORD m_flRadius;
} C_SoundAreaEntitySphere;

inline struct CPulseCell_Step_EntFireOffsets {
	DWORD m_Input;
} CPulseCell_Step_EntFire;

inline struct C_BaseButtonOffsets {
	DWORD m_glowEntity;
	DWORD m_usable;
	DWORD m_szDisplayText;
} C_BaseButton;

inline struct CCSObserver_ObserverServicesOffsets {
	DWORD m_obsInterpState;
} CCSObserver_ObserverServices;

inline struct CHitboxComponentOffsets {
	DWORD m_flBoundsExpandRadius;
} CHitboxComponent;

inline struct C_PrecipitationOffsets {
	DWORD m_flDensity;
	DWORD m_flParticleInnerDist;
	DWORD m_pParticleDef;
	DWORD m_tParticlePrecipTraceTimer;
	DWORD m_bActiveParticlePrecipEmitter;
	DWORD m_bParticlePrecipInitialized;
	DWORD m_bHasSimulatedSinceLastSceneObjectUpdate;
	DWORD m_nAvailableSheetSequencesMaxIndex;
} C_Precipitation;

inline struct CLogicRelayOffsets {
	DWORD m_bDisabled;
	DWORD m_bWaitForRefire;
	DWORD m_bTriggerOnce;
	DWORD m_bFastRetrigger;
	DWORD m_bPassthoughCaller;
} CLogicRelay;

inline struct SequenceHistory_tOffsets {
	DWORD m_hSequence;
	DWORD m_flSeqStartTime;
	DWORD m_flSeqFixedCycle;
	DWORD m_nSeqLoopMode;
	DWORD m_flPlaybackRate;
	DWORD m_flCyclesPerSecond;
} SequenceHistory_t;

inline struct CPulse_OutflowConnectionOffsets {
	DWORD m_SourceOutflowName;
	DWORD m_nDestChunk;
	DWORD m_nInstruction;
	DWORD m_OutflowRegisterMap;
} CPulse_OutflowConnection;

inline struct C_SpotlightEndOffsets {
	DWORD m_flLightScale;
	DWORD m_Radius;
} C_SpotlightEnd;

inline struct C_FishOffsets {
	DWORD m_pos;
	DWORD m_vel;
	DWORD m_angles;
	DWORD m_localLifeState;
	DWORD m_deathDepth;
	DWORD m_deathAngle;
	DWORD m_buoyancy;
	DWORD m_wiggleTimer;
	DWORD m_wigglePhase;
	DWORD m_wiggleRate;
	DWORD m_actualPos;
	DWORD m_actualAngles;
	DWORD m_poolOrigin;
	DWORD m_waterLevel;
	DWORD m_gotUpdate;
	DWORD m_x;
	DWORD m_y;
	DWORD m_z;
	DWORD m_angle;
	DWORD m_errorHistory;
	DWORD m_errorHistoryIndex;
	DWORD m_errorHistoryCount;
	DWORD m_averageError;
} C_Fish;

inline struct C_EnvVolumetricFogControllerOffsets {
	DWORD m_flScattering;
	DWORD m_TintColor;
	DWORD m_flAnisotropy;
	DWORD m_flFadeSpeed;
	DWORD m_flDrawDistance;
	DWORD m_flFadeInStart;
	DWORD m_flFadeInEnd;
	DWORD m_flIndirectStrength;
	DWORD m_nVolumeDepth;
	DWORD m_fFirstVolumeSliceThickness;
	DWORD m_nIndirectTextureDimX;
	DWORD m_nIndirectTextureDimY;
	DWORD m_nIndirectTextureDimZ;
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
	DWORD m_bActive;
	DWORD m_flStartAnisoTime;
	DWORD m_flStartScatterTime;
	DWORD m_flStartDrawDistanceTime;
	DWORD m_flStartAnisotropy;
	DWORD m_flStartScattering;
	DWORD m_flStartDrawDistance;
	DWORD m_flDefaultAnisotropy;
	DWORD m_flDefaultScattering;
	DWORD m_flDefaultDrawDistance;
	DWORD m_bStartDisabled;
	DWORD m_bEnableIndirect;
	DWORD m_bIsMaster;
	DWORD m_hFogIndirectTexture;
	DWORD m_nForceRefreshCount;
	DWORD m_fNoiseSpeed;
	DWORD m_fNoiseStrength;
	DWORD m_vNoiseScale;
	DWORD m_fWindSpeed;
	DWORD m_vWindDirection;
	DWORD m_bFirstTime;
} C_EnvVolumetricFogController;

inline struct CPulseGraphDefOffsets {
	DWORD m_DomainIdentifier;
	DWORD m_DomainSubType;
	DWORD m_ParentMapName;
	DWORD m_ParentXmlName;
	DWORD m_Chunks;
	DWORD m_Cells;
	DWORD m_Vars;
	DWORD m_PublicOutputs;
	DWORD m_InvokeBindings;
	DWORD m_CallInfos;
	DWORD m_Constants;
	DWORD m_DomainValues;
	DWORD m_BlackboardReferences;
	DWORD m_OutputConnections;
} CPulseGraphDef;

inline struct C_EnvDetailControllerOffsets {
	DWORD m_flFadeStartDist;
	DWORD m_flFadeEndDist;
} C_EnvDetailController;

inline struct C_EnvWindVolumeOffsets {
	DWORD m_bActive;
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
	DWORD m_bStartDisabled;
	DWORD m_nShape;
	DWORD m_fWindSpeedMultiplier;
	DWORD m_fWindTurbulenceMultiplier;
	DWORD m_fWindSpeedVariationMultiplier;
	DWORD m_fWindDirectionVariationMultiplier;
} C_EnvWindVolume;

inline struct CCSPlayer_HostageServicesOffsets {
	DWORD m_hCarriedHostage;
	DWORD m_hCarriedHostageProp;
} CCSPlayer_HostageServices;

inline struct CRenderComponentOffsets {
	DWORD __m_pChainEntity;
	DWORD m_bIsRenderingWithViewModels;
	DWORD m_nSplitscreenFlags;
	DWORD m_bEnableRendering;
	DWORD m_bInterpolationReadyToDraw;
} CRenderComponent;

inline struct C_TeamOffsets {
	DWORD m_aPlayerControllers;
	DWORD m_aPlayers;
	DWORD m_iScore;
	DWORD m_szTeamname;
} C_Team;

inline struct CPointChildModifierOffsets {
	DWORD m_bOrphanInsteadOfDeletingChildrenOnRemove;
} CPointChildModifier;

inline struct C_CSGO_TeamPreviewCameraOffsets {
	DWORD m_nVariant;
} C_CSGO_TeamPreviewCamera;

inline struct C_ColorCorrectionVolumeOffsets {
	DWORD m_LastEnterWeight;
	DWORD m_LastEnterTime;
	DWORD m_LastExitWeight;
	DWORD m_LastExitTime;
	DWORD m_bEnabled;
	DWORD m_MaxWeight;
	DWORD m_FadeDuration;
	DWORD m_Weight;
	DWORD m_lookupFilename;
} C_ColorCorrectionVolume;

inline struct CPlayer_MovementServicesOffsets {
	DWORD m_nImpulse;
	DWORD m_nButtons;
	DWORD m_nQueuedButtonDownMask;
	DWORD m_nQueuedButtonChangeMask;
	DWORD m_nButtonDoublePressed;
	DWORD m_pButtonPressedCmdNumber;
	DWORD m_nLastCommandNumberProcessed;
	DWORD m_nToggleButtonDownMask;
	DWORD m_flMaxspeed;
	DWORD m_arrForceSubtickMoveWhen;
	DWORD m_flForwardMove;
	DWORD m_flLeftMove;
	DWORD m_flUpMove;
	DWORD m_vecLastMovementImpulses;
	DWORD m_vecOldViewAngles;
} CPlayer_MovementServices;

inline struct CInfoDynamicShadowHintBoxOffsets {
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
} CInfoDynamicShadowHintBox;

inline struct CBaseAnimGraphControllerOffsets {
	DWORD m_animGraphNetworkedVars;
	DWORD m_bSequenceFinished;
	DWORD m_flSoundSyncTime;
	DWORD m_nActiveIKChainMask;
	DWORD m_hSequence;
	DWORD m_flSeqStartTime;
	DWORD m_flSeqFixedCycle;
	DWORD m_nAnimLoopMode;
	DWORD m_flPlaybackRate;
	DWORD m_nNotifyState;
	DWORD m_bNetworkedAnimationInputsChanged;
	DWORD m_bNetworkedSequenceChanged;
	DWORD m_bLastUpdateSkipped;
	DWORD m_flPrevAnimUpdateTime;
	DWORD m_hGraphDefinitionAG2;
	DWORD m_bIsUsingAG2;
	DWORD m_serializedPoseRecipeAG2;
	DWORD m_nSerializePoseRecipeSizeAG2;
	DWORD m_nSerializePoseRecipeVersionAG2;
	DWORD m_nGraphCreationFlagsAG2;
	DWORD m_nServerGraphDefReloadCountAG2;
	DWORD m_nServerSerializationContextIteration;
} CBaseAnimGraphController;

inline struct C_ColorCorrectionOffsets {
	DWORD m_vecOrigin;
	DWORD m_MinFalloff;
	DWORD m_MaxFalloff;
	DWORD m_flFadeInDuration;
	DWORD m_flFadeOutDuration;
	DWORD m_flMaxWeight;
	DWORD m_flCurWeight;
	DWORD m_netlookupFilename;
	DWORD m_bEnabled;
	DWORD m_bMaster;
	DWORD m_bClientSide;
	DWORD m_bExclusive;
	DWORD m_bEnabledOnClient;
	DWORD m_flCurWeightOnClient;
	DWORD m_bFadingIn;
	DWORD m_flFadeStartWeight;
	DWORD m_flFadeStartTime;
	DWORD m_flFadeDuration;
} C_ColorCorrection;

inline struct CBuoyancyHelperOffsets {
	DWORD m_nFluidType;
	DWORD m_flFluidDensity;
	DWORD m_flNeutrallyBuoyantGravity;
	DWORD m_flNeutrallyBuoyantLinearDamping;
	DWORD m_flNeutrallyBuoyantAngularDamping;
	DWORD m_bNeutrallyBuoyant;
	DWORD m_vecFractionOfWheelSubmergedForWheelFriction;
	DWORD m_vecWheelFrictionScales;
	DWORD m_vecFractionOfWheelSubmergedForWheelDrag;
	DWORD m_vecWheelDrag;
} CBuoyancyHelper;

inline struct CCSPlayer_CameraServicesOffsets {
	DWORD m_flDeathCamTilt;
	DWORD m_vClientScopeInaccuracy;
} CCSPlayer_CameraServices;

inline struct CFilterMultipleOffsets {
	DWORD m_nFilterType;
	DWORD m_iFilterName;
	DWORD m_hFilter;
} CFilterMultiple;

inline struct CPulseCell_FireCursorsOffsets {
	DWORD m_Outflows;
	DWORD m_bWaitForChildOutflows;
	DWORD m_OnFinished;
	DWORD m_OnCanceled;
} CPulseCell_FireCursors;

inline struct CEnvSoundscapeOffsets {
	DWORD m_OnPlay;
	DWORD m_flRadius;
	DWORD m_soundEventName;
	DWORD m_bOverrideWithEvent;
	DWORD m_soundscapeIndex;
	DWORD m_soundscapeEntityListId;
	DWORD m_positionNames;
	DWORD m_hProxySoundscape;
	DWORD m_bDisabled;
	DWORD m_soundscapeName;
	DWORD m_soundEventHash;
} CEnvSoundscape;

inline struct C_FogControllerOffsets {
	DWORD m_fog;
	DWORD m_bUseAngles;
	DWORD m_iChangedVariables;
} C_FogController;

inline struct CBodyComponentPointOffsets {
	DWORD m_sceneNode;
} CBodyComponentPoint;

inline struct C_EconItemViewOffsets {
	DWORD m_bInventoryImageRgbaRequested;
	DWORD m_bInventoryImageTriedCache;
	DWORD m_nInventoryImageRgbaWidth;
	DWORD m_nInventoryImageRgbaHeight;
	DWORD m_szCurrentLoadCachedFileName;
	DWORD m_bRestoreCustomMaterialAfterPrecache;
	DWORD m_iItemDefinitionIndex;
	DWORD m_iEntityQuality;
	DWORD m_iEntityLevel;
	DWORD m_iItemID;
	DWORD m_iItemIDHigh;
	DWORD m_iItemIDLow;
	DWORD m_iAccountID;
	DWORD m_iInventoryPosition;
	DWORD m_bInitialized;
	DWORD m_bDisallowSOC;
	DWORD m_bIsStoreItem;
	DWORD m_bIsTradeItem;
	DWORD m_iEntityQuantity;
	DWORD m_iRarityOverride;
	DWORD m_iQualityOverride;
	DWORD m_iOriginOverride;
	DWORD m_ubStyleOverride;
	DWORD m_unClientFlags;
	DWORD m_AttributeList;
	DWORD m_NetworkedDynamicAttributes;
	DWORD m_szCustomName;
	DWORD m_szCustomNameOverride;
	DWORD m_bInitializedTags;
} C_EconItemView;

inline struct CPulseCell_Timeline__TimelineEvent_tOffsets {
	DWORD m_flTimeFromPrevious;
	DWORD m_EventOutflow;
} CPulseCell_Timeline__TimelineEvent_t;

inline struct CPulseCell_IntervalTimer__CursorState_tOffsets {
	DWORD m_StartTime;
	DWORD m_EndTime;
	DWORD m_flWaitInterval;
	DWORD m_flWaitIntervalHigh;
	DWORD m_bCompleteOnNextWake;
} CPulseCell_IntervalTimer__CursorState_t;

inline struct OutflowWithRequirements_tOffsets {
	DWORD m_Connection;
	DWORD m_DestinationFlowNodeID;
	DWORD m_RequirementNodeIDs;
	DWORD m_nCursorStateBlockIndex;
} OutflowWithRequirements_t;

inline struct C_SoundEventPathCornerEntityOffsets {
	DWORD m_vecCornerPairsNetworked;
} C_SoundEventPathCornerEntity;

inline struct C_InfoVisibilityBoxOffsets {
	DWORD m_nMode;
	DWORD m_vBoxSize;
	DWORD m_bEnabled;
} C_InfoVisibilityBox;

inline struct CCSPlayer_ItemServicesOffsets {
	DWORD m_bHasDefuser;
	DWORD m_bHasHelmet;
} CCSPlayer_ItemServices;

inline struct CPulseCell_Value_GradientOffsets {
	DWORD m_Gradient;
} CPulseCell_Value_Gradient;

inline struct IntervalTimerOffsets {
	DWORD m_timestamp;
	DWORD m_nWorldGroupId;
} IntervalTimer;

inline struct audioparams_tOffsets {
	DWORD localSound;
	DWORD soundscapeIndex;
	DWORD localBits;
	DWORD soundscapeEntityListIndex;
	DWORD soundEventHash;
} audioparams_t;

inline struct C_PathParticleRopeOffsets {
	DWORD m_bStartActive;
	DWORD m_flMaxSimulationTime;
	DWORD m_iszEffectName;
	DWORD m_PathNodes_Name;
	DWORD m_flParticleSpacing;
	DWORD m_flSlack;
	DWORD m_flRadius;
	DWORD m_ColorTint;
	DWORD m_nEffectState;
	DWORD m_iEffectIndex;
	DWORD m_PathNodes_Position;
	DWORD m_PathNodes_TangentIn;
	DWORD m_PathNodes_TangentOut;
	DWORD m_PathNodes_Color;
	DWORD m_PathNodes_PinEnabled;
	DWORD m_PathNodes_RadiusScale;
} C_PathParticleRope;

inline struct C_DecoyProjectileOffsets {
	DWORD m_nDecoyShotTick;
	DWORD m_nClientLastKnownDecoyShotTick;
	DWORD m_flTimeParticleEffectSpawn;
} C_DecoyProjectile;

inline struct C_AttributeContainerOffsets {
	DWORD m_Item;
	DWORD m_iExternalItemProviderRegisteredToken;
	DWORD m_ullRegisteredAsItemID;
} C_AttributeContainer;

inline struct C_CSWeaponBaseOffsets {
	DWORD m_iWeaponGameplayAnimState;
	DWORD m_flWeaponGameplayAnimStateTimestamp;
	DWORD m_flInspectCancelCompleteTime;
	DWORD m_bInspectPending;
	DWORD m_bInspectShouldLoop;
	DWORD m_flCrosshairDistance;
	DWORD m_iAmmoLastCheck;
	DWORD m_nLastEmptySoundCmdNum;
	DWORD m_bFireOnEmpty;
	DWORD m_OnPlayerPickup;
	DWORD m_weaponMode;
	DWORD m_flTurningInaccuracyDelta;
	DWORD m_vecTurningInaccuracyEyeDirLast;
	DWORD m_flTurningInaccuracy;
	DWORD m_fAccuracyPenalty;
	DWORD m_flLastAccuracyUpdateTime;
	DWORD m_fAccuracySmoothedForZoom;
	DWORD m_iRecoilIndex;
	DWORD m_flRecoilIndex;
	DWORD m_bBurstMode;
	DWORD m_flLastBurstModeChangeTime;
	DWORD m_nPostponeFireReadyTicks;
	DWORD m_flPostponeFireReadyFrac;
	DWORD m_bInReload;
	DWORD m_flDroppedAtTime;
	DWORD m_bIsHauledBack;
	DWORD m_bSilencerOn;
	DWORD m_flTimeSilencerSwitchComplete;
	DWORD m_iOriginalTeamNumber;
	DWORD m_iMostRecentTeamNumber;
	DWORD m_bDroppedNearBuyZone;
	DWORD m_flNextAttackRenderTimeOffset;
	DWORD m_bClearWeaponIdentifyingUGC;
	DWORD m_bVisualsDataSet;
	DWORD m_bUIWeapon;
	DWORD m_nCustomEconReloadEventId;
	DWORD m_nextPrevOwnerUseTime;
	DWORD m_hPrevOwner;
	DWORD m_nDropTick;
	DWORD m_bWasActiveWeaponWhenDropped;
	DWORD m_donated;
	DWORD m_fLastShotTime;
	DWORD m_bWasOwnedByCT;
	DWORD m_bWasOwnedByTerrorist;
	DWORD m_flNextClientFireBulletTime;
	DWORD m_flNextClientFireBulletTime_Repredict;
	DWORD m_IronSightController;
	DWORD m_iIronSightMode;
	DWORD m_flLastLOSTraceFailureTime;
	DWORD m_flWatTickOffset;
	DWORD m_flLastShakeTime;
} C_CSWeaponBase;

inline struct CTimelineOffsets {
	DWORD m_flValues;
	DWORD m_nValueCounts;
	DWORD m_nBucketCount;
	DWORD m_flInterval;
	DWORD m_flFinalValue;
	DWORD m_nCompressionType;
	DWORD m_bStopped;
} CTimeline;

inline struct C_TonemapController2Offsets {
	DWORD m_flAutoExposureMin;
	DWORD m_flAutoExposureMax;
	DWORD m_flExposureAdaptationSpeedUp;
	DWORD m_flExposureAdaptationSpeedDown;
	DWORD m_flTonemapEVSmoothingRange;
} C_TonemapController2;

inline struct CountdownTimerOffsets {
	DWORD m_duration;
	DWORD m_timestamp;
	DWORD m_timescale;
	DWORD m_nWorldGroupId;
} CountdownTimer;

inline struct PulseNodeDynamicOutflows_t__DynamicOutflow_tOffsets {
	DWORD m_OutflowID;
	DWORD m_Connection;
} PulseNodeDynamicOutflows_t__DynamicOutflow_t;

inline struct WeaponPurchaseCount_tOffsets {
	DWORD m_nItemDefIndex;
	DWORD m_nCount;
} WeaponPurchaseCount_t;

inline struct FilterHealthOffsets {
	DWORD m_bAdrenalineActive;
	DWORD m_iHealthMin;
	DWORD m_iHealthMax;
} FilterHealth;

inline struct C_PointClientUIHUDOffsets {
	DWORD m_bCheckCSSClasses;
	DWORD m_bIgnoreInput;
	DWORD m_flWidth;
	DWORD m_flHeight;
	DWORD m_flDPI;
	DWORD m_flInteractDistance;
	DWORD m_flDepthOffset;
	DWORD m_unOwnerContext;
	DWORD m_unHorizontalAlign;
	DWORD m_unVerticalAlign;
	DWORD m_unOrientation;
	DWORD m_bAllowInteractionFromAllSceneWorlds;
	DWORD m_vecCSSClasses;
} C_PointClientUIHUD;

inline struct CPulseCell_Inflow_GraphHookOffsets {
	DWORD m_HookName;
} CPulseCell_Inflow_GraphHook;

inline struct C_PointCommentaryNodeOffsets {
	DWORD m_bActive;
	DWORD m_bWasActive;
	DWORD m_flEndTime;
	DWORD m_flStartTime;
	DWORD m_flStartTimeInCommentary;
	DWORD m_iszCommentaryFile;
	DWORD m_iszTitle;
	DWORD m_iszSpeakers;
	DWORD m_iNodeNumber;
	DWORD m_iNodeNumberMax;
	DWORD m_bListenedTo;
	DWORD m_hViewPosition;
	DWORD m_bRestartAfterRestore;
} C_PointCommentaryNode;

inline struct shard_model_desc_tOffsets {
	DWORD m_nModelID;
	DWORD m_hMaterialBase;
	DWORD m_hMaterialDamageOverlay;
	DWORD m_solid;
	DWORD m_vecPanelSize;
	DWORD m_vecStressPositionA;
	DWORD m_vecStressPositionB;
	DWORD m_vecPanelVertices;
	DWORD m_vInitialPanelVertices;
	DWORD m_flGlassHalfThickness;
	DWORD m_bHasParent;
	DWORD m_bParentFrozen;
	DWORD m_SurfacePropStringToken;
} shard_model_desc_t;

inline struct C_KeychainModuleOffsets {
	DWORD m_nKeychainDefID;
	DWORD m_nKeychainSeed;
} C_KeychainModule;

inline struct CFuncWaterOffsets {
	DWORD m_BuoyancyHelper;
} CFuncWater;

inline struct CCSGameModeRulesOffsets {
	DWORD __m_pChainEntity;
} CCSGameModeRules;

inline struct C_PointClientUIWorldTextPanelOffsets {
	DWORD m_messageText;
} C_PointClientUIWorldTextPanel;

inline struct CCSPlayer_WaterServicesOffsets {
	DWORD m_flWaterJumpTime;
	DWORD m_vecWaterJumpVel;
	DWORD m_flSwimSoundTime;
	DWORD m_NextDrownDamageTime;
	DWORD m_nDrownDmgRate;
	DWORD m_AirFinishedTime;
} CCSPlayer_WaterServices;

inline struct C_CSObserverPawnOffsets {
	DWORD m_hDetectParentChange;
} C_CSObserverPawn;

inline struct ViewAngleServerChange_tOffsets {
	DWORD nType;
	DWORD qAngle;
	DWORD nIndex;
} ViewAngleServerChange_t;

inline struct C_FuncLadderOffsets {
	DWORD m_vecLadderDir;
	DWORD m_Dismounts;
	DWORD m_vecLocalTop;
	DWORD m_vecPlayerMountPositionTop;
	DWORD m_vecPlayerMountPositionBottom;
	DWORD m_flAutoRideSpeed;
	DWORD m_bDisabled;
	DWORD m_bFakeLadder;
	DWORD m_bHasSlack;
} C_FuncLadder;

inline struct CCSPlayerBase_CameraServicesOffsets {
	DWORD m_iFOV;
	DWORD m_iFOVStart;
	DWORD m_flFOVTime;
	DWORD m_flFOVRate;
	DWORD m_hZoomOwner;
	DWORD m_flLastShotFOV;
	DWORD m_hTriggerFogList;
	DWORD m_hLastFogTrigger;
} CCSPlayerBase_CameraServices;

inline struct CPulseCell_Inflow_BaseEntrypointOffsets {
	DWORD m_EntryChunk;
	DWORD m_RegisterMap;
} CPulseCell_Inflow_BaseEntrypoint;

inline struct C_CSPlayerPawnOffsets {
	DWORD m_pBulletServices;
	DWORD m_pHostageServices;
	DWORD m_pBuyServices;
	DWORD m_pGlowServices;
	DWORD m_pActionTrackingServices;
	DWORD m_pDamageReactServices;
	DWORD m_flHealthShotBoostExpirationTime;
	DWORD m_flLastFiredWeaponTime;
	DWORD m_bHasFemaleVoice;
	DWORD m_flLandingTimeSeconds;
	DWORD m_flOldFallVelocity;
	DWORD m_szLastPlaceName;
	DWORD m_bPrevDefuser;
	DWORD m_bPrevHelmet;
	DWORD m_nPrevArmorVal;
	DWORD m_nPrevGrenadeAmmoCount;
	DWORD m_unPreviousWeaponHash;
	DWORD m_unWeaponHash;
	DWORD m_bInBuyZone;
	DWORD m_bPreviouslyInBuyZone;
	DWORD m_aimPunchAngle;
	DWORD m_aimPunchAngleVel;
	DWORD m_aimPunchTickBase;
	DWORD m_aimPunchTickFraction;
	DWORD m_aimPunchCache;
	DWORD m_bInLanding;
	DWORD m_flLandingStartTime;
	DWORD m_bInHostageRescueZone;
	DWORD m_bInBombZone;
	DWORD m_bIsBuyMenuOpen;
	DWORD m_flTimeOfLastInjury;
	DWORD m_flNextSprayDecalTime;
	DWORD m_iRetakesOffering;
	DWORD m_iRetakesOfferingCard;
	DWORD m_bRetakesHasDefuseKit;
	DWORD m_bRetakesMVPLastRound;
	DWORD m_iRetakesMVPBoostItem;
	DWORD m_RetakesMVPBoostExtraUtility;
	DWORD m_bNeedToReApplyGloves;
	DWORD m_EconGloves;
	DWORD m_nEconGlovesChanged;
	DWORD m_bMustSyncRagdollState;
	DWORD m_nRagdollDamageBone;
	DWORD m_vRagdollDamageForce;
	DWORD m_vRagdollDamagePosition;
	DWORD m_szRagdollDamageWeaponName;
	DWORD m_bRagdollDamageHeadshot;
	DWORD m_vRagdollServerOrigin;
	DWORD m_lastLandTime;
	DWORD m_bOnGroundLastTick;
	DWORD m_hHudModelArms;
	DWORD m_qDeathEyeAngles;
	DWORD m_bSkipOneHeadConstraintUpdate;
	DWORD m_bLeftHanded;
	DWORD m_fSwitchedHandednessTime;
	DWORD m_flViewmodelOffsetX;
	DWORD m_flViewmodelOffsetY;
	DWORD m_flViewmodelOffsetZ;
	DWORD m_flViewmodelFOV;
	DWORD m_vecPlayerPatchEconIndices;
	DWORD m_GunGameImmunityColor;
	DWORD m_vecBulletHitModels;
	DWORD m_bIsWalking;
	DWORD m_thirdPersonHeading;
	DWORD m_flSlopeDropOffset;
	DWORD m_flSlopeDropHeight;
	DWORD m_vHeadConstraintOffset;
	DWORD m_entitySpottedState;
	DWORD m_bIsScoped;
	DWORD m_bResumeZoom;
	DWORD m_bIsDefusing;
	DWORD m_bIsGrabbingHostage;
	DWORD m_iBlockingUseActionInProgress;
	DWORD m_flEmitSoundTime;
	DWORD m_bInNoDefuseArea;
	DWORD m_nWhichBombZone;
	DWORD m_iShotsFired;
	DWORD m_flFlinchStack;
	DWORD m_flVelocityModifier;
	DWORD m_flHitHeading;
	DWORD m_nHitBodyPart;
	DWORD m_bWaitForNoAttack;
	DWORD m_ignoreLadderJumpTime;
	DWORD m_bKilledByHeadshot;
	DWORD m_ArmorValue;
	DWORD m_unCurrentEquipmentValue;
	DWORD m_unRoundStartEquipmentValue;
	DWORD m_unFreezetimeEndEquipmentValue;
	DWORD m_nLastKillerIndex;
	DWORD m_bOldIsScoped;
	DWORD m_bHasDeathInfo;
	DWORD m_flDeathInfoTime;
	DWORD m_vecDeathInfoOrigin;
	DWORD m_grenadeParameterStashTime;
	DWORD m_bGrenadeParametersStashed;
	DWORD m_angStashedShootAngles;
	DWORD m_vecStashedGrenadeThrowPosition;
	DWORD m_vecStashedVelocity;
	DWORD m_angShootAngleHistory;
	DWORD m_vecThrowPositionHistory;
	DWORD m_vecVelocityHistory;
	DWORD m_PredictedDamageTags;
	DWORD m_nPrevHighestReceivedDamageTagTick;
	DWORD m_nHighestAppliedDamageTagTick;
	DWORD m_bShouldAutobuyDMWeapons;
	DWORD m_fImmuneToGunGameDamageTime;
	DWORD m_bGunGameImmunity;
	DWORD m_fImmuneToGunGameDamageTimeLast;
	DWORD m_fMolotovDamageTime;
	DWORD m_vecLastAliveLocalVelocity;
	DWORD m_fRenderingClipPlane;
	DWORD m_nLastClipPlaneSetupFrame;
	DWORD m_vecLastClipCameraPos;
	DWORD m_vecLastClipCameraForward;
	DWORD m_bClipHitStaticWorld;
	DWORD m_bCachedPlaneIsValid;
	DWORD m_pClippingWeapon;
	DWORD m_nPlayerInfernoBodyFx;
	DWORD m_angEyeAngles;
	DWORD m_arrOldEyeAnglesTimes;
	DWORD m_arrOldEyeAngles;
	DWORD m_angEyeAnglesVelocity;
	DWORD m_iIDEntIndex;
	DWORD m_delayTargetIDTimer;
	DWORD m_iTargetItemEntIdx;
	DWORD m_iOldIDEntIndex;
	DWORD m_holdTargetIDTimer;
} C_CSPlayerPawn;

inline struct CPulseCell_WaitForCursorsWithTagBaseOffsets {
	DWORD m_nCursorsAllowedToWait;
	DWORD m_WaitComplete;
} CPulseCell_WaitForCursorsWithTagBase;

inline struct C_HostageOffsets {
	DWORD m_entitySpottedState;
	DWORD m_leader;
	DWORD m_reuseTimer;
	DWORD m_vel;
	DWORD m_isRescued;
	DWORD m_jumpedThisFrame;
	DWORD m_nHostageState;
	DWORD m_bHandsHaveBeenCut;
	DWORD m_hHostageGrabber;
	DWORD m_fLastGrabTime;
	DWORD m_vecGrabbedPos;
	DWORD m_flRescueStartTime;
	DWORD m_flGrabSuccessTime;
	DWORD m_flDropStartTime;
	DWORD m_flDeadOrRescuedTime;
	DWORD m_blinkTimer;
	DWORD m_lookAt;
	DWORD m_lookAroundTimer;
	DWORD m_isInit;
	DWORD m_eyeAttachment;
	DWORD m_chestAttachment;
	DWORD m_pPredictionOwner;
	DWORD m_fNewestAlphaThinkTime;
} C_Hostage;

inline struct C_fogplayerparams_tOffsets {
	DWORD m_hCtrl;
	DWORD m_flTransitionTime;
	DWORD m_OldColor;
	DWORD m_flOldStart;
	DWORD m_flOldEnd;
	DWORD m_flOldMaxDensity;
	DWORD m_flOldHDRColorScale;
	DWORD m_flOldFarZ;
	DWORD m_NewColor;
	DWORD m_flNewStart;
	DWORD m_flNewEnd;
	DWORD m_flNewMaxDensity;
	DWORD m_flNewHDRColorScale;
	DWORD m_flNewFarZ;
} C_fogplayerparams_t;

inline struct CGameSceneNodeOffsets {
	DWORD m_nodeToWorld;
	DWORD m_pOwner;
	DWORD m_pParent;
	DWORD m_pChild;
	DWORD m_pNextSibling;
	DWORD m_hParent;
	DWORD m_vecOrigin;
	DWORD m_angRotation;
	DWORD m_flScale;
	DWORD m_vecAbsOrigin;
	DWORD m_angAbsRotation;
	DWORD m_flAbsScale;
	DWORD m_vecWrappedLocalOrigin;
	DWORD m_angWrappedLocalRotation;
	DWORD m_flWrappedScale;
	DWORD m_nParentAttachmentOrBone;
	DWORD m_bDebugAbsOriginChanges;
	DWORD m_bDormant;
	DWORD m_bForceParentToBeNetworked;
	DWORD m_bDirtyHierarchy;
	DWORD m_bDirtyBoneMergeInfo;
	DWORD m_bNetworkedPositionChanged;
	DWORD m_bNetworkedAnglesChanged;
	DWORD m_bNetworkedScaleChanged;
	DWORD m_bWillBeCallingPostDataUpdate;
	DWORD m_bBoneMergeFlex;
	DWORD m_nLatchAbsOrigin;
	DWORD m_bDirtyBoneMergeBoneToRoot;
	DWORD m_nHierarchicalDepth;
	DWORD m_nHierarchyType;
	DWORD m_nDoNotSetAnimTimeInInvalidatePhysicsCount;
	DWORD m_name;
	DWORD m_hierarchyAttachName;
	DWORD m_flZOffset;
	DWORD m_flClientLocalScale;
	DWORD m_vRenderOrigin;
} CGameSceneNode;

inline struct CPlayer_ObserverServicesOffsets {
	DWORD m_iObserverMode;
	DWORD m_hObserverTarget;
	DWORD m_iObserverLastMode;
	DWORD m_bForcedObserverMode;
	DWORD m_flObserverChaseDistance;
	DWORD m_flObserverChaseDistanceCalcTime;
} CPlayer_ObserverServices;

inline struct C_SoundAreaEntityBaseOffsets {
	DWORD m_bDisabled;
	DWORD m_bWasEnabled;
	DWORD m_iszSoundAreaType;
	DWORD m_vPos;
} C_SoundAreaEntityBase;

inline struct C_PlayerVisibilityOffsets {
	DWORD m_flVisibilityStrength;
	DWORD m_flFogDistanceMultiplier;
	DWORD m_flFogMaxDensityMultiplier;
	DWORD m_flFadeTime;
	DWORD m_bStartDisabled;
	DWORD m_bIsEnabled;
} C_PlayerVisibility;

inline struct CAttributeManager__cached_attribute_float_tOffsets {
	DWORD flIn;
	DWORD iAttribHook;
	DWORD flOut;
} CAttributeManager__cached_attribute_float_t;

inline struct C_BasePlayerWeaponOffsets {
	DWORD m_nNextPrimaryAttackTick;
	DWORD m_flNextPrimaryAttackTickRatio;
	DWORD m_nNextSecondaryAttackTick;
	DWORD m_flNextSecondaryAttackTickRatio;
	DWORD m_iClip1;
	DWORD m_iClip2;
	DWORD m_pReserveAmmo;
} C_BasePlayerWeapon;

inline struct CRagdollManagerOffsets {
	DWORD m_iCurrentMaxRagdollCount;
	DWORD m_iMaxRagdollCount;
	DWORD m_bSaveImportant;
	DWORD m_bCanTakeDamage;
} CRagdollManager;

inline struct C_EnvSkyOffsets {
	DWORD m_hSkyMaterial;
	DWORD m_hSkyMaterialLightingOnly;
	DWORD m_bStartDisabled;
	DWORD m_vTintColor;
	DWORD m_vTintColorLightingOnly;
	DWORD m_flBrightnessScale;
	DWORD m_nFogType;
	DWORD m_flFogMinStart;
	DWORD m_flFogMinEnd;
	DWORD m_flFogMaxStart;
	DWORD m_flFogMaxEnd;
	DWORD m_bEnabled;
} C_EnvSky;

inline struct CPulse_InvokeBindingOffsets {
	DWORD m_RegisterMap;
	DWORD m_FuncName;
	DWORD m_nCellIndex;
	DWORD m_nSrcChunk;
	DWORD m_nSrcInstruction;
} CPulse_InvokeBinding;

inline struct C_EnvWindControllerOffsets {
	DWORD m_EnvWindShared;
	DWORD m_fDirectionVariation;
	DWORD m_fSpeedVariation;
	DWORD m_fTurbulence;
	DWORD m_fVolumeHalfExtentXY;
	DWORD m_fVolumeHalfExtentZ;
	DWORD m_nVolumeResolutionXY;
	DWORD m_nVolumeResolutionZ;
	DWORD m_nClipmapLevels;
	DWORD m_bIsMaster;
	DWORD m_bFirstTime;
} C_EnvWindController;

inline struct C_GameRulesOffsets {
	DWORD __m_pChainEntity;
	DWORD m_nTotalPausedTicks;
	DWORD m_nPauseStartTick;
	DWORD m_bGamePaused;
} C_GameRules;

inline struct C_CSGO_MapPreviewCameraPathOffsets {
	DWORD m_flZFar;
	DWORD m_flZNear;
	DWORD m_bLoop;
	DWORD m_bVerticalFOV;
	DWORD m_bConstantSpeed;
	DWORD m_flDuration;
	DWORD m_flPathLength;
	DWORD m_flPathDuration;
	DWORD m_bDofEnabled;
	DWORD m_flDofNearBlurry;
	DWORD m_flDofNearCrisp;
	DWORD m_flDofFarCrisp;
	DWORD m_flDofFarBlurry;
	DWORD m_flDofTiltToGround;
} C_CSGO_MapPreviewCameraPath;

inline struct C_PointWorldTextOffsets {
	DWORD m_bForceRecreateNextUpdate;
	DWORD m_messageText;
	DWORD m_FontName;
	DWORD m_BackgroundMaterialName;
	DWORD m_bEnabled;
	DWORD m_bFullbright;
	DWORD m_flWorldUnitsPerPx;
	DWORD m_flFontSize;
	DWORD m_flDepthOffset;
	DWORD m_bDrawBackground;
	DWORD m_flBackgroundBorderWidth;
	DWORD m_flBackgroundBorderHeight;
	DWORD m_flBackgroundWorldToUV;
	DWORD m_Color;
	DWORD m_nJustifyHorizontal;
	DWORD m_nJustifyVertical;
	DWORD m_nReorientMode;
} C_PointWorldText;

inline struct C_RopeKeyframeOffsets {
	DWORD m_LinksTouchingSomething;
	DWORD m_nLinksTouchingSomething;
	DWORD m_bApplyWind;
	DWORD m_fPrevLockedPoints;
	DWORD m_iForcePointMoveCounter;
	DWORD m_bPrevEndPointPos;
	DWORD m_vPrevEndPointPos;
	DWORD m_flCurScroll;
	DWORD m_flScrollSpeed;
	DWORD m_RopeFlags;
	DWORD m_iRopeMaterialModelIndex;
	DWORD m_nSegments;
	DWORD m_hStartPoint;
	DWORD m_hEndPoint;
	DWORD m_iStartAttachment;
	DWORD m_iEndAttachment;
	DWORD m_Subdiv;
	DWORD m_RopeLength;
	DWORD m_Slack;
	DWORD m_TextureScale;
	DWORD m_fLockedPoints;
	DWORD m_nChangeCount;
	DWORD m_Width;
	DWORD m_PhysicsDelegate;
	DWORD m_hMaterial;
	DWORD m_TextureHeight;
	DWORD m_vecImpulse;
	DWORD m_vecPreviousImpulse;
	DWORD m_flCurrentGustTimer;
	DWORD m_flCurrentGustLifetime;
	DWORD m_flTimeToNextGust;
	DWORD m_vWindDir;
	DWORD m_vColorMod;
	DWORD m_vCachedEndPointAttachmentPos;
	DWORD m_vCachedEndPointAttachmentAngle;
	DWORD m_bConstrainBetweenEndpoints;
	DWORD m_bEndPointAttachmentPositionsDirty;
	DWORD m_bEndPointAttachmentAnglesDirty;
	DWORD m_bNewDataThisFrame;
	DWORD m_bPhysicsInitted;
} C_RopeKeyframe;

inline struct C_RopeKeyframe__CPhysicsDelegateOffsets {
	DWORD m_pKeyframe;
} C_RopeKeyframe__CPhysicsDelegate;

inline struct CInfoDynamicShadowHintOffsets {
	DWORD m_bDisabled;
	DWORD m_flRange;
	DWORD m_nImportance;
	DWORD m_nLightChoice;
	DWORD m_hLight;
} CInfoDynamicShadowHint;

inline struct CPulseCell_IntervalTimerOffsets {
	DWORD m_Completed;
	DWORD m_OnInterval;
} CPulseCell_IntervalTimer;

inline struct C_SoundEventOBBEntityOffsets {
	DWORD m_vMins;
	DWORD m_vMaxs;
} C_SoundEventOBBEntity;

inline struct CPulseCell_BaseLerpOffsets {
	DWORD m_WakeResume;
} CPulseCell_BaseLerp;

inline struct C_BasePropDoorOffsets {
	DWORD m_eDoorState;
	DWORD m_modelChanged;
	DWORD m_bLocked;
	DWORD m_bNoNPCs;
	DWORD m_closedPosition;
	DWORD m_closedAngles;
	DWORD m_hMaster;
	DWORD m_vWhereToSetLightingOrigin;
} C_BasePropDoor;

inline struct CNetworkedSequenceOperationOffsets {
	DWORD m_hSequence;
	DWORD m_flPrevCycle;
	DWORD m_flCycle;
	DWORD m_flWeight;
	DWORD m_bSequenceChangeNetworked;
	DWORD m_bDiscontinuity;
	DWORD m_flPrevCycleFromDiscontinuity;
	DWORD m_flPrevCycleForAnimEventDetection;
} CNetworkedSequenceOperation;

inline struct CEntityInstanceOffsets {
	DWORD m_iszPrivateVScripts;
	DWORD m_pEntity;
	DWORD m_CScriptComponent;
} CEntityInstance;

inline struct C_BaseModelEntityOffsets {
	DWORD m_CRenderComponent;
	DWORD m_CHitboxComponent;
	DWORD m_pDestructiblePartsSystemComponent;
	DWORD m_LastHitGroup;
	DWORD m_sLastDamageSourceName;
	DWORD m_vLastDamagePosition;
	DWORD m_bInitModelEffects;
	DWORD m_bIsStaticProp;
	DWORD m_nLastAddDecal;
	DWORD m_nDecalsAdded;
	DWORD m_iOldHealth;
	DWORD m_nRenderMode;
	DWORD m_nRenderFX;
	DWORD m_bAllowFadeInView;
	DWORD m_clrRender;
	DWORD m_vecRenderAttributes;
	DWORD m_bRenderToCubemaps;
	DWORD m_bNoInterpolate;
	DWORD m_Collision;
	DWORD m_Glow;
	DWORD m_flGlowBackfaceMult;
	DWORD m_fadeMinDist;
	DWORD m_fadeMaxDist;
	DWORD m_flFadeScale;
	DWORD m_flShadowStrength;
	DWORD m_nObjectCulling;
	DWORD m_nAddDecal;
	DWORD m_vDecalPosition;
	DWORD m_vDecalForwardAxis;
	DWORD m_nDecalMode;
	DWORD m_nRequiredDecalMode;
	DWORD m_ConfigEntitiesToPropagateMaterialDecalsTo;
	DWORD m_vecViewOffset;
	DWORD m_pClientAlphaProperty;
	DWORD m_ClientOverrideTint;
	DWORD m_bUseClientOverrideTint;
	DWORD m_bvDisabledHitGroups;
} C_BaseModelEntity;

inline struct CCSPlayer_BulletServicesOffsets {
	DWORD m_totalHitsOnServer;
} CCSPlayer_BulletServices;

inline struct C_EnvCombinedLightProbeVolumeOffsets {
	DWORD m_Entity_Color;
	DWORD m_Entity_flBrightness;
	DWORD m_Entity_hCubemapTexture;
	DWORD m_Entity_bCustomCubemapTexture;
	DWORD m_Entity_hLightProbeTexture_AmbientCube;
	DWORD m_Entity_hLightProbeTexture_SDF;
	DWORD m_Entity_hLightProbeTexture_SH2_DC;
	DWORD m_Entity_hLightProbeTexture_SH2_R;
	DWORD m_Entity_hLightProbeTexture_SH2_G;
	DWORD m_Entity_hLightProbeTexture_SH2_B;
	DWORD m_Entity_hLightProbeDirectLightIndicesTexture;
	DWORD m_Entity_hLightProbeDirectLightScalarsTexture;
	DWORD m_Entity_hLightProbeDirectLightShadowsTexture;
	DWORD m_Entity_vBoxMins;
	DWORD m_Entity_vBoxMaxs;
	DWORD m_Entity_bMoveable;
	DWORD m_Entity_nHandshake;
	DWORD m_Entity_nEnvCubeMapArrayIndex;
	DWORD m_Entity_nPriority;
	DWORD m_Entity_bStartDisabled;
	DWORD m_Entity_flEdgeFadeDist;
	DWORD m_Entity_vEdgeFadeDists;
	DWORD m_Entity_nLightProbeSizeX;
	DWORD m_Entity_nLightProbeSizeY;
	DWORD m_Entity_nLightProbeSizeZ;
	DWORD m_Entity_nLightProbeAtlasX;
	DWORD m_Entity_nLightProbeAtlasY;
	DWORD m_Entity_nLightProbeAtlasZ;
	DWORD m_Entity_bEnabled;
} C_EnvCombinedLightProbeVolume;

inline struct C_BaseEntityOffsets {
	DWORD m_CBodyComponent;
	DWORD m_NetworkTransmitComponent;
	DWORD m_nLastThinkTick;
	DWORD m_pGameSceneNode;
	DWORD m_pRenderComponent;
	DWORD m_pCollision;
	DWORD m_iMaxHealth;
	DWORD m_iHealth;
	DWORD m_flDamageAccumulator;
	DWORD m_lifeState;
	DWORD m_bTakesDamage;
	DWORD m_nTakeDamageFlags;
	DWORD m_nPlatformType;
	DWORD m_ubInterpolationFrame;
	DWORD m_hSceneObjectController;
	DWORD m_nNoInterpolationTick;
	DWORD m_nVisibilityNoInterpolationTick;
	DWORD m_flProxyRandomValue;
	DWORD m_iEFlags;
	DWORD m_nWaterType;
	DWORD m_bInterpolateEvenWithNoModel;
	DWORD m_bPredictionEligible;
	DWORD m_bApplyLayerMatchIDToModel;
	DWORD m_tokLayerMatchID;
	DWORD m_nSubclassID;
	DWORD m_nSimulationTick;
	DWORD m_iCurrentThinkContext;
	DWORD m_aThinkFunctions;
	DWORD m_bDisabledContextThinks;
	DWORD m_flAnimTime;
	DWORD m_flSimulationTime;
	DWORD m_nSceneObjectOverrideFlags;
	DWORD m_bHasSuccessfullyInterpolated;
	DWORD m_bHasAddedVarsToInterpolation;
	DWORD m_bRenderEvenWhenNotSuccessfullyInterpolated;
	DWORD m_nInterpolationLatchDirtyFlags;
	DWORD m_ListEntry;
	DWORD m_flCreateTime;
	DWORD m_flSpeed;
	DWORD m_EntClientFlags;
	DWORD m_bClientSideRagdoll;
	DWORD m_iTeamNum;
	DWORD m_spawnflags;
	DWORD m_nNextThinkTick;
	DWORD m_fFlags;
	DWORD m_vecAbsVelocity;
	DWORD m_vecServerVelocity;
	DWORD m_vecVelocity;
	DWORD m_vecBaseVelocity;
	DWORD m_hEffectEntity;
	DWORD m_hOwnerEntity;
	DWORD m_MoveCollide;
	DWORD m_MoveType;
	DWORD m_nActualMoveType;
	DWORD m_flWaterLevel;
	DWORD m_fEffects;
	DWORD m_hGroundEntity;
	DWORD m_nGroundBodyIndex;
	DWORD m_flFriction;
	DWORD m_flElasticity;
	DWORD m_flGravityScale;
	DWORD m_flTimeScale;
	DWORD m_bAnimatedEveryTick;
	DWORD m_bGravityDisabled;
	DWORD m_flNavIgnoreUntilTime;
	DWORD m_hThink;
	DWORD m_fBBoxVisFlags;
	DWORD m_flActualGravityScale;
	DWORD m_bGravityActuallyDisabled;
	DWORD m_bPredictable;
	DWORD m_bRenderWithViewModels;
	DWORD m_nFirstPredictableCommand;
	DWORD m_nLastPredictableCommand;
	DWORD m_hOldMoveParent;
	DWORD m_Particles;
	DWORD m_vecAngVelocity;
	DWORD m_DataChangeEventRef;
	DWORD m_dependencies;
	DWORD m_nCreationTick;
	DWORD m_bAnimTimeChanged;
	DWORD m_bSimulationTimeChanged;
	DWORD m_sUniqueHammerID;
	DWORD m_nBloodType;
} C_BaseEntity;

inline struct ActiveModelConfig_tOffsets {
	DWORD m_Handle;
	DWORD m_Name;
	DWORD m_AssociatedEntities;
	DWORD m_AssociatedEntityNames;
} ActiveModelConfig_t;

inline struct CPulseCell_Value_CurveOffsets {
	DWORD m_Curve;
} CPulseCell_Value_Curve;

inline struct C_BasePlayerPawnOffsets {
	DWORD m_pWeaponServices;
	DWORD m_pItemServices;
	DWORD m_pAutoaimServices;
	DWORD m_pObserverServices;
	DWORD m_pWaterServices;
	DWORD m_pUseServices;
	DWORD m_pFlashlightServices;
	DWORD m_pCameraServices;
	DWORD m_pMovementServices;
	DWORD m_ServerViewAngleChanges;
	DWORD v_angle;
	DWORD v_anglePrevious;
	DWORD m_iHideHUD;
	DWORD m_skybox3d;
	DWORD m_flDeathTime;
	DWORD m_vecPredictionError;
	DWORD m_flPredictionErrorTime;
	DWORD m_vecLastCameraSetupLocalOrigin;
	DWORD m_flLastCameraSetupTime;
	DWORD m_flFOVSensitivityAdjust;
	DWORD m_flMouseSensitivity;
	DWORD m_vOldOrigin;
	DWORD m_flOldSimulationTime;
	DWORD m_nLastExecutedCommandNumber;
	DWORD m_nLastExecutedCommandTick;
	DWORD m_hController;
	DWORD m_hDefaultController;
	DWORD m_bIsSwappingToPredictableController;
} C_BasePlayerPawn;

inline struct C_ChickenOffsets {
	DWORD m_hHolidayHatAddon;
	DWORD m_jumpedThisFrame;
	DWORD m_leader;
	DWORD m_AttributeManager;
	DWORD m_bAttributesInitialized;
	DWORD m_hWaterWakeParticles;
	DWORD m_bIsPreviewModel;
} C_Chicken;

inline struct C_StattrakModuleOffsets {
	DWORD m_bKnife;
} C_StattrakModule;

inline struct CEnvSoundscapeProxyOffsets {
	DWORD m_MainSoundscapeName;
} CEnvSoundscapeProxy;

inline struct C_SoundEventEntityOffsets {
	DWORD m_bStartOnSpawn;
	DWORD m_bToLocalPlayer;
	DWORD m_bStopOnNew;
	DWORD m_bSaveRestore;
	DWORD m_bSavedIsPlaying;
	DWORD m_flSavedElapsedTime;
	DWORD m_iszSourceEntityName;
	DWORD m_iszAttachmentName;
	DWORD m_onGUIDChanged;
	DWORD m_onSoundFinished;
	DWORD m_flClientCullRadius;
	DWORD m_iszSoundName;
	DWORD m_hSource;
	DWORD m_nEntityIndexSelection;
	DWORD m_bClientSideOnly;
} C_SoundEventEntity;

inline struct CPulseCell_Inflow_EventHandlerOffsets {
	DWORD m_EventName;
} CPulseCell_Inflow_EventHandler;

inline struct CBombTargetOffsets {
	DWORD m_bBombPlantedHere;
	DWORD m_OnBombExplode;
	DWORD m_OnBombPlanted;
	DWORD m_OnBombDefused;
	DWORD m_bIsBombSiteB;
	DWORD m_bIsHeistBombTarget;
	DWORD m_szMountTarget;
	DWORD m_hInstructorHint;
	DWORD m_nBombSiteDesignation;
} CBombTarget;

inline struct C_KnifeOffsets {
	DWORD m_bFirstAttack;
} C_Knife;

inline struct CSkeletonInstanceOffsets {
	DWORD m_modelState;
	DWORD m_bIsAnimationEnabled;
	DWORD m_bUseParentRenderBounds;
	DWORD m_bDisableSolidCollisionsForHierarchy;
	DWORD m_bDirtyMotionType;
	DWORD m_bIsGeneratingLatchedParentSpaceState;
	DWORD m_materialGroup;
	DWORD m_nHitboxSet;
} CSkeletonInstance;

inline struct C_ItemDogtagsOffsets {
	DWORD m_OwningPlayer;
	DWORD m_KillingPlayer;
} C_ItemDogtags;

inline struct CPulseCell_Outflow_CycleShuffled__InstanceState_tOffsets {
	DWORD m_Shuffle;
	DWORD m_nNextShuffle;
} CPulseCell_Outflow_CycleShuffled__InstanceState_t;

inline struct CPulseCell_BaseLerp__CursorState_tOffsets {
	DWORD m_StartTime;
	DWORD m_EndTime;
} CPulseCell_BaseLerp__CursorState_t;

inline struct C_BaseClientUIEntityOffsets {
	DWORD m_bEnabled;
	DWORD m_DialogXMLName;
	DWORD m_PanelClassName;
	DWORD m_PanelID;
} C_BaseClientUIEntity;

inline struct CPulseCell_WaitForCursorsWithTagBase__CursorState_tOffsets {
	DWORD m_TagName;
} CPulseCell_WaitForCursorsWithTagBase__CursorState_t;

inline struct C_MolotovProjectileOffsets {
	DWORD m_bIsIncGrenade;
} C_MolotovProjectile;

inline struct CBasePropOffsets {
	DWORD m_bModelOverrodeBlockLOS;
	DWORD m_iShapeType;
	DWORD m_bConformToCollisionBounds;
	DWORD m_mPreferredCatchTransform;
} CBaseProp;

inline struct CInfoOffscreenPanoramaTextureOffsets {
	DWORD m_bDisabled;
	DWORD m_nResolutionX;
	DWORD m_nResolutionY;
	DWORD m_szLayoutFileName;
	DWORD m_RenderAttrName;
	DWORD m_TargetEntities;
	DWORD m_nTargetChangeCount;
	DWORD m_vecCSSClasses;
	DWORD m_bCheckCSSClasses;
	DWORD m_szTargetsName;
	DWORD m_AdditionalTargetEntities;
} CInfoOffscreenPanoramaTexture;

inline struct CCSWeaponBaseVDataOffsets {
	DWORD m_WeaponType;
	DWORD m_WeaponCategory;
	DWORD m_szModel_AG2;
	DWORD m_szAnimSkeleton;
	DWORD m_vecMuzzlePos0;
	DWORD m_vecMuzzlePos1;
	DWORD m_szTracerParticle;
	DWORD m_GearSlot;
	DWORD m_GearSlotPosition;
	DWORD m_DefaultLoadoutSlot;
	DWORD m_nPrice;
	DWORD m_nKillAward;
	DWORD m_nPrimaryReserveAmmoMax;
	DWORD m_nSecondaryReserveAmmoMax;
	DWORD m_bMeleeWeapon;
	DWORD m_bHasBurstMode;
	DWORD m_bIsRevolver;
	DWORD m_bCannotShootUnderwater;
	DWORD m_szName;
	DWORD m_eSilencerType;
	DWORD m_nCrosshairMinDistance;
	DWORD m_nCrosshairDeltaDistance;
	DWORD m_bIsFullAuto;
	DWORD m_nNumBullets;
	DWORD m_bReloadsSingleShells;
	DWORD m_flCycleTime;
	DWORD m_flMaxSpeed;
	DWORD m_flSpread;
	DWORD m_flInaccuracyCrouch;
	DWORD m_flInaccuracyStand;
	DWORD m_flInaccuracyJump;
	DWORD m_flInaccuracyLand;
	DWORD m_flInaccuracyLadder;
	DWORD m_flInaccuracyFire;
	DWORD m_flInaccuracyMove;
	DWORD m_flRecoilAngle;
	DWORD m_flRecoilAngleVariance;
	DWORD m_flRecoilMagnitude;
	DWORD m_flRecoilMagnitudeVariance;
	DWORD m_nTracerFrequency;
	DWORD m_flInaccuracyJumpInitial;
	DWORD m_flInaccuracyJumpApex;
	DWORD m_flInaccuracyReload;
	DWORD m_flDeployDuration;
	DWORD m_flDisallowAttackAfterReloadStartDuration;
	DWORD m_nBurstShotCount;
	DWORD m_bAllowBurstHolster;
	DWORD m_nRecoilSeed;
	DWORD m_nSpreadSeed;
	DWORD m_flAttackMovespeedFactor;
	DWORD m_flInaccuracyPitchShift;
	DWORD m_flInaccuracyAltSoundThreshold;
	DWORD m_szUseRadioSubtitle;
	DWORD m_bUnzoomsAfterShot;
	DWORD m_bHideViewModelWhenZoomed;
	DWORD m_nZoomLevels;
	DWORD m_nZoomFOV1;
	DWORD m_nZoomFOV2;
	DWORD m_flZoomTime0;
	DWORD m_flZoomTime1;
	DWORD m_flZoomTime2;
	DWORD m_flIronSightPullUpSpeed;
	DWORD m_flIronSightPutDownSpeed;
	DWORD m_flIronSightFOV;
	DWORD m_flIronSightPivotForward;
	DWORD m_flIronSightLooseness;
	DWORD m_nDamage;
	DWORD m_flHeadshotMultiplier;
	DWORD m_flArmorRatio;
	DWORD m_flPenetration;
	DWORD m_flRange;
	DWORD m_flRangeModifier;
	DWORD m_flFlinchVelocityModifierLarge;
	DWORD m_flFlinchVelocityModifierSmall;
	DWORD m_flRecoveryTimeCrouch;
	DWORD m_flRecoveryTimeStand;
	DWORD m_flRecoveryTimeCrouchFinal;
	DWORD m_flRecoveryTimeStandFinal;
	DWORD m_nRecoveryTransitionStartBullet;
	DWORD m_nRecoveryTransitionEndBullet;
	DWORD m_flThrowVelocity;
	DWORD m_vSmokeColor;
	DWORD m_szAnimClass;
} CCSWeaponBaseVData;

inline struct CAttributeManagerOffsets {
	DWORD m_Providers;
	DWORD m_iReapplyProvisionParity;
	DWORD m_hOuter;
	DWORD m_bPreventLoopback;
	DWORD m_ProviderType;
	DWORD m_CachedResults;
} CAttributeManager;

inline struct CPlayer_CameraServicesOffsets {
	DWORD m_vecCsViewPunchAngle;
	DWORD m_nCsViewPunchAngleTick;
	DWORD m_flCsViewPunchAngleTickRatio;
	DWORD m_PlayerFog;
	DWORD m_hColorCorrectionCtrl;
	DWORD m_hViewEntity;
	DWORD m_hTonemapController;
	DWORD m_audio;
	DWORD m_PostProcessingVolumes;
	DWORD m_flOldPlayerZ;
	DWORD m_flOldPlayerViewOffsetZ;
	DWORD m_CurrentFog;
	DWORD m_hOldFogController;
	DWORD m_bOverrideFogColor;
	DWORD m_OverrideFogColor;
	DWORD m_bOverrideFogStartEnd;
	DWORD m_fOverrideFogStart;
	DWORD m_fOverrideFogEnd;
	DWORD m_hActivePostProcessingVolume;
	DWORD m_angDemoViewAngles;
	DWORD m_hTriggerSoundscapeList;
} CPlayer_CameraServices;

inline struct CPulseCell_TimelineOffsets {
	DWORD m_TimelineEvents;
	DWORD m_bWaitForChildOutflows;
	DWORD m_OnFinished;
	DWORD m_OnCanceled;
} CPulseCell_Timeline;

inline struct CPulseCell_Inflow_EntOutputHandlerOffsets {
	DWORD m_SourceEntity;
	DWORD m_SourceOutput;
	DWORD m_ExpectedParamType;
} CPulseCell_Inflow_EntOutputHandler;

inline struct C_BaseCSGrenadeOffsets {
	DWORD m_bClientPredictDelete;
	DWORD m_bRedraw;
	DWORD m_bIsHeldByPlayer;
	DWORD m_bPinPulled;
	DWORD m_bJumpThrow;
	DWORD m_bThrowAnimating;
	DWORD m_fThrowTime;
	DWORD m_flThrowStrength;
	DWORD m_fDropTime;
	DWORD m_fPinPullTime;
	DWORD m_bJustPulledPin;
	DWORD m_nNextHoldTick;
	DWORD m_flNextHoldFrac;
	DWORD m_hSwitchToWeaponAfterThrow;
} C_BaseCSGrenade;

inline struct CFilterAttributeIntOffsets {
	DWORD m_sAttributeName;
} CFilterAttributeInt;

inline struct CPointTemplateOffsets {
	DWORD m_iszWorldName;
	DWORD m_iszSource2EntityLumpName;
	DWORD m_iszEntityFilterName;
	DWORD m_flTimeoutInterval;
	DWORD m_bAsynchronouslySpawnEntities;
	DWORD m_clientOnlyEntityBehavior;
	DWORD m_ownerSpawnGroupType;
	DWORD m_createdSpawnGroupHandles;
	DWORD m_SpawnedEntityHandles;
	DWORD m_ScriptSpawnCallback;
	DWORD m_ScriptCallbackScope;
} CPointTemplate;

inline struct CCSPlayerControllerOffsets {
	DWORD m_pInGameMoneyServices;
	DWORD m_pInventoryServices;
	DWORD m_pActionTrackingServices;
	DWORD m_pDamageServices;
	DWORD m_iPing;
	DWORD m_bHasCommunicationAbuseMute;
	DWORD m_uiCommunicationMuteFlags;
	DWORD m_szCrosshairCodes;
	DWORD m_iPendingTeamNum;
	DWORD m_flForceTeamTime;
	DWORD m_iCompTeammateColor;
	DWORD m_bEverPlayedOnTeam;
	DWORD m_flPreviousForceJoinTeamTime;
	DWORD m_szClan;
	DWORD m_sSanitizedPlayerName;
	DWORD m_iCoachingTeam;
	DWORD m_nPlayerDominated;
	DWORD m_nPlayerDominatingMe;
	DWORD m_iCompetitiveRanking;
	DWORD m_iCompetitiveWins;
	DWORD m_iCompetitiveRankType;
	DWORD m_iCompetitiveRankingPredicted_Win;
	DWORD m_iCompetitiveRankingPredicted_Loss;
	DWORD m_iCompetitiveRankingPredicted_Tie;
	DWORD m_nEndMatchNextMapVote;
	DWORD m_unActiveQuestId;
	DWORD m_rtActiveMissionPeriod;
	DWORD m_nQuestProgressReason;
	DWORD m_unPlayerTvControlFlags;
	DWORD m_iDraftIndex;
	DWORD m_msQueuedModeDisconnectionTimestamp;
	DWORD m_uiAbandonRecordedReason;
	DWORD m_eNetworkDisconnectionReason;
	DWORD m_bCannotBeKicked;
	DWORD m_bEverFullyConnected;
	DWORD m_bAbandonAllowsSurrender;
	DWORD m_bAbandonOffersInstantSurrender;
	DWORD m_bDisconnection1MinWarningPrinted;
	DWORD m_bScoreReported;
	DWORD m_nDisconnectionTick;
	DWORD m_bControllingBot;
	DWORD m_bHasControlledBotThisRound;
	DWORD m_bHasBeenControlledByPlayerThisRound;
	DWORD m_nBotsControlledThisRound;
	DWORD m_bCanControlObservedBot;
	DWORD m_hPlayerPawn;
	DWORD m_hObserverPawn;
	DWORD m_bPawnIsAlive;
	DWORD m_iPawnHealth;
	DWORD m_iPawnArmor;
	DWORD m_bPawnHasDefuser;
	DWORD m_bPawnHasHelmet;
	DWORD m_nPawnCharacterDefIndex;
	DWORD m_iPawnLifetimeStart;
	DWORD m_iPawnLifetimeEnd;
	DWORD m_iPawnBotDifficulty;
	DWORD m_hOriginalControllerOfCurrentPawn;
	DWORD m_iScore;
	DWORD m_recentKillQueue;
	DWORD m_nFirstKill;
	DWORD m_nKillCount;
	DWORD m_bMvpNoMusic;
	DWORD m_eMvpReason;
	DWORD m_iMusicKitID;
	DWORD m_iMusicKitMVPs;
	DWORD m_iMVPs;
	DWORD m_bIsPlayerNameDirty;
	DWORD m_bFireBulletsSeedSynchronized;
	DWORD m_bAttemptedToGetColor;
	DWORD m_iTeammatePreferredColor;
	DWORD m_bTeamChanged;
	DWORD m_bInSwitchTeam;
	DWORD m_bHasSeenJoinGame;
	DWORD m_bJustBecameSpectator;
	DWORD m_bSwitchTeamsOnNextRoundReset;
	DWORD m_bRemoveAllItemsOnNextRoundReset;
	DWORD m_flLastJoinTeamTime;
	DWORD m_DesiredObserverMode;
	DWORD m_hDesiredObserverTarget;
	DWORD m_iRoundScore;
	DWORD m_iRoundsWon;
	DWORD m_nUpdateCounter;
	DWORD m_flSmoothedPing;
	DWORD m_lastHeldVoteTimer;
	DWORD m_bShowHints;
	DWORD m_iNextTimeCheck;
	DWORD m_bJustDidTeamKill;
	DWORD m_bPunishForTeamKill;
	DWORD m_bGaveTeamDamageWarning;
	DWORD m_bGaveTeamDamageWarningThisRound;
	DWORD m_dblLastReceivedPacketPlatFloatTime;
	DWORD m_LastTeamDamageWarningTime;
	DWORD m_LastTimePlayerWasDisconnectedForPawnsRemove;
	DWORD m_nSuspiciousHitCount;
	DWORD m_nNonSuspiciousHitStreak;
} CCSPlayerController;

inline struct C_CSGO_PreviewModelOffsets {
	DWORD m_defaultAnim;
	DWORD m_nDefaultAnimLoopMode;
	DWORD m_flInitialModelScale;
	DWORD m_sInitialWeaponState;
} C_CSGO_PreviewModel;

inline struct CPulseCell_Outflow_CycleOrdered__InstanceState_tOffsets {
	DWORD m_nNextIndex;
} CPulseCell_Outflow_CycleOrdered__InstanceState_t;

inline struct C_SoundEventAABBEntityOffsets {
	DWORD m_vMins;
	DWORD m_vMaxs;
} C_SoundEventAABBEntity;

inline struct CCSPlayer_MovementServicesOffsets {
	DWORD m_vecLadderNormal;
	DWORD m_nLadderSurfacePropIndex;
	DWORD m_flDuckAmount;
	DWORD m_flDuckSpeed;
	DWORD m_bDuckOverride;
	DWORD m_bDesiresDuck;
	DWORD m_flDuckOffset;
	DWORD m_nDuckTimeMsecs;
	DWORD m_nDuckJumpTimeMsecs;
	DWORD m_nJumpTimeMsecs;
	DWORD m_flLastDuckTime;
	DWORD m_vecLastPositionAtFullCrouchSpeed;
	DWORD m_duckUntilOnGround;
	DWORD m_bHasWalkMovedSinceLastJump;
	DWORD m_bInStuckTest;
	DWORD m_nTraceCount;
	DWORD m_StuckLast;
	DWORD m_bSpeedCropped;
	DWORD m_nOldWaterLevel;
	DWORD m_flWaterEntryTime;
	DWORD m_vecForward;
	DWORD m_vecLeft;
	DWORD m_vecUp;
	DWORD m_nGameCodeHasMovedPlayerAfterCommand;
	DWORD m_bOldJumpPressed;
	DWORD m_flJumpPressedTime;
	DWORD m_fStashGrenadeParameterWhen;
	DWORD m_nButtonDownMaskPrev;
	DWORD m_flOffsetTickCompleteTime;
	DWORD m_flOffsetTickStashedSpeed;
	DWORD m_flStamina;
	DWORD m_flHeightAtJumpStart;
	DWORD m_flMaxJumpHeightThisJump;
	DWORD m_flMaxJumpHeightLastJump;
	DWORD m_flStaminaAtJumpStart;
	DWORD m_flAccumulatedJumpError;
	DWORD m_flTicksSinceLastSurfingDetected;
	DWORD m_bWasSurfing;
	DWORD m_vecInputRotated;
	DWORD m_bJumpApexPending;
	DWORD m_bMadeFootstepNoise;
	DWORD m_iFootsteps;
} CCSPlayer_MovementServices;

inline struct SellbackPurchaseEntry_tOffsets {
	DWORD m_unDefIdx;
	DWORD m_nCost;
	DWORD m_nPrevArmor;
	DWORD m_bPrevHelmet;
	DWORD m_hItem;
} SellbackPurchaseEntry_t;

inline struct C_WeaponBaseItemOffsets {
	DWORD m_bSequenceInProgress;
	DWORD m_bRedraw;
} C_WeaponBaseItem;

inline struct PhysicsRagdollPose_tOffsets {
	DWORD m_Transforms;
	DWORD m_hOwner;
	DWORD m_bSetFromDebugHistory;
} PhysicsRagdollPose_t;

inline struct CPropDataComponentOffsets {
	DWORD m_flDmgModBullet;
	DWORD m_flDmgModClub;
	DWORD m_flDmgModExplosive;
	DWORD m_flDmgModFire;
	DWORD m_iszPhysicsDamageTableName;
	DWORD m_iszBasePropData;
	DWORD m_nInteractions;
	DWORD m_bSpawnMotionDisabled;
	DWORD m_nDisableTakePhysicsDamageSpawnFlag;
	DWORD m_nMotionDisabledSpawnFlag;
} CPropDataComponent;

inline struct CPulseCell_LimitCount__InstanceState_tOffsets {
	DWORD m_nCurrentCount;
} CPulseCell_LimitCount__InstanceState_t;

inline struct C_WeaponCZ75aOffsets {
	DWORD m_bMagazineRemoved;
} C_WeaponCZ75a;

inline struct C_DynamicLightOffsets {
	DWORD m_Flags;
	DWORD m_LightStyle;
	DWORD m_Radius;
	DWORD m_Exponent;
	DWORD m_InnerAngle;
	DWORD m_OuterAngle;
	DWORD m_SpotRadius;
} C_DynamicLight;

inline struct EngineCountdownTimerOffsets {
	DWORD m_duration;
	DWORD m_timestamp;
	DWORD m_timescale;
} EngineCountdownTimer;

inline struct C_SoundEventSphereEntityOffsets {
	DWORD m_flRadius;
} C_SoundEventSphereEntity;

inline struct CCSPlayerController_DamageServicesOffsets {
	DWORD m_nSendUpdate;
	DWORD m_DamageList;
} CCSPlayerController_DamageServices;

inline struct C_InfernoOffsets {
	DWORD m_nfxFireDamageEffect;
	DWORD m_hInfernoPointsSnapshot;
	DWORD m_hInfernoFillerPointsSnapshot;
	DWORD m_hInfernoOutlinePointsSnapshot;
	DWORD m_hInfernoClimbingOutlinePointsSnapshot;
	DWORD m_hInfernoDecalsSnapshot;
	DWORD m_firePositions;
	DWORD m_fireParentPositions;
	DWORD m_bFireIsBurning;
	DWORD m_BurnNormal;
	DWORD m_fireCount;
	DWORD m_nInfernoType;
	DWORD m_nFireLifetime;
	DWORD m_bInPostEffectTime;
	DWORD m_lastFireCount;
	DWORD m_nFireEffectTickBegin;
	DWORD m_drawableCount;
	DWORD m_blosCheck;
	DWORD m_nlosperiod;
	DWORD m_maxFireHalfWidth;
	DWORD m_maxFireHeight;
	DWORD m_minBounds;
	DWORD m_maxBounds;
	DWORD m_flLastGrassBurnThink;
} C_Inferno;

inline struct CPointOrientOffsets {
	DWORD m_iszSpawnTargetName;
	DWORD m_hTarget;
	DWORD m_bActive;
	DWORD m_nGoalDirection;
	DWORD m_nConstraint;
	DWORD m_flMaxTurnRate;
	DWORD m_flLastGameTime;
} CPointOrient;

inline struct C_GlobalLightOffsets {
	DWORD m_WindClothForceHandle;
} C_GlobalLight;

inline struct C_EnvWindClientsideOffsets {
	DWORD m_EnvWindShared;
} C_EnvWindClientside;

inline struct sky3dparams_tOffsets {
	DWORD scale;
	DWORD origin;
	DWORD bClip3DSkyBoxNearToWorldFar;
	DWORD flClip3DSkyBoxNearToWorldFarOffset;
	DWORD fog;
	DWORD m_nWorldGroupID;
} sky3dparams_t;

inline struct CDestructiblePartsComponentOffsets {
	DWORD __m_pChainEntity;
	DWORD m_vecDamageTakenByHitGroup;
	DWORD m_hOwner;
	DWORD m_nLastHitDamageLevel;
} CDestructiblePartsComponent;

inline struct C_EnvWindOffsets {
	DWORD m_EnvWindShared;
} C_EnvWind;

inline struct CCSPlayerController_ActionTrackingServicesOffsets {
	DWORD m_perRoundStats;
	DWORD m_matchStats;
	DWORD m_iNumRoundKills;
	DWORD m_iNumRoundKillsHeadshots;
	DWORD m_flTotalRoundDamageDealt;
} CCSPlayerController_ActionTrackingServices;

inline struct CBodyComponentBaseAnimGraphOffsets {
	DWORD m_animationController;
} CBodyComponentBaseAnimGraph;

inline struct PulseNodeDynamicOutflows_tOffsets {
	DWORD m_Outflows;
} PulseNodeDynamicOutflows_t;

inline struct C_TriggerBuoyancyOffsets {
	DWORD m_BuoyancyHelper;
	DWORD m_flFluidDensity;
} C_TriggerBuoyancy;

inline struct CPlayer_MovementServices_HumanoidOffsets {
	DWORD m_flStepSoundTime;
	DWORD m_flFallVelocity;
	DWORD m_bInCrouch;
	DWORD m_nCrouchState;
	DWORD m_flCrouchTransitionStartTime;
	DWORD m_bDucked;
	DWORD m_bDucking;
	DWORD m_bInDuckJump;
	DWORD m_groundNormal;
	DWORD m_flSurfaceFriction;
	DWORD m_surfaceProps;
	DWORD m_nStepside;
	DWORD m_vecSmoothedVelocity;
} CPlayer_MovementServices_Humanoid;

inline struct CPulseCell_IsRequirementValid__Criteria_tOffsets {
	DWORD m_bIsValid;
} CPulseCell_IsRequirementValid__Criteria_t;

inline struct C_PhysPropClientsideOffsets {
	DWORD m_flTouchDelta;
	DWORD m_fDeathTime;
	DWORD m_vecDamagePosition;
	DWORD m_vecDamageDirection;
	DWORD m_nDamageType;
} C_PhysPropClientside;

inline struct C_BaseDoorOffsets {
	DWORD m_bIsUsable;
} C_BaseDoor;

inline struct CSMatchStats_tOffsets {
	DWORD m_iEnemy5Ks;
	DWORD m_iEnemy4Ks;
	DWORD m_iEnemy3Ks;
	DWORD m_iEnemyKnifeKills;
	DWORD m_iEnemyTaserKills;
	DWORD m_iEnemy2Ks;
	DWORD m_iUtility_Count;
	DWORD m_iUtility_Successes;
	DWORD m_iUtility_Enemies;
	DWORD m_iFlash_Count;
	DWORD m_iFlash_Successes;
	DWORD m_flHealthPointsRemovedTotal;
	DWORD m_flHealthPointsDealtTotal;
	DWORD m_nShotsFiredTotal;
	DWORD m_nShotsOnTargetTotal;
	DWORD m_i1v1Count;
	DWORD m_i1v1Wins;
	DWORD m_i1v2Count;
	DWORD m_i1v2Wins;
	DWORD m_iEntryCount;
	DWORD m_iEntryWins;
} CSMatchStats_t;

inline struct EntityRenderAttribute_tOffsets {
	DWORD m_ID;
	DWORD m_Values;
} EntityRenderAttribute_t;

inline struct CPulseCell_Inflow_ObservableVariableListenerOffsets {
	DWORD m_nBlackboardReference;
	DWORD m_bSelfReference;
} CPulseCell_Inflow_ObservableVariableListener;

inline struct CModelStateOffsets {
	DWORD m_hModel;
	DWORD m_ModelName;
	DWORD m_bClientClothCreationSuppressed;
	DWORD m_MeshGroupMask;
	DWORD m_nBodyGroupChoices;
	DWORD m_nIdealMotionType;
	DWORD m_nForceLOD;
	DWORD m_nClothUpdateFlags;
} CModelState;

inline struct CPulseCell_LerpCameraSettings__CursorState_tOffsets {
	DWORD m_hCamera;
	DWORD m_OverlaidStart;
	DWORD m_OverlaidEnd;
} CPulseCell_LerpCameraSettings__CursorState_t;

inline struct CPulseCell_Outflow_CycleOrderedOffsets {
	DWORD m_Outputs;
} CPulseCell_Outflow_CycleOrdered;

inline struct C_CSWeaponBaseGunOffsets {
	DWORD m_zoomLevel;
	DWORD m_iBurstShotsRemaining;
	DWORD m_iSilencerBodygroup;
	DWORD m_silencedModelIndex;
	DWORD m_inPrecache;
	DWORD m_bNeedsBoltAction;
	DWORD m_nRevolverCylinderIdx;
} C_CSWeaponBaseGun;

inline struct C_CSGameRulesProxyOffsets {
	DWORD m_pGameRules;
} C_CSGameRulesProxy;

inline struct CCollisionPropertyOffsets {
	DWORD m_collisionAttribute;
	DWORD m_vecMins;
	DWORD m_vecMaxs;
	DWORD m_usSolidFlags;
	DWORD m_nSolidType;
	DWORD m_triggerBloat;
	DWORD m_nSurroundType;
	DWORD m_CollisionGroup;
	DWORD m_nEnablePhysics;
	DWORD m_flBoundingRadius;
	DWORD m_vecSpecifiedSurroundingMins;
	DWORD m_vecSpecifiedSurroundingMaxs;
	DWORD m_vecSurroundingMaxs;
	DWORD m_vecSurroundingMins;
	DWORD m_vCapsuleCenter1;
	DWORD m_vCapsuleCenter2;
	DWORD m_flCapsuleRadius;
} CCollisionProperty;

inline struct C_ShatterGlassShardPhysicsOffsets {
	DWORD m_ShardDesc;
} C_ShatterGlassShardPhysics;

inline struct CFilterMassGreaterOffsets {
	DWORD m_fFilterMass;
} CFilterMassGreater;

inline struct C_EntityDissolveOffsets {
	DWORD m_flStartTime;
	DWORD m_flFadeInStart;
	DWORD m_flFadeInLength;
	DWORD m_flFadeOutModelStart;
	DWORD m_flFadeOutModelLength;
	DWORD m_flFadeOutStart;
	DWORD m_flFadeOutLength;
	DWORD m_flNextSparkTime;
	DWORD m_nDissolveType;
	DWORD m_vDissolverOrigin;
	DWORD m_nMagnitude;
	DWORD m_bCoreExplode;
	DWORD m_bLinkedToServerEnt;
} C_EntityDissolve;

inline struct CCSGameModeRules_ArmsRaceOffsets {
	DWORD m_WeaponSequence;
} CCSGameModeRules_ArmsRace;

inline struct C_FuncMonitorOffsets {
	DWORD m_targetCamera;
	DWORD m_nResolutionEnum;
	DWORD m_bRenderShadows;
	DWORD m_bUseUniqueColorTarget;
	DWORD m_brushModelName;
	DWORD m_hTargetCamera;
	DWORD m_bEnabled;
	DWORD m_bDraw3DSkybox;
} C_FuncMonitor;

inline struct C_ClientRagdollOffsets {
	DWORD m_bFadeOut;
	DWORD m_bImportant;
	DWORD m_flEffectTime;
	DWORD m_gibDespawnTime;
	DWORD m_iCurrentFriction;
	DWORD m_iMinFriction;
	DWORD m_iMaxFriction;
	DWORD m_iFrictionAnimState;
	DWORD m_bReleaseRagdoll;
	DWORD m_iEyeAttachment;
	DWORD m_bFadingOut;
	DWORD m_flScaleEnd;
	DWORD m_flScaleTimeStart;
	DWORD m_flScaleTimeEnd;
} C_ClientRagdoll;

inline struct PulseSelectorOutflowList_tOffsets {
	DWORD m_Outflows;
} PulseSelectorOutflowList_t;

inline struct CPulseCell_PlaySequence__CursorState_tOffsets {
	DWORD m_hTarget;
} CPulseCell_PlaySequence__CursorState_t;

inline struct CBodyComponentSkeletonInstanceOffsets {
	DWORD m_skeletonInstance;
} CBodyComponentSkeletonInstance;

inline struct C_CSGO_TeamPreviewCharacterPositionOffsets {
	DWORD m_nVariant;
	DWORD m_nRandom;
	DWORD m_nOrdinal;
	DWORD m_sWeaponName;
	DWORD m_xuid;
	DWORD m_agentItem;
	DWORD m_glovesItem;
	DWORD m_weaponItem;
} C_CSGO_TeamPreviewCharacterPosition;

inline struct C_SmokeGrenadeProjectileOffsets {
	DWORD m_nSmokeEffectTickBegin;
	DWORD m_bDidSmokeEffect;
	DWORD m_nRandomSeed;
	DWORD m_vSmokeColor;
	DWORD m_vSmokeDetonationPos;
	DWORD m_VoxelFrameData;
	DWORD m_nVoxelFrameDataSize;
	DWORD m_nVoxelUpdate;
	DWORD m_bSmokeVolumeDataReceived;
	DWORD m_bSmokeEffectSpawned;
} C_SmokeGrenadeProjectile;

inline struct CScriptComponentOffsets {
	DWORD m_scriptClassName;
} CScriptComponent;

inline struct CCSPlayer_BuyServicesOffsets {
	DWORD m_vecSellbackPurchaseEntries;
} CCSPlayer_BuyServices;

inline struct C_DynamicPropOffsets {
	DWORD m_bUseHitboxesForRenderBox;
	DWORD m_bUseAnimGraph;
	DWORD m_pOutputAnimBegun;
	DWORD m_pOutputAnimOver;
	DWORD m_pOutputAnimLoopCycleOver;
	DWORD m_OnAnimReachedStart;
	DWORD m_OnAnimReachedEnd;
	DWORD m_iszIdleAnim;
	DWORD m_nIdleAnimLoopMode;
	DWORD m_bRandomizeCycle;
	DWORD m_bStartDisabled;
	DWORD m_bFiredStartEndOutput;
	DWORD m_bForceNpcExclude;
	DWORD m_bCreateNonSolid;
	DWORD m_bIsOverrideProp;
	DWORD m_iInitialGlowState;
	DWORD m_nGlowRange;
	DWORD m_nGlowRangeMin;
	DWORD m_glowColor;
	DWORD m_nGlowTeam;
	DWORD m_iCachedFrameCount;
	DWORD m_vecCachedRenderMins;
	DWORD m_vecCachedRenderMaxs;
} C_DynamicProp;

inline struct C_CSTeamOffsets {
	DWORD m_szTeamMatchStat;
	DWORD m_numMapVictories;
	DWORD m_bSurrendered;
	DWORD m_scoreFirstHalf;
	DWORD m_scoreSecondHalf;
	DWORD m_scoreOvertime;
	DWORD m_szClanTeamname;
	DWORD m_iClanID;
	DWORD m_szTeamFlagImage;
	DWORD m_szTeamLogoImage;
} C_CSTeam;

inline struct C_TextureBasedAnimatableOffsets {
	DWORD m_bLoop;
	DWORD m_flFPS;
	DWORD m_hPositionKeys;
	DWORD m_hRotationKeys;
	DWORD m_vAnimationBoundsMin;
	DWORD m_vAnimationBoundsMax;
	DWORD m_flStartTime;
	DWORD m_flStartFrame;
} C_TextureBasedAnimatable;

inline struct C_TriggerPhysicsOffsets {
	DWORD m_gravityScale;
	DWORD m_linearLimit;
	DWORD m_linearDamping;
	DWORD m_angularLimit;
	DWORD m_angularDamping;
	DWORD m_linearForce;
	DWORD m_flFrequency;
	DWORD m_flDampingRatio;
	DWORD m_vecLinearForcePointAt;
	DWORD m_bCollapseToForcePoint;
	DWORD m_vecLinearForcePointAtWorld;
	DWORD m_vecLinearForceDirection;
	DWORD m_bConvertToDebrisWhenPossible;
} C_TriggerPhysics;

inline struct C_HandleTestOffsets {
	DWORD m_Handle;
	DWORD m_bSendHandle;
} C_HandleTest;

inline struct CInfoWorldLayerOffsets {
	DWORD m_pOutputOnEntitiesSpawned;
	DWORD m_worldName;
	DWORD m_layerName;
	DWORD m_bWorldLayerVisible;
	DWORD m_bEntitiesSpawned;
	DWORD m_bCreateAsChildSpawnGroup;
	DWORD m_hLayerSpawnGroup;
	DWORD m_bWorldLayerActuallyVisible;
} CInfoWorldLayer;

inline struct C_MultimeterOffsets {
	DWORD m_hTargetC4;
} C_Multimeter;

inline struct C_BaseTriggerOffsets {
	DWORD m_OnStartTouch;
	DWORD m_OnStartTouchAll;
	DWORD m_OnEndTouch;
	DWORD m_OnEndTouchAll;
	DWORD m_OnTouching;
	DWORD m_OnTouchingEachEntity;
	DWORD m_OnNotTouching;
	DWORD m_hTouchingEntities;
	DWORD m_iFilterName;
	DWORD m_hFilter;
	DWORD m_bDisabled;
} C_BaseTrigger;

inline struct FilterDamageTypeOffsets {
	DWORD m_iDamageType;
} FilterDamageType;

inline struct CAttributeListOffsets {
	DWORD m_Attributes;
	DWORD m_pManager;
} CAttributeList;

inline struct CPulseCell_Inflow_WaitOffsets {
	DWORD m_WakeResume;
} CPulseCell_Inflow_Wait;

inline struct CFilterProximityOffsets {
	DWORD m_flRadius;
} CFilterProximity;

inline struct CEffectDataOffsets {
	DWORD m_vOrigin;
	DWORD m_vStart;
	DWORD m_vNormal;
	DWORD m_vAngles;
	DWORD m_hEntity;
	DWORD m_hOtherEntity;
	DWORD m_flScale;
	DWORD m_flMagnitude;
	DWORD m_flRadius;
	DWORD m_nSurfaceProp;
	DWORD m_nEffectIndex;
	DWORD m_nDamageType;
	DWORD m_nPenetrate;
	DWORD m_nMaterial;
	DWORD m_nHitBox;
	DWORD m_nColor;
	DWORD m_fFlags;
	DWORD m_nAttachmentIndex;
	DWORD m_nAttachmentName;
	DWORD m_iEffectName;
	DWORD m_nExplosionType;
} CEffectData;

inline struct C_ParticleSystemOffsets {
	DWORD m_szSnapshotFileName;
	DWORD m_bActive;
	DWORD m_bFrozen;
	DWORD m_flFreezeTransitionDuration;
	DWORD m_nStopType;
	DWORD m_bAnimateDuringGameplayPause;
	DWORD m_iEffectIndex;
	DWORD m_flStartTime;
	DWORD m_flPreSimTime;
	DWORD m_vServerControlPoints;
	DWORD m_iServerControlPointAssignments;
	DWORD m_hControlPointEnts;
	DWORD m_bNoSave;
	DWORD m_bNoFreeze;
	DWORD m_bNoRamp;
	DWORD m_bStartActive;
	DWORD m_iszEffectName;
	DWORD m_iszControlPointNames;
	DWORD m_nDataCP;
	DWORD m_vecDataCPValue;
	DWORD m_nTintCP;
	DWORD m_clrTint;
	DWORD m_bOldActive;
	DWORD m_bOldFrozen;
} C_ParticleSystem;

inline struct CPulseCell_Outflow_CycleShuffledOffsets {
	DWORD m_Outputs;
} CPulseCell_Outflow_CycleShuffled;

inline struct C_BaseFlexOffsets {
	DWORD m_flexWeight;
	DWORD m_vLookTargetPosition;
	DWORD m_blinktoggle;
	DWORD m_nLastFlexUpdateFrameCount;
	DWORD m_CachedViewTarget;
	DWORD m_nNextSceneEventId;
	DWORD m_iBlink;
	DWORD m_blinktime;
	DWORD m_prevblinktoggle;
	DWORD m_iJawOpen;
	DWORD m_flJawOpenAmount;
	DWORD m_flBlinkAmount;
	DWORD m_iMouthAttachment;
	DWORD m_iEyeAttachment;
	DWORD m_bResetFlexWeightsOnModelChange;
	DWORD m_nEyeOcclusionRendererBone;
	DWORD m_mEyeOcclusionRendererCameraToBoneTransform;
	DWORD m_vEyeOcclusionRendererHalfExtent;
	DWORD m_PhonemeClasses;
} C_BaseFlex;

inline struct CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_tOffsets {
	DWORD pItem;
	DWORD team;
	DWORD slot;
} CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t;

inline struct CLightComponentOffsets {
	DWORD __m_pChainEntity;
	DWORD m_Color;
	DWORD m_SecondaryColor;
	DWORD m_flBrightness;
	DWORD m_flBrightnessScale;
	DWORD m_flBrightnessMult;
	DWORD m_flRange;
	DWORD m_flFalloff;
	DWORD m_flAttenuation0;
	DWORD m_flAttenuation1;
	DWORD m_flAttenuation2;
	DWORD m_flTheta;
	DWORD m_flPhi;
	DWORD m_hLightCookie;
	DWORD m_nCascades;
	DWORD m_nCastShadows;
	DWORD m_nShadowWidth;
	DWORD m_nShadowHeight;
	DWORD m_bRenderDiffuse;
	DWORD m_nRenderSpecular;
	DWORD m_bRenderTransmissive;
	DWORD m_flOrthoLightWidth;
	DWORD m_flOrthoLightHeight;
	DWORD m_nStyle;
	DWORD m_Pattern;
	DWORD m_nCascadeRenderStaticObjects;
	DWORD m_flShadowCascadeCrossFade;
	DWORD m_flShadowCascadeDistanceFade;
	DWORD m_flShadowCascadeDistance0;
	DWORD m_flShadowCascadeDistance1;
	DWORD m_flShadowCascadeDistance2;
	DWORD m_flShadowCascadeDistance3;
	DWORD m_nShadowCascadeResolution0;
	DWORD m_nShadowCascadeResolution1;
	DWORD m_nShadowCascadeResolution2;
	DWORD m_nShadowCascadeResolution3;
	DWORD m_bUsesBakedShadowing;
	DWORD m_nShadowPriority;
	DWORD m_nBakedShadowIndex;
	DWORD m_nLightPathUniqueId;
	DWORD m_nLightMapUniqueId;
	DWORD m_bRenderToCubemaps;
	DWORD m_bAllowSSTGeneration;
	DWORD m_nDirectLight;
	DWORD m_nIndirectLight;
	DWORD m_flFadeMinDist;
	DWORD m_flFadeMaxDist;
	DWORD m_flShadowFadeMinDist;
	DWORD m_flShadowFadeMaxDist;
	DWORD m_bEnabled;
	DWORD m_bFlicker;
	DWORD m_bPrecomputedFieldsValid;
	DWORD m_vPrecomputedBoundsMins;
	DWORD m_vPrecomputedBoundsMaxs;
	DWORD m_vPrecomputedOBBOrigin;
	DWORD m_vPrecomputedOBBAngles;
	DWORD m_vPrecomputedOBBExtent;
	DWORD m_flPrecomputedMaxRange;
	DWORD m_nFogLightingMode;
	DWORD m_flFogContributionStength;
	DWORD m_flNearClipPlane;
	DWORD m_SkyColor;
	DWORD m_flSkyIntensity;
	DWORD m_SkyAmbientBounce;
	DWORD m_bUseSecondaryColor;
	DWORD m_bMixedShadows;
	DWORD m_flLightStyleStartTime;
	DWORD m_flCapsuleLength;
	DWORD m_flMinRoughness;
	DWORD m_bPvsModifyEntity;
} CLightComponent;

inline struct CCSPlayer_ActionTrackingServicesOffsets {
	DWORD m_hLastWeaponBeforeC4AutoSwitch;
	DWORD m_bIsRescuing;
	DWORD m_weaponPurchasesThisMatch;
	DWORD m_weaponPurchasesThisRound;
} CCSPlayer_ActionTrackingServices;

inline struct C_EnvCubemapOffsets {
	DWORD m_Entity_hCubemapTexture;
	DWORD m_Entity_bCustomCubemapTexture;
	DWORD m_Entity_flInfluenceRadius;
	DWORD m_Entity_vBoxProjectMins;
	DWORD m_Entity_vBoxProjectMaxs;
	DWORD m_Entity_bMoveable;
	DWORD m_Entity_nHandshake;
	DWORD m_Entity_nEnvCubeMapArrayIndex;
	DWORD m_Entity_nPriority;
	DWORD m_Entity_flEdgeFadeDist;
	DWORD m_Entity_vEdgeFadeDists;
	DWORD m_Entity_flDiffuseScale;
	DWORD m_Entity_bStartDisabled;
	DWORD m_Entity_bDefaultEnvMap;
	DWORD m_Entity_bDefaultSpecEnvMap;
	DWORD m_Entity_bIndoorCubeMap;
	DWORD m_Entity_bCopyDiffuseFromDefaultCubemap;
	DWORD m_Entity_bEnabled;
} C_EnvCubemap;

inline struct CBodyComponentOffsets {
	DWORD m_pSceneNode;
	DWORD __m_pChainEntity;
} CBodyComponent;

inline struct CPulseCell_Inflow_MethodOffsets {
	DWORD m_MethodName;
	DWORD m_Description;
	DWORD m_bIsPublic;
	DWORD m_ReturnType;
	DWORD m_Args;
} CPulseCell_Inflow_Method;

inline struct C_BaseCombatCharacterOffsets {
	DWORD m_hMyWearables;
	DWORD m_leftFootAttachment;
	DWORD m_rightFootAttachment;
	DWORD m_nWaterWakeMode;
	DWORD m_flWaterWorldZ;
	DWORD m_flWaterNextTraceTime;
} C_BaseCombatCharacter;

inline struct CGlowPropertyOffsets {
	DWORD m_fGlowColor;
	DWORD m_iGlowType;
	DWORD m_iGlowTeam;
	DWORD m_nGlowRange;
	DWORD m_nGlowRangeMin;
	DWORD m_glowColorOverride;
	DWORD m_bFlashing;
	DWORD m_flGlowTime;
	DWORD m_flGlowStartTime;
	DWORD m_bEligibleForScreenHighlight;
	DWORD m_bGlowing;
} CGlowProperty;

inline struct C_PointClientUIDialogOffsets {
	DWORD m_hActivator;
	DWORD m_bStartEnabled;
} C_PointClientUIDialog;

inline struct C_FootstepControlOffsets {
	DWORD m_source;
	DWORD m_destination;
} C_FootstepControl;

inline struct CCitadelSoundOpvarSetOBBOffsets {
	DWORD m_iszStackName;
	DWORD m_iszOperatorName;
	DWORD m_iszOpvarName;
	DWORD m_vDistanceInnerMins;
	DWORD m_vDistanceInnerMaxs;
	DWORD m_vDistanceOuterMins;
	DWORD m_vDistanceOuterMaxs;
	DWORD m_nAABBDirection;
} CCitadelSoundOpvarSetOBB;

inline struct CPulseCell_BooleanSwitchStateOffsets {
	DWORD m_Condition;
	DWORD m_SubGraph;
	DWORD m_WhenTrue;
	DWORD m_WhenFalse;
} CPulseCell_BooleanSwitchState;

inline struct CDamageRecordOffsets {
	DWORD m_PlayerDamager;
	DWORD m_PlayerRecipient;
	DWORD m_hPlayerControllerDamager;
	DWORD m_hPlayerControllerRecipient;
	DWORD m_szPlayerDamagerName;
	DWORD m_szPlayerRecipientName;
	DWORD m_DamagerXuid;
	DWORD m_RecipientXuid;
	DWORD m_flBulletsDamage;
	DWORD m_flDamage;
	DWORD m_flActualHealthRemoved;
	DWORD m_iNumHits;
	DWORD m_iLastBulletUpdate;
	DWORD m_bIsOtherEnemy;
	DWORD m_killType;
} CDamageRecord;

inline struct VPhysicsCollisionAttribute_tOffsets {
	DWORD m_nInteractsAs;
	DWORD m_nInteractsWith;
	DWORD m_nInteractsExclude;
	DWORD m_nEntityId;
	DWORD m_nOwnerId;
	DWORD m_nHierarchyId;
	DWORD m_nCollisionGroup;
	DWORD m_nCollisionFunctionMask;
} VPhysicsCollisionAttribute_t;

inline struct C_OmniLightOffsets {
	DWORD m_flInnerAngle;
	DWORD m_flOuterAngle;
	DWORD m_bShowLight;
} C_OmniLight;

inline struct C_SceneEntityOffsets {
	DWORD m_bIsPlayingBack;
	DWORD m_bPaused;
	DWORD m_bMultiplayer;
	DWORD m_bAutogenerated;
	DWORD m_flForceClientTime;
	DWORD m_nSceneStringIndex;
	DWORD m_bClientOnly;
	DWORD m_hOwner;
	DWORD m_hActorList;
	DWORD m_bWasPlaying;
	DWORD m_QueuedEvents;
	DWORD m_flCurrentTime;
} C_SceneEntity;

inline struct CPulseCell_Inflow_YieldOffsets {
	DWORD m_UnyieldResume;
} CPulseCell_Inflow_Yield;

inline struct C_NametagModuleOffsets {
	DWORD m_strNametagString;
} C_NametagModule;

inline struct C_EconEntityOffsets {
	DWORD m_flFlexDelayTime;
	DWORD m_flFlexDelayedWeight;
	DWORD m_bAttributesInitialized;
	DWORD m_AttributeManager;
	DWORD m_OriginalOwnerXuidLow;
	DWORD m_OriginalOwnerXuidHigh;
	DWORD m_nFallbackPaintKit;
	DWORD m_nFallbackSeed;
	DWORD m_flFallbackWear;
	DWORD m_nFallbackStatTrak;
	DWORD m_bClientside;
	DWORD m_bParticleSystemsCreated;
	DWORD m_vecAttachedParticles;
	DWORD m_hViewmodelAttachment;
	DWORD m_iOldTeam;
	DWORD m_bAttachmentDirty;
	DWORD m_nUnloadedModelIndex;
	DWORD m_iNumOwnerValidationRetries;
	DWORD m_hOldProvidee;
	DWORD m_vecAttachedModels;
} C_EconEntity;

inline struct C_PointValueRemapperOffsets {
	DWORD m_bDisabled;
	DWORD m_bDisabledOld;
	DWORD m_bUpdateOnClient;
	DWORD m_nInputType;
	DWORD m_hRemapLineStart;
	DWORD m_hRemapLineEnd;
	DWORD m_flMaximumChangePerSecond;
	DWORD m_flDisengageDistance;
	DWORD m_flEngageDistance;
	DWORD m_bRequiresUseKey;
	DWORD m_nOutputType;
	DWORD m_hOutputEntities;
	DWORD m_nHapticsType;
	DWORD m_nMomentumType;
	DWORD m_flMomentumModifier;
	DWORD m_flSnapValue;
	DWORD m_flCurrentMomentum;
	DWORD m_nRatchetType;
	DWORD m_flRatchetOffset;
	DWORD m_flInputOffset;
	DWORD m_bEngaged;
	DWORD m_bFirstUpdate;
	DWORD m_flPreviousValue;
	DWORD m_flPreviousUpdateTickTime;
	DWORD m_vecPreviousTestPoint;
} C_PointValueRemapper;

inline struct CGameSceneNodeHandleOffsets {
	DWORD m_hOwner;
	DWORD m_name;
} CGameSceneNodeHandle;

inline struct CPulseCell_UnknownOffsets {
	DWORD m_UnknownKeys;
} CPulseCell_Unknown;

inline struct CSPerRoundStats_tOffsets {
	DWORD m_iKills;
	DWORD m_iDeaths;
	DWORD m_iAssists;
	DWORD m_iDamage;
	DWORD m_iEquipmentValue;
	DWORD m_iMoneySaved;
	DWORD m_iKillReward;
	DWORD m_iLiveTime;
	DWORD m_iHeadShotKills;
	DWORD m_iObjective;
	DWORD m_iCashEarned;
	DWORD m_iUtilityDamage;
	DWORD m_iEnemiesFlashed;
} CSPerRoundStats_t;

inline struct CPulseCell_Outflow_CycleRandomOffsets {
	DWORD m_Outputs;
} CPulseCell_Outflow_CycleRandom;

inline struct CPulseCell_Step_PublicOutputOffsets {
	DWORD m_OutputIndex;
} CPulseCell_Step_PublicOutput;

inline struct C_CSGameRulesOffsets {
	DWORD m_bFreezePeriod;
	DWORD m_bWarmupPeriod;
	DWORD m_fWarmupPeriodEnd;
	DWORD m_fWarmupPeriodStart;
	DWORD m_bTerroristTimeOutActive;
	DWORD m_bCTTimeOutActive;
	DWORD m_flTerroristTimeOutRemaining;
	DWORD m_flCTTimeOutRemaining;
	DWORD m_nTerroristTimeOuts;
	DWORD m_nCTTimeOuts;
	DWORD m_bTechnicalTimeOut;
	DWORD m_bMatchWaitingForResume;
	DWORD m_iFreezeTime;
	DWORD m_iRoundTime;
	DWORD m_fMatchStartTime;
	DWORD m_fRoundStartTime;
	DWORD m_flRestartRoundTime;
	DWORD m_bGameRestart;
	DWORD m_flGameStartTime;
	DWORD m_timeUntilNextPhaseStarts;
	DWORD m_gamePhase;
	DWORD m_totalRoundsPlayed;
	DWORD m_nRoundsPlayedThisPhase;
	DWORD m_nOvertimePlaying;
	DWORD m_iHostagesRemaining;
	DWORD m_bAnyHostageReached;
	DWORD m_bMapHasBombTarget;
	DWORD m_bMapHasRescueZone;
	DWORD m_bMapHasBuyZone;
	DWORD m_bIsQueuedMatchmaking;
	DWORD m_nQueuedMatchmakingMode;
	DWORD m_bIsValveDS;
	DWORD m_bLogoMap;
	DWORD m_bPlayAllStepSoundsOnServer;
	DWORD m_iSpectatorSlotCount;
	DWORD m_MatchDevice;
	DWORD m_bHasMatchStarted;
	DWORD m_nNextMapInMapgroup;
	DWORD m_szTournamentEventName;
	DWORD m_szTournamentEventStage;
	DWORD m_szMatchStatTxt;
	DWORD m_szTournamentPredictionsTxt;
	DWORD m_nTournamentPredictionsPct;
	DWORD m_flCMMItemDropRevealStartTime;
	DWORD m_flCMMItemDropRevealEndTime;
	DWORD m_bIsDroppingItems;
	DWORD m_bIsQuestEligible;
	DWORD m_bIsHltvActive;
	DWORD m_arrProhibitedItemIndices;
	DWORD m_arrTournamentActiveCasterAccounts;
	DWORD m_numBestOfMaps;
	DWORD m_nHalloweenMaskListSeed;
	DWORD m_bBombDropped;
	DWORD m_bBombPlanted;
	DWORD m_iRoundWinStatus;
	DWORD m_eRoundWinReason;
	DWORD m_bTCantBuy;
	DWORD m_bCTCantBuy;
	DWORD m_iMatchStats_RoundResults;
	DWORD m_iMatchStats_PlayersAlive_CT;
	DWORD m_iMatchStats_PlayersAlive_T;
	DWORD m_TeamRespawnWaveTimes;
	DWORD m_flNextRespawnWave;
	DWORD m_vMinimapMins;
	DWORD m_vMinimapMaxs;
	DWORD m_MinimapVerticalSectionHeights;
	DWORD m_ullLocalMatchID;
	DWORD m_nEndMatchMapGroupVoteTypes;
	DWORD m_nEndMatchMapGroupVoteOptions;
	DWORD m_nEndMatchMapVoteWinner;
	DWORD m_iNumConsecutiveCTLoses;
	DWORD m_iNumConsecutiveTerroristLoses;
	DWORD m_nMatchAbortedEarlyReason;
	DWORD m_bHasTriggeredRoundStartMusic;
	DWORD m_bSwitchingTeamsAtRoundReset;
	DWORD m_pGameModeRules;
	DWORD m_RetakeRules;
	DWORD m_nMatchEndCount;
	DWORD m_nTTeamIntroVariant;
	DWORD m_nCTTeamIntroVariant;
	DWORD m_bTeamIntroPeriod;
	DWORD m_iRoundEndWinnerTeam;
	DWORD m_eRoundEndReason;
	DWORD m_bRoundEndShowTimerDefend;
	DWORD m_iRoundEndTimerTime;
	DWORD m_sRoundEndFunFactToken;
	DWORD m_iRoundEndFunFactPlayerSlot;
	DWORD m_iRoundEndFunFactData1;
	DWORD m_iRoundEndFunFactData2;
	DWORD m_iRoundEndFunFactData3;
	DWORD m_sRoundEndMessage;
	DWORD m_iRoundEndPlayerCount;
	DWORD m_bRoundEndNoMusic;
	DWORD m_iRoundEndLegacy;
	DWORD m_nRoundEndCount;
	DWORD m_iRoundStartRoundNumber;
	DWORD m_nRoundStartCount;
	DWORD m_flLastPerfSampleTime;
} C_CSGameRules;

inline struct CGrenadeTracerOffsets {
	DWORD m_flTracerDuration;
	DWORD m_nType;
} CGrenadeTracer;

inline struct CPulse_BlackboardReferenceOffsets {
	DWORD m_hBlackboardResource;
	DWORD m_BlackboardResource;
	DWORD m_nNodeID;
	DWORD m_NodeName;
} CPulse_BlackboardReference;

inline struct C_BaseCSGrenadeProjectileOffsets {
	DWORD m_vInitialPosition;
	DWORD m_vInitialVelocity;
	DWORD m_nBounces;
	DWORD m_nExplodeEffectIndex;
	DWORD m_nExplodeEffectTickBegin;
	DWORD m_vecExplodeEffectOrigin;
	DWORD m_flSpawnTime;
	DWORD vecLastTrailLinePos;
	DWORD flNextTrailLineTime;
	DWORD m_bExplodeEffectBegan;
	DWORD m_bCanCreateGrenadeTrail;
	DWORD m_nSnapshotTrajectoryEffectIndex;
	DWORD m_hSnapshotTrajectoryParticleSnapshot;
	DWORD m_arrTrajectoryTrailPoints;
	DWORD m_arrTrajectoryTrailPointCreationTimes;
	DWORD m_flTrajectoryTrailEffectCreationTime;
} C_BaseCSGrenadeProjectile;

inline struct C_GradientFogOffsets {
	DWORD m_hGradientFogTexture;
	DWORD m_flFogStartDistance;
	DWORD m_flFogEndDistance;
	DWORD m_bHeightFogEnabled;
	DWORD m_flFogStartHeight;
	DWORD m_flFogEndHeight;
	DWORD m_flFarZ;
	DWORD m_flFogMaxOpacity;
	DWORD m_flFogFalloffExponent;
	DWORD m_flFogVerticalExponent;
	DWORD m_fogColor;
	DWORD m_flFogStrength;
	DWORD m_flFadeTime;
	DWORD m_bStartDisabled;
	DWORD m_bIsEnabled;
	DWORD m_bGradientFogNeedsTextures;
} C_GradientFog;

inline struct CCSPlayerController_InGameMoneyServicesOffsets {
	DWORD m_iAccount;
	DWORD m_iStartAccount;
	DWORD m_iTotalCashSpent;
	DWORD m_iCashSpentThisRound;
	DWORD m_bReceivesMoneyNextRound;
	DWORD m_iMoneyEarnedForNextRound;
} CCSPlayerController_InGameMoneyServices;

inline struct CAnimGraphNetworkedVariablesOffsets {
	DWORD m_PredNetBoolVariables;
	DWORD m_PredNetByteVariables;
	DWORD m_PredNetUInt16Variables;
	DWORD m_PredNetIntVariables;
	DWORD m_PredNetUInt32Variables;
	DWORD m_PredNetUInt64Variables;
	DWORD m_PredNetFloatVariables;
	DWORD m_PredNetVectorVariables;
	DWORD m_PredNetQuaternionVariables;
	DWORD m_PredNetGlobalSymbolVariables;
	DWORD m_OwnerOnlyPredNetBoolVariables;
	DWORD m_OwnerOnlyPredNetByteVariables;
	DWORD m_OwnerOnlyPredNetUInt16Variables;
	DWORD m_OwnerOnlyPredNetIntVariables;
	DWORD m_OwnerOnlyPredNetUInt32Variables;
	DWORD m_OwnerOnlyPredNetUInt64Variables;
	DWORD m_OwnerOnlyPredNetFloatVariables;
	DWORD m_OwnerOnlyPredNetVectorVariables;
	DWORD m_OwnerOnlyPredNetQuaternionVariables;
	DWORD m_OwnerOnlyPredNetGlobalSymbolVariables;
	DWORD m_nBoolVariablesCount;
	DWORD m_nOwnerOnlyBoolVariablesCount;
	DWORD m_nRandomSeedOffset;
	DWORD m_flLastTeleportTime;
} CAnimGraphNetworkedVariables;

inline struct CFilterModelOffsets {
	DWORD m_iFilterModel;
} CFilterModel;

inline struct C_SoundAreaEntityOrientedBoxOffsets {
	DWORD m_vMin;
	DWORD m_vMax;
} C_SoundAreaEntityOrientedBox;

inline struct CPulseGameBlackboardOffsets {
	DWORD m_strGraphName;
	DWORD m_strStateBlob;
} CPulseGameBlackboard;

inline struct C_RagdollPropAttachedOffsets {
	DWORD m_boneIndexAttached;
	DWORD m_ragdollAttachedObjectIndex;
	DWORD m_attachmentPointBoneSpace;
	DWORD m_attachmentPointRagdollSpace;
	DWORD m_vecOffset;
	DWORD m_parentTime;
	DWORD m_bHasParent;
} C_RagdollPropAttached;

inline struct C_CSGO_PreviewPlayerOffsets {
	DWORD m_animgraphCharacterModeString;
	DWORD m_flInitialModelScale;
} C_CSGO_PreviewPlayer;

inline struct C_RectLightOffsets {
	DWORD m_bShowLight;
} C_RectLight;

inline struct CPathSimpleOffsets {
	DWORD m_CPathQueryComponent;
	DWORD m_pathString;
	DWORD m_bClosedLoop;
} CPathSimple;

inline struct C_FuncTrackTrainOffsets {
	DWORD m_nLongAxis;
	DWORD m_flRadius;
	DWORD m_flLineLength;
} C_FuncTrackTrain;

inline struct C_EconWearableOffsets {
	DWORD m_nForceSkin;
	DWORD m_bAlwaysAllow;
} C_EconWearable;

inline struct C_EnvDecalOffsets {
	DWORD m_hDecalMaterial;
	DWORD m_flWidth;
	DWORD m_flHeight;
	DWORD m_flDepth;
	DWORD m_nRenderOrder;
	DWORD m_bProjectOnWorld;
	DWORD m_bProjectOnCharacters;
	DWORD m_bProjectOnWater;
	DWORD m_flDepthSortBias;
} C_EnvDecal;

inline struct EntitySpottedState_tOffsets {
	DWORD m_bSpotted;
	DWORD m_bSpottedByMask;
} EntitySpottedState_t;

inline struct fogparams_tOffsets {
	DWORD dirPrimary;
	DWORD colorPrimary;
	DWORD colorSecondary;
	DWORD colorPrimaryLerpTo;
	DWORD colorSecondaryLerpTo;
	DWORD start;
	DWORD end;
	DWORD farz;
	DWORD maxdensity;
	DWORD exponent;
	DWORD HDRColorScale;
	DWORD skyboxFogFactor;
	DWORD skyboxFogFactorLerpTo;
	DWORD startLerpTo;
	DWORD endLerpTo;
	DWORD maxdensityLerpTo;
	DWORD lerptime;
	DWORD duration;
	DWORD blendtobackground;
	DWORD scattering;
	DWORD locallightscale;
	DWORD enable;
	DWORD blend;
	DWORD m_bPadding2;
	DWORD m_bPadding;
} fogparams_t;

inline struct C_ItemOffsets {
	DWORD m_pReticleHintTextName;
} C_Item;

inline struct C_BeamOffsets {
	DWORD m_flFrameRate;
	DWORD m_flHDRColorScale;
	DWORD m_flFireTime;
	DWORD m_flDamage;
	DWORD m_nNumBeamEnts;
	DWORD m_queryHandleHalo;
	DWORD m_hBaseMaterial;
	DWORD m_nHaloIndex;
	DWORD m_nBeamType;
	DWORD m_nBeamFlags;
	DWORD m_hAttachEntity;
	DWORD m_nAttachIndex;
	DWORD m_fWidth;
	DWORD m_fEndWidth;
	DWORD m_fFadeLength;
	DWORD m_fHaloScale;
	DWORD m_fAmplitude;
	DWORD m_fStartFrame;
	DWORD m_fSpeed;
	DWORD m_flFrame;
	DWORD m_nClipStyle;
	DWORD m_bTurnedOff;
	DWORD m_vecEndPos;
	DWORD m_hEndEntity;
} C_Beam;

inline struct C_EnvLightProbeVolumeOffsets {
	DWORD m_Entity_hLightProbeTexture_AmbientCube;
	DWORD m_Entity_hLightProbeTexture_SDF;
	DWORD m_Entity_hLightProbeTexture_SH2_DC;
	DWORD m_Entity_hLightProbeTexture_SH2_R;
	DWORD m_Entity_hLightProbeTexture_SH2_G;
	DWORD m_Entity_hLightProbeTexture_SH2_B;
	DWORD m_Entity_hLightProbeDirectLightIndicesTexture;
	DWORD m_Entity_hLightProbeDirectLightScalarsTexture;
	DWORD m_Entity_hLightProbeDirectLightShadowsTexture;
	DWORD m_Entity_vBoxMins;
	DWORD m_Entity_vBoxMaxs;
	DWORD m_Entity_bMoveable;
	DWORD m_Entity_nHandshake;
	DWORD m_Entity_nPriority;
	DWORD m_Entity_bStartDisabled;
	DWORD m_Entity_nLightProbeSizeX;
	DWORD m_Entity_nLightProbeSizeY;
	DWORD m_Entity_nLightProbeSizeZ;
	DWORD m_Entity_nLightProbeAtlasX;
	DWORD m_Entity_nLightProbeAtlasY;
	DWORD m_Entity_nLightProbeAtlasZ;
	DWORD m_Entity_bEnabled;
} C_EnvLightProbeVolume;

inline struct C_FuncConveyorOffsets {
	DWORD m_vecMoveDirEntitySpace;
	DWORD m_flTargetSpeed;
	DWORD m_nTransitionStartTick;
	DWORD m_nTransitionDurationTicks;
	DWORD m_flTransitionStartSpeed;
	DWORD m_hConveyorModels;
	DWORD m_flCurrentConveyorOffset;
	DWORD m_flCurrentConveyorSpeed;
} C_FuncConveyor;

inline struct CCSPlayer_WeaponServicesOffsets {
	DWORD m_flNextAttack;
	DWORD m_bIsLookingAtWeapon;
	DWORD m_bIsHoldingLookAtWeapon;
	DWORD m_nOldTotalShootPositionHistoryCount;
	DWORD m_nOldTotalInputHistoryCount;
	DWORD m_networkAnimTiming;
	DWORD m_bBlockInspectUntilNextGraphUpdate;
	DWORD m_hSavedWeapon;
	DWORD m_nTimeToMelee;
	DWORD m_nTimeToSecondary;
	DWORD m_nTimeToPrimary;
	DWORD m_nTimeToSniperRifle;
	DWORD m_bIsBeingGivenItem;
	DWORD m_bIsPickingUpItemWithUse;
	DWORD m_bPickedUpWeapon;
	DWORD m_bDisableAutoDeploy;
	DWORD m_bIsPickingUpGroundWeapon;
} CCSPlayer_WeaponServices;

inline struct C_PhysMagnetOffsets {
	DWORD m_aAttachedObjectsFromServer;
	DWORD m_aAttachedObjects;
} C_PhysMagnet;

inline struct C_PlantedC4Offsets {
	DWORD m_bBombTicking;
	DWORD m_nBombSite;
	DWORD m_nSourceSoundscapeHash;
	DWORD m_entitySpottedState;
	DWORD m_flNextGlow;
	DWORD m_flNextBeep;
	DWORD m_flC4Blow;
	DWORD m_bCannotBeDefused;
	DWORD m_bHasExploded;
	DWORD m_flTimerLength;
	DWORD m_bBeingDefused;
	DWORD m_bTriggerWarning;
	DWORD m_bExplodeWarning;
	DWORD m_bC4Activated;
	DWORD m_bTenSecWarning;
	DWORD m_flDefuseLength;
	DWORD m_flDefuseCountDown;
	DWORD m_bBombDefused;
	DWORD m_hBombDefuser;
	DWORD m_AttributeManager;
	DWORD m_hDefuserMultimeter;
	DWORD m_flNextRadarFlashTime;
	DWORD m_bRadarFlash;
	DWORD m_pBombDefuser;
	DWORD m_fLastDefuseTime;
	DWORD m_pPredictionOwner;
	DWORD m_vecC4ExplodeSpectatePos;
	DWORD m_vecC4ExplodeSpectateAng;
	DWORD m_flC4ExplodeSpectateDuration;
} C_PlantedC4;

inline struct CFilterNameOffsets {
	DWORD m_iFilterName;
} CFilterName;

inline struct C_RagdollPropOffsets {
	DWORD m_ragEnabled;
	DWORD m_ragPos;
	DWORD m_ragAngles;
	DWORD m_flBlendWeight;
	DWORD m_hRagdollSource;
	DWORD m_iEyeAttachment;
	DWORD m_flBlendWeightCurrent;
	DWORD m_parentPhysicsBoneIndices;
	DWORD m_worldSpaceBoneComputationOrder;
} C_RagdollProp;

inline struct CPulse_CallInfoOffsets {
	DWORD m_PortName;
	DWORD m_nEditorNodeID;
	DWORD m_RegisterMap;
	DWORD m_CallMethodID;
	DWORD m_nSrcChunk;
	DWORD m_nSrcInstruction;
} CPulse_CallInfo;

inline struct CBaseAnimGraphOffsets {
	DWORD m_bInitiallyPopulateInterpHistory;
	DWORD m_bSuppressAnimEventSounds;
	DWORD m_bAnimGraphUpdateEnabled;
	DWORD m_flMaxSlopeDistance;
	DWORD m_vLastSlopeCheckPos;
	DWORD m_bAnimationUpdateScheduled;
	DWORD m_vecForce;
	DWORD m_nForceBone;
	DWORD m_pClientsideRagdoll;
	DWORD m_bBuiltRagdoll;
	DWORD m_RagdollPose;
	DWORD m_bRagdollEnabled;
	DWORD m_bRagdollClientSide;
	DWORD m_bHasAnimatedMaterialAttributes;
	DWORD m_pChoreoServices;
	DWORD m_xParentedRagdollRootInEntitySpace;
} CBaseAnimGraph;

inline struct CPulseCell_InlineNodeSkipSelectorOffsets {
	DWORD m_nFlowNodeID;
	DWORD m_bAnd;
	DWORD m_PassOutflow;
	DWORD m_FailOutflow;
} CPulseCell_InlineNodeSkipSelector;

inline struct C_LightEntityOffsets {
	DWORD m_CLightComponent;
} C_LightEntity;

inline struct C_LocalTempEntityOffsets {
	DWORD flags;
	DWORD die;
	DWORD m_flFrameMax;
	DWORD x;
	DWORD y;
	DWORD fadeSpeed;
	DWORD bounceFactor;
	DWORD hitSound;
	DWORD priority;
	DWORD tentOffset;
	DWORD m_vecTempEntAngVelocity;
	DWORD tempent_renderamt;
	DWORD m_vecNormal;
	DWORD m_flSpriteScale;
	DWORD m_nFlickerFrame;
	DWORD m_flFrameRate;
	DWORD m_flFrame;
	DWORD m_pszImpactEffect;
	DWORD m_pszParticleEffect;
	DWORD m_bParticleCollision;
	DWORD m_iLastCollisionFrame;
	DWORD m_vLastCollisionOrigin;
	DWORD m_vecTempEntVelocity;
	DWORD m_vecPrevAbsOrigin;
	DWORD m_vecTempEntAcceleration;
} C_LocalTempEntity;

inline struct C_WeaponTaserOffsets {
	DWORD m_fFireTime;
	DWORD m_nLastAttackTick;
} C_WeaponTaser;

inline struct CPlayer_WeaponServicesOffsets {
	DWORD m_hMyWeapons;
	DWORD m_hActiveWeapon;
	DWORD m_hLastWeapon;
	DWORD m_iAmmo;
	DWORD m_bPreventWeaponPickup;
} CPlayer_WeaponServices;

inline struct CPulseCell_LimitCountOffsets {
	DWORD m_nLimitCount;
} CPulseCell_LimitCount;

inline struct CPulseCell_Step_CallExternalMethodOffsets {
	DWORD m_MethodName;
	DWORD m_GameBlackboard;
	DWORD m_ExpectedArgs;
	DWORD m_nAsyncCallMode;
	DWORD m_OnFinished;
} CPulseCell_Step_CallExternalMethod;

inline struct C_PlayerPingOffsets {
	DWORD m_hPlayer;
	DWORD m_hPingedEntity;
	DWORD m_iType;
	DWORD m_bUrgent;
	DWORD m_szPlaceName;
} C_PlayerPing;

inline struct C_CSGO_MapPreviewCameraPathNodeOffsets {
	DWORD m_szParentPathUniqueID;
	DWORD m_nPathIndex;
	DWORD m_vInTangentLocal;
	DWORD m_vOutTangentLocal;
	DWORD m_flFOV;
	DWORD m_flCameraSpeed;
	DWORD m_flEaseIn;
	DWORD m_flEaseOut;
	DWORD m_vInTangentWorld;
	DWORD m_vOutTangentWorld;
} C_CSGO_MapPreviewCameraPathNode;

inline struct C_CSPlayerResourceOffsets {
	DWORD m_bHostageAlive;
	DWORD m_isHostageFollowingSomeone;
	DWORD m_iHostageEntityIDs;
	DWORD m_bombsiteCenterA;
	DWORD m_bombsiteCenterB;
	DWORD m_hostageRescueX;
	DWORD m_hostageRescueY;
	DWORD m_hostageRescueZ;
	DWORD m_bEndMatchNextMapAllVoted;
	DWORD m_foundGoalPositions;
} C_CSPlayerResource;

inline struct CSkyboxReferenceOffsets {
	DWORD m_worldGroupId;
	DWORD m_hSkyCamera;
} CSkyboxReference;

inline struct CFilterClassOffsets {
	DWORD m_iFilterClass;
} CFilterClass;

inline struct C_PointCameraVFOVOffsets {
	DWORD m_flVerticalFOV;
} C_PointCameraVFOV;

inline struct C_PointCameraOffsets {
	DWORD m_FOV;
	DWORD m_Resolution;
	DWORD m_bFogEnable;
	DWORD m_FogColor;
	DWORD m_flFogStart;
	DWORD m_flFogEnd;
	DWORD m_flFogMaxDensity;
	DWORD m_bActive;
	DWORD m_bUseScreenAspectRatio;
	DWORD m_flAspectRatio;
	DWORD m_bNoSky;
	DWORD m_fBrightness;
	DWORD m_flZFar;
	DWORD m_flZNear;
	DWORD m_bCanHLTVUse;
	DWORD m_bAlignWithParent;
	DWORD m_bDofEnabled;
	DWORD m_flDofNearBlurry;
	DWORD m_flDofNearCrisp;
	DWORD m_flDofFarCrisp;
	DWORD m_flDofFarBlurry;
	DWORD m_flDofTiltToGround;
	DWORD m_TargetFOV;
	DWORD m_DegreesPerSecond;
	DWORD m_bIsOn;
	DWORD m_pNext;
} C_PointCamera;

inline struct CBaseFilterOffsets {
	DWORD m_bNegated;
	DWORD m_OnPass;
	DWORD m_OnFail;
} CBaseFilter;

inline struct WeaponPurchaseTracker_tOffsets {
	DWORD m_weaponPurchases;
} WeaponPurchaseTracker_t;

inline struct PulseObservableBoolExpression_tOffsets {
	DWORD m_EvaluateConnection;
	DWORD m_DependentObservableVars;
	DWORD m_DependentObservableBlackboardReferences;
} PulseObservableBoolExpression_t;

inline struct CMapInfoOffsets {
	DWORD m_iBuyingStatus;
	DWORD m_flBombRadius;
	DWORD m_iPetPopulation;
	DWORD m_bUseNormalSpawnsForDM;
	DWORD m_bDisableAutoGeneratedDMSpawns;
	DWORD m_flBotMaxVisionDistance;
	DWORD m_iHostageCount;
	DWORD m_bFadePlayerVisibilityFarZ;
	DWORD m_bRainTraceToSkyEnabled;
	DWORD m_flEnvRainStrength;
	DWORD m_flEnvPuddleRippleStrength;
	DWORD m_flEnvPuddleRippleDirection;
	DWORD m_flEnvWetnessCoverage;
	DWORD m_flEnvWetnessDryingAmount;
} CMapInfo;

inline struct C_BaseGrenadeOffsets {
	DWORD m_bHasWarnedAI;
	DWORD m_bIsSmokeGrenade;
	DWORD m_bIsLive;
	DWORD m_DmgRadius;
	DWORD m_flDetonateTime;
	DWORD m_flWarnAITime;
	DWORD m_flDamage;
	DWORD m_iszBounceSound;
	DWORD m_ExplosionSound;
	DWORD m_hThrower;
	DWORD m_flNextAttack;
	DWORD m_hOriginalThrower;
} C_BaseGrenade;

inline struct C_PlayerSprayDecalOffsets {
	DWORD m_nUniqueID;
	DWORD m_unAccountID;
	DWORD m_unTraceID;
	DWORD m_rtGcTime;
	DWORD m_vecEndPos;
	DWORD m_vecStart;
	DWORD m_vecLeft;
	DWORD m_vecNormal;
	DWORD m_nPlayer;
	DWORD m_nEntity;
	DWORD m_nHitbox;
	DWORD m_flCreationTime;
	DWORD m_nTintID;
	DWORD m_nVersion;
	DWORD m_ubSignature;
	DWORD m_SprayRenderHelper;
} C_PlayerSprayDecal;

inline struct CEntityIdentityOffsets {
	DWORD m_nameStringableIndex;
	DWORD m_name;
	DWORD m_designerName;
	DWORD m_flags;
	DWORD m_worldGroupId;
	DWORD m_fDataObjectTypes;
	DWORD m_PathIndex;
	DWORD m_pPrev;
	DWORD m_pNext;
	DWORD m_pPrevByClass;
	DWORD m_pNextByClass;
} CEntityIdentity;

inline struct CPulseCell_LimitCount__Criteria_tOffsets {
	DWORD m_bLimitCountPasses;
} CPulseCell_LimitCount__Criteria_t;

inline struct CBasePlayerVDataOffsets {
	DWORD m_sModelName;
	DWORD m_flHeadDamageMultiplier;
	DWORD m_flChestDamageMultiplier;
	DWORD m_flStomachDamageMultiplier;
	DWORD m_flArmDamageMultiplier;
	DWORD m_flLegDamageMultiplier;
	DWORD m_flHoldBreathTime;
	DWORD m_flDrowningDamageInterval;
	DWORD m_nDrowningDamageInitial;
	DWORD m_nDrowningDamageMax;
	DWORD m_nWaterSpeed;
	DWORD m_flUseRange;
	DWORD m_flUseAngleTolerance;
	DWORD m_flCrouchTime;
} CBasePlayerVData;

inline struct CCSGameModeRules_DeathmatchOffsets {
	DWORD m_flDMBonusStartTime;
	DWORD m_flDMBonusTimeLength;
	DWORD m_sDMBonusWeapon;
} CCSGameModeRules_Deathmatch;

inline struct CPulseCell_CursorQueueOffsets {
	DWORD m_nCursorsAllowedToRunParallel;
} CPulseCell_CursorQueue;

inline struct C_SpriteOffsets {
	DWORD m_hSpriteMaterial;
	DWORD m_hAttachedToEntity;
	DWORD m_nAttachment;
	DWORD m_flSpriteFramerate;
	DWORD m_flFrame;
	DWORD m_flDieTime;
	DWORD m_nBrightness;
	DWORD m_flBrightnessDuration;
	DWORD m_flSpriteScale;
	DWORD m_flScaleDuration;
	DWORD m_bWorldSpaceScale;
	DWORD m_flGlowProxySize;
	DWORD m_flHDRColorScale;
	DWORD m_flLastTime;
	DWORD m_flMaxFrame;
	DWORD m_flStartScale;
	DWORD m_flDestScale;
	DWORD m_flScaleTimeStart;
	DWORD m_nStartBrightness;
	DWORD m_nDestBrightness;
	DWORD m_flBrightnessTimeStart;
	DWORD m_nSpriteWidth;
	DWORD m_nSpriteHeight;
} C_Sprite;

inline struct C_CsmFovOverrideOffsets {
	DWORD m_cameraName;
	DWORD m_flCsmFovOverrideValue;
} C_CsmFovOverride;

inline struct C_PhysicsPropOffsets {
	DWORD m_bAwake;
} C_PhysicsProp;

inline struct CFilterTeamOffsets {
	DWORD m_iFilterTeam;
} CFilterTeam;

inline struct CBasePlayerWeaponVDataOffsets {
	DWORD m_szWorldModel;
	DWORD m_sToolsOnlyOwnerModelName;
	DWORD m_bBuiltRightHanded;
	DWORD m_bAllowFlipping;
	DWORD m_sMuzzleAttachment;
	DWORD m_szMuzzleFlashParticle;
	DWORD m_szMuzzleFlashParticleConfig;
	DWORD m_szBarrelSmokeParticle;
	DWORD m_nMuzzleSmokeShotThreshold;
	DWORD m_flMuzzleSmokeTimeout;
	DWORD m_flMuzzleSmokeDecrementRate;
	DWORD m_bLinkedCooldowns;
	DWORD m_iFlags;
	DWORD m_nPrimaryAmmoType;
	DWORD m_nSecondaryAmmoType;
	DWORD m_iMaxClip1;
	DWORD m_iMaxClip2;
	DWORD m_iDefaultClip1;
	DWORD m_iDefaultClip2;
	DWORD m_bReserveAmmoAsClips;
	DWORD m_bTreatAsSingleClip;
	DWORD m_bKeepLoadedAmmo;
	DWORD m_iWeight;
	DWORD m_bAutoSwitchTo;
	DWORD m_bAutoSwitchFrom;
	DWORD m_iRumbleEffect;
	DWORD m_flDropSpeed;
	DWORD m_iSlot;
	DWORD m_iPosition;
	DWORD m_aShootSounds;
} CBasePlayerWeaponVData;

inline struct C_PointClientUIWorldPanelOffsets {
	DWORD m_bForceRecreateNextUpdate;
	DWORD m_bMoveViewToPlayerNextThink;
	DWORD m_bCheckCSSClasses;
	DWORD m_anchorDeltaTransform;
	DWORD m_pOffScreenIndicator;
	DWORD m_bIgnoreInput;
	DWORD m_bLit;
	DWORD m_bFollowPlayerAcrossTeleport;
	DWORD m_flWidth;
	DWORD m_flHeight;
	DWORD m_flDPI;
	DWORD m_flInteractDistance;
	DWORD m_flDepthOffset;
	DWORD m_unOwnerContext;
	DWORD m_unHorizontalAlign;
	DWORD m_unVerticalAlign;
	DWORD m_unOrientation;
	DWORD m_bAllowInteractionFromAllSceneWorlds;
	DWORD m_vecCSSClasses;
	DWORD m_bOpaque;
	DWORD m_bNoDepth;
	DWORD m_bVisibleWhenParentNoDraw;
	DWORD m_bRenderBackface;
	DWORD m_bUseOffScreenIndicator;
	DWORD m_bExcludeFromSaveGames;
	DWORD m_bGrabbable;
	DWORD m_bOnlyRenderToTexture;
	DWORD m_bDisableMipGen;
	DWORD m_nExplicitImageLayout;
} C_PointClientUIWorldPanel;

inline struct C_EntityFlameOffsets {
	DWORD m_hEntAttached;
	DWORD m_hOldAttached;
	DWORD m_bCheapEffect;
} C_EntityFlame;

inline struct CBasePlayerControllerOffsets {
	DWORD m_CommandContext;
	DWORD m_nInButtonsWhichAreToggles;
	DWORD m_nTickBase;
	DWORD m_hPawn;
	DWORD m_bKnownTeamMismatch;
	DWORD m_hPredictedPawn;
	DWORD m_nSplitScreenSlot;
	DWORD m_hSplitOwner;
	DWORD m_hSplitScreenPlayers;
	DWORD m_bIsHLTV;
	DWORD m_iConnected;
	DWORD m_iszPlayerName;
	DWORD m_steamID;
	DWORD m_bIsLocalPlayerController;
	DWORD m_bNoClipEnabled;
	DWORD m_iDesiredFOV;
	DWORD m_szNetworkIDString;
	DWORD m_fLerpTime;
	DWORD m_bLagCompensation;
	DWORD m_bPredict;
	DWORD m_bIsLowViolence;
	DWORD m_bGamePaused;
	DWORD m_iIgnoreGlobalChat;
	DWORD m_flLastPlayerTalkTime;
	DWORD m_flLastEntitySteadyState;
	DWORD m_nAvailableEntitySteadyState;
	DWORD m_bHasAnySteadyStateEnts;
} CBasePlayerController;

inline struct EventSimpleLoopFrameUpdate_tOffsets {
	DWORD m_LoopState;
	DWORD m_flRealTime;
	DWORD m_flFrameTime;
} EventSimpleLoopFrameUpdate_t;

inline struct EventPostAdvanceTick_tOffsets {
	DWORD m_nCurrentTick;
	DWORD m_nCurrentTickThisFrame;
	DWORD m_nTotalTicksThisFrame;
	DWORD m_nTotalTicks;
} EventPostAdvanceTick_t;

inline struct CEntityIOOutputOffsets {
	DWORD m_Value;
} CEntityIOOutput;

inline struct EventClientSceneSystemThreadStateChange_tOffsets {
	DWORD m_bThreadsActive;
} EventClientSceneSystemThreadStateChange_t;

inline struct EventClientOutput_tOffsets {
	DWORD m_LoopState;
	DWORD m_flRenderTime;
	DWORD m_flRealTime;
	DWORD m_flRenderFrameTimeUnbounded;
	DWORD m_bRenderOnly;
} EventClientOutput_t;

inline struct CEntityComponentHelperOffsets {
	DWORD m_flags;
	DWORD m_pInfo;
	DWORD m_nPriority;
	DWORD m_pNext;
} CEntityComponentHelper;

inline struct GameTime_tOffsets {
	DWORD m_Value;
} GameTime_t;

inline struct CNetworkVarChainerOffsets {
	DWORD m_PathIndex;
} CNetworkVarChainer;

inline struct EventClientPostOutput_tOffsets {
	DWORD m_LoopState;
	DWORD m_flRenderTime;
	DWORD m_flRenderFrameTime;
	DWORD m_flRenderFrameTimeUnbounded;
	DWORD m_bRenderOnly;
} EventClientPostOutput_t;

inline struct GameTick_tOffsets {
	DWORD m_Value;
} GameTick_t;

inline struct EventClientPollInput_tOffsets {
	DWORD m_LoopState;
	DWORD m_flRealTime;
} EventClientPollInput_t;

inline struct EventPreDataUpdate_tOffsets {
	DWORD m_nCount;
} EventPreDataUpdate_t;

inline struct EventClientProcessGameInput_tOffsets {
	DWORD m_LoopState;
	DWORD m_flRealTime;
	DWORD m_flFrameTime;
} EventClientProcessGameInput_t;

inline struct EventFrameBoundary_tOffsets {
	DWORD m_flFrameTime;
} EventFrameBoundary_t;

inline struct EventAppShutdown_tOffsets {
	DWORD m_nDummy0;
} EventAppShutdown_t;

inline struct EventProfileStorageAvailable_tOffsets {
	DWORD m_nSplitScreenSlot;
} EventProfileStorageAvailable_t;

inline struct EventPostDataUpdate_tOffsets {
	DWORD m_nCount;
} EventPostDataUpdate_t;

inline struct EventClientProcessNetworking_tOffsets {
	DWORD m_nTickCount;
} EventClientProcessNetworking_t;

inline struct EventAdvanceTick_tOffsets {
	DWORD m_nCurrentTick;
	DWORD m_nCurrentTickThisFrame;
	DWORD m_nTotalTicksThisFrame;
	DWORD m_nTotalTicks;
} EventAdvanceTick_t;

inline struct EventClientPreOutput_tOffsets {
	DWORD m_LoopState;
	DWORD m_flRenderTime;
	DWORD m_flRenderFrameTime;
	DWORD m_flRenderFrameTimeUnbounded;
	DWORD m_flRealTime;
	DWORD m_bRenderOnly;
} EventClientPreOutput_t;

inline struct EventClientFrameSimulate_tOffsets {
	DWORD m_LoopState;
	DWORD m_flRealTime;
	DWORD m_flFrameTime;
	DWORD m_bScheduleSendTickPacket;
} EventClientFrameSimulate_t;

inline struct EventSetTime_tOffsets {
	DWORD m_LoopState;
	DWORD m_nClientOutputFrames;
	DWORD m_flRealTime;
	DWORD m_flRenderTime;
	DWORD m_flRenderFrameTime;
	DWORD m_flRenderFrameTimeUnbounded;
	DWORD m_flRenderFrameTimeUnscaled;
	DWORD m_flTickRemainder;
} EventSetTime_t;

inline struct EventSimulate_tOffsets {
	DWORD m_LoopState;
	DWORD m_bFirstTick;
	DWORD m_bLastTick;
} EventSimulate_t;

inline struct EntComponentInfo_tOffsets {
	DWORD m_pName;
	DWORD m_pCPPClassname;
	DWORD m_pNetworkDataReferencedDescription;
	DWORD m_pNetworkDataReferencedPtrPropDescription;
	DWORD m_nRuntimeIndex;
	DWORD m_nFlags;
	DWORD m_pBaseClassComponentHelper;
} EntComponentInfo_t;

inline struct EngineLoopState_tOffsets {
	DWORD m_nPlatWindowWidth;
	DWORD m_nPlatWindowHeight;
	DWORD m_nRenderWidth;
	DWORD m_nRenderHeight;
} EngineLoopState_t;

inline struct EventClientPollNetworking_tOffsets {
	DWORD m_nTickCount;
} EventClientPollNetworking_t;

inline struct EventClientProcessInput_tOffsets {
	DWORD m_LoopState;
	DWORD m_flRealTime;
	DWORD m_flTickInterval;
	DWORD m_flTickStartTime;
} EventClientProcessInput_t;

inline struct EmptyTestScriptOffsets {
	DWORD m_hTest;
} EmptyTestScript;

inline struct CAnimScriptBaseOffsets {
	DWORD m_bIsValid;
} CAnimScriptBase;

inline struct animationsystem_dllOffsets {
	DWORD AnimationSystemUtils_001;
	DWORD AnimationSystem_001;
} animationsystem_dll;

inline struct client_dllOffsets {
	DWORD ClientToolsInfo_001;
	DWORD EmptyWorldService001_Client;
	DWORD GameClientExports001;
	DWORD LegacyGameUI001;
	DWORD Source2Client002;
	DWORD Source2ClientConfig001;
	DWORD Source2ClientPrediction001;
	DWORD Source2ClientUI001;
	DWORD dwCSGOInput;
	DWORD dwEntityList;
	DWORD dwGameEntitySystem;
	DWORD dwGameEntitySystem_highestEntityIndex;
	DWORD dwGameRules;
	DWORD dwGlobalVars;
	DWORD dwGlowManager;
	DWORD dwLocalPlayerController;
	DWORD dwLocalPlayerPawn;
	DWORD dwPlantedC4;
	DWORD dwPrediction;
	DWORD dwSensitivity;
	DWORD dwSensitivity_sensitivity;
	DWORD dwViewAngles;
	DWORD dwViewMatrix;
	DWORD dwViewRender;
	DWORD dwWeaponC4;
} client_dll;

inline struct engine2_dllOffsets {
	DWORD BenchmarkService001;
	DWORD BugService001;
	DWORD ClientServerEngineLoopService_001;
	DWORD EngineGameUI001;
	DWORD EngineServiceMgr001;
	DWORD GameEventSystemClientV001;
	DWORD GameEventSystemServerV001;
	DWORD GameResourceServiceClientV001;
	DWORD GameResourceServiceServerV001;
	DWORD GameUIService_001;
	DWORD HostStateMgr001;
	DWORD INETSUPPORT_001;
	DWORD InputService_001;
	DWORD KeyValueCache001;
	DWORD MapListService_001;
	DWORD NetworkClientService_001;
	DWORD NetworkP2PService_001;
	DWORD NetworkServerService_001;
	DWORD NetworkService_001;
	DWORD RenderService_001;
	DWORD ScreenshotService001;
	DWORD SimpleEngineLoopService_001;
	DWORD SoundService_001;
	DWORD Source2EngineToClient001;
	DWORD Source2EngineToClientStringTable001;
	DWORD Source2EngineToServer001;
	DWORD Source2EngineToServerStringTable001;
	DWORD SplitScreenService_001;
	DWORD StatsService_001;
	DWORD ToolService_001;
	DWORD VENGINE_GAMEUIFUNCS_VERSION005;
	DWORD VProfService_001;
	DWORD dwBuildNumber;
	DWORD dwNetworkGameClient;
	DWORD dwNetworkGameClient_clientTickCount;
	DWORD dwNetworkGameClient_deltaTick;
	DWORD dwNetworkGameClient_isBackgroundMap;
	DWORD dwNetworkGameClient_localPlayer;
	DWORD dwNetworkGameClient_maxClients;
	DWORD dwNetworkGameClient_serverTickCount;
	DWORD dwNetworkGameClient_signOnState;
	DWORD dwWindowHeight;
	DWORD dwWindowWidth;
} engine2_dll;

inline struct filesystem_stdio_dllOffsets {
	DWORD VAsyncFileSystem2_001;
	DWORD VFileSystem017;
} filesystem_stdio_dll;

inline struct host_dllOffsets {
	DWORD DebugDrawQueueManager001;
	DWORD GameModelInfo001;
	DWORD GameSystem2HostHook;
	DWORD HostUtils001;
	DWORD PredictionDiffManager001;
	DWORD SaveRestoreDataVersion001;
	DWORD SinglePlayerSharedMemory001;
	DWORD Source2Host001;
} host_dll;

inline struct imemanager_dllOffsets {
	DWORD IMEManager001;
} imemanager_dll;

inline struct inputsystem_dllOffsets {
	DWORD InputStackSystemVersion001;
	DWORD InputSystemVersion001;
	DWORD dwInputSystem;
} inputsystem_dll;

inline struct localize_dllOffsets {
	DWORD Localize_001;
} localize_dll;

inline struct matchmaking_dllOffsets {
	DWORD GameTypes001;
	DWORD MATCHFRAMEWORK_001;
	DWORD dwGameTypes;
} matchmaking_dll;

inline struct materialsystem2_dllOffsets {
	DWORD FontManager_001;
	DWORD MaterialUtils_001;
	DWORD PostProcessingSystem_001;
	DWORD TextLayout_001;
	DWORD VMaterialSystem2_001;
} materialsystem2_dll;

inline struct meshsystem_dllOffsets {
	DWORD MeshSystem001;
} meshsystem_dll;

inline struct navsystem_dllOffsets {
	DWORD NavSystem001;
} navsystem_dll;

inline struct networksystem_dllOffsets {
	DWORD FlattenedSerializersVersion001;
	DWORD NetworkMessagesVersion001;
	DWORD NetworkSystemVersion001;
	DWORD SerializedEntitiesVersion001;
} networksystem_dll;

inline struct panorama_dllOffsets {
	DWORD PanoramaUIEngine001;
} panorama_dll;

inline struct panorama_text_pango_dllOffsets {
	DWORD PanoramaTextServices001;
} panorama_text_pango_dll;

inline struct panoramauiclient_dllOffsets {
	DWORD PanoramaUIClient001;
} panoramauiclient_dll;

inline struct particles_dllOffsets {
	DWORD ParticleSystemMgr003;
} particles_dll;

inline struct pulse_system_dllOffsets {
	DWORD IPulseSystem_001;
} pulse_system_dll;

inline struct rendersystemdx11_dllOffsets {
	DWORD RenderDeviceMgr001;
	DWORD RenderUtils_001;
	DWORD VRenderDeviceMgrBackdoor001;
} rendersystemdx11_dll;

inline struct resourcesystem_dllOffsets {
	DWORD ResourceSystem013;
} resourcesystem_dll;

inline struct scenefilecache_dllOffsets {
	DWORD ResponseRulesCache001;
	DWORD SceneFileCache002;
} scenefilecache_dll;

inline struct scenesystem_dllOffsets {
	DWORD RenderingPipelines_001;
	DWORD SceneSystem_002;
	DWORD SceneUtils_001;
} scenesystem_dll;

inline struct schemasystem_dllOffsets {
	DWORD SchemaSystem_001;
} schemasystem_dll;

inline struct server_dllOffsets {
	DWORD EmptyWorldService001_Server;
	DWORD EntitySubclassUtilsV001;
	DWORD NavGameTest001;
	DWORD ServerToolsInfo_001;
	DWORD Source2GameClients001;
	DWORD Source2GameDirector001;
	DWORD Source2GameEntities001;
	DWORD Source2Server001;
	DWORD Source2ServerConfig001;
	DWORD customnavsystem001;
} server_dll;

inline struct soundsystem_dllOffsets {
	DWORD SoundOpSystem001;
	DWORD SoundOpSystemEdit001;
	DWORD SoundSystem001;
	DWORD VMixEditTool001;
	DWORD dwSoundSystem;
	DWORD dwSoundSystem_engineViewData;
} soundsystem_dll;

inline struct steamaudio_dllOffsets {
	DWORD SteamAudio001;
} steamaudio_dll;

inline struct steamclient64_dllOffsets {
	DWORD CLIENTENGINE_INTERFACE_VERSION005;
	DWORD IVALIDATE001;
	DWORD SteamClient006;
	DWORD SteamClient007;
	DWORD SteamClient008;
	DWORD SteamClient009;
	DWORD SteamClient010;
	DWORD SteamClient011;
	DWORD SteamClient012;
	DWORD SteamClient013;
	DWORD SteamClient014;
	DWORD SteamClient015;
	DWORD SteamClient016;
	DWORD SteamClient017;
	DWORD SteamClient018;
	DWORD SteamClient019;
	DWORD SteamClient020;
	DWORD SteamClient021;
	DWORD SteamClient022;
	DWORD SteamClient023;
	DWORD p2pvoice002;
	DWORD p2pvoicesingleton002;
} steamclient64_dll;

inline struct tier0_dllOffsets {
	DWORD TestScriptMgr001;
	DWORD VEngineCvar007;
	DWORD VProcessUtils002;
	DWORD VStringTokenSystem001;
} tier0_dll;

inline struct v8system_dllOffsets {
	DWORD Source2V8System001;
} v8system_dll;

inline struct vconcomm_dllOffsets {
	DWORD VConComm001;
} vconcomm_dll;

inline struct vphysics2_dllOffsets {
	DWORD VPhysics2_Handle_Interface_001;
	DWORD VPhysics2_Interface_001;
} vphysics2_dll;

inline struct vscript_dllOffsets {
	DWORD VScriptManager010;
} vscript_dll;

inline struct vstdlib_s64_dllOffsets {
	DWORD IVALIDATE001;
	DWORD VEngineCvar002;
} vstdlib_s64_dll;

inline struct worldrenderer_dllOffsets {
	DWORD WorldRendererMgr001;
} worldrenderer_dll;

inline struct MaterialParam_tOffsets {
	DWORD m_name;
} MaterialParam_t;

inline struct MaterialParamVector_tOffsets {
	DWORD m_value;
} MaterialParamVector_t;

inline struct MaterialParamString_tOffsets {
	DWORD m_value;
} MaterialParamString_t;

inline struct PostProcessingResource_tOffsets {
	DWORD m_bHasTonemapParams;
	DWORD m_toneMapParams;
	DWORD m_bHasBloomParams;
	DWORD m_bloomParams;
	DWORD m_bHasVignetteParams;
	DWORD m_vignetteParams;
	DWORD m_bHasLocalContrastParams;
	DWORD m_localConstrastParams;
	DWORD m_nColorCorrectionVolumeDim;
	DWORD m_colorCorrectionVolumeData;
	DWORD m_bHasColorCorrection;
	DWORD m_bHasFogScatteringParams;
	DWORD m_fogScatteringParams;
} PostProcessingResource_t;

inline struct MaterialParamInt_tOffsets {
	DWORD m_nValue;
} MaterialParamInt_t;

inline struct PostProcessingVignetteParameters_tOffsets {
	DWORD m_flVignetteStrength;
	DWORD m_vCenter;
	DWORD m_flRadius;
	DWORD m_flRoundness;
	DWORD m_flFeather;
	DWORD m_vColorTint;
} PostProcessingVignetteParameters_t;

inline struct PostProcessingLocalContrastParameters_tOffsets {
	DWORD m_flLocalContrastStrength;
	DWORD m_flLocalContrastEdgeStrength;
	DWORD m_flLocalContrastVignetteStart;
	DWORD m_flLocalContrastVignetteEnd;
	DWORD m_flLocalContrastVignetteBlur;
} PostProcessingLocalContrastParameters_t;

inline struct PostProcessingTonemapParameters_tOffsets {
	DWORD m_flExposureBias;
	DWORD m_flShoulderStrength;
	DWORD m_flLinearStrength;
	DWORD m_flLinearAngle;
	DWORD m_flToeStrength;
	DWORD m_flToeNum;
	DWORD m_flToeDenom;
	DWORD m_flWhitePoint;
	DWORD m_flLuminanceSource;
	DWORD m_flExposureBiasShadows;
	DWORD m_flExposureBiasHighlights;
	DWORD m_flMinShadowLum;
	DWORD m_flMaxShadowLum;
	DWORD m_flMinHighlightLum;
	DWORD m_flMaxHighlightLum;
} PostProcessingTonemapParameters_t;

inline struct PostProcessingFogScatteringParameters_tOffsets {
	DWORD m_fRadius;
	DWORD m_fScale;
	DWORD m_fCubemapScale;
	DWORD m_fVolumetricScale;
	DWORD m_fGradientScale;
} PostProcessingFogScatteringParameters_t;

inline struct MaterialParamBuffer_tOffsets {
	DWORD m_value;
} MaterialParamBuffer_t;

inline struct MaterialResourceData_tOffsets {
	DWORD m_materialName;
	DWORD m_shaderName;
	DWORD m_intParams;
	DWORD m_floatParams;
	DWORD m_vectorParams;
	DWORD m_textureParams;
	DWORD m_dynamicParams;
	DWORD m_dynamicTextureParams;
	DWORD m_intAttributes;
	DWORD m_floatAttributes;
	DWORD m_vectorAttributes;
	DWORD m_textureAttributes;
	DWORD m_stringAttributes;
	DWORD m_renderAttributesUsed;
} MaterialResourceData_t;

inline struct PostProcessingBloomParameters_tOffsets {
	DWORD m_blendMode;
	DWORD m_flBloomStrength;
	DWORD m_flScreenBloomStrength;
	DWORD m_flBlurBloomStrength;
	DWORD m_flBloomThreshold;
	DWORD m_flBloomThresholdWidth;
	DWORD m_flSkyboxBloomStrength;
	DWORD m_flBloomStartValue;
	DWORD m_flComputeBloomStrength;
	DWORD m_flComputeBloomThreshold;
	DWORD m_flComputeBloomRadius;
	DWORD m_flComputeBloomEffectsScale;
	DWORD m_flComputeBloomLensDirtStrength;
	DWORD m_flComputeBloomLensDirtBlackLevel;
	DWORD m_flBlurWeight;
	DWORD m_vBlurTint;
} PostProcessingBloomParameters_t;

inline struct MaterialParamFloat_tOffsets {
	DWORD m_flValue;
} MaterialParamFloat_t;

inline struct MaterialParamTexture_tOffsets {
	DWORD m_pValue;
} MaterialParamTexture_t;

inline struct ChangeAccessorFieldPathIndex_tOffsets {
	DWORD m_Value;
} ChangeAccessorFieldPathIndex_t;

inline struct ParticleAttributeIndex_tOffsets {
	DWORD m_Value;
} ParticleAttributeIndex_t;

inline struct C_OP_RemapGravityToVectorOffsets {
	DWORD m_vInput1;
	DWORD m_nOutputField;
	DWORD m_nSetMethod;
	DWORD m_bNormalizedOutput;
} C_OP_RemapGravityToVector;

inline struct C_OP_DecayOffsets {
	DWORD m_bRopeDecay;
	DWORD m_bForcePreserveParticleOrder;
} C_OP_Decay;

inline struct C_OP_RenderDeferredLightOffsets {
	DWORD m_bUseAlphaTestWindow;
	DWORD m_bUseTexture;
	DWORD m_flRadiusScale;
	DWORD m_flAlphaScale;
	DWORD m_nAlpha2Field;
	DWORD m_vecColorScale;
	DWORD m_nColorBlendType;
	DWORD m_flLightDistance;
	DWORD m_flStartFalloff;
	DWORD m_flDistanceFalloff;
	DWORD m_flSpotFoV;
	DWORD m_nAlphaTestPointField;
	DWORD m_nAlphaTestRangeField;
	DWORD m_nAlphaTestSharpnessField;
	DWORD m_hTexture;
	DWORD m_nHSVShiftControlPoint;
} C_OP_RenderDeferredLight;

inline struct C_OP_RemapSpeedtoCPOffsets {
	DWORD m_nInControlPointNumber;
	DWORD m_nOutControlPointNumber;
	DWORD m_nField;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_bUseDeltaV;
} C_OP_RemapSpeedtoCP;

inline struct C_OP_RemapTransformToVelocityOffsets {
	DWORD m_TransformInput;
} C_OP_RemapTransformToVelocity;

inline struct CollisionGroupContext_tOffsets {
	DWORD m_nCollisionGroupNumber;
} CollisionGroupContext_t;

inline struct CParticleFunctionPreEmissionOffsets {
	DWORD m_bRunOnce;
} CParticleFunctionPreEmission;

inline struct C_OP_FadeOutSimpleOffsets {
	DWORD m_flFadeOutTime;
	DWORD m_nFieldOutput;
} C_OP_FadeOutSimple;

inline struct C_OP_SpringToVectorConstraintOffsets {
	DWORD m_flRestLength;
	DWORD m_flMinDistance;
	DWORD m_flMaxDistance;
	DWORD m_flRestingLength;
	DWORD m_vecAnchorVector;
} C_OP_SpringToVectorConstraint;

inline struct C_OP_RenderRopesOffsets {
	DWORD m_bEnableFadingAndClamping;
	DWORD m_flMinSize;
	DWORD m_flMaxSize;
	DWORD m_flStartFadeSize;
	DWORD m_flEndFadeSize;
	DWORD m_flStartFadeDot;
	DWORD m_flEndFadeDot;
	DWORD m_flRadiusTaper;
	DWORD m_nMinTesselation;
	DWORD m_nMaxTesselation;
	DWORD m_flTessScale;
	DWORD m_flTextureVWorldSize;
	DWORD m_flTextureVScrollRate;
	DWORD m_flTextureVOffset;
	DWORD m_nTextureVParamsCP;
	DWORD m_bClampV;
	DWORD m_nScaleCP1;
	DWORD m_nScaleCP2;
	DWORD m_flScaleVSizeByControlPointDistance;
	DWORD m_flScaleVScrollByControlPointDistance;
	DWORD m_flScaleVOffsetByControlPointDistance;
	DWORD m_bUseScalarForTextureCoordinate;
	DWORD m_nScalarFieldForTextureCoordinate;
	DWORD m_flScalarAttributeTextureCoordScale;
	DWORD m_bReverseOrder;
	DWORD m_bClosedLoop;
	DWORD m_nSplitField;
	DWORD m_bSortBySegmentID;
	DWORD m_nOrientationType;
	DWORD m_nVectorFieldForOrientation;
	DWORD m_bDrawAsOpaque;
	DWORD m_bGenerateNormals;
} C_OP_RenderRopes;

inline struct C_INIT_StatusEffectCitadelOffsets {
	DWORD m_flSFXColorWarpAmount;
	DWORD m_flSFXNormalAmount;
	DWORD m_flSFXMetalnessAmount;
	DWORD m_flSFXRoughnessAmount;
	DWORD m_flSFXSelfIllumAmount;
	DWORD m_flSFXSScale;
	DWORD m_flSFXSScrollX;
	DWORD m_flSFXSScrollY;
	DWORD m_flSFXSScrollZ;
	DWORD m_flSFXSOffsetX;
	DWORD m_flSFXSOffsetY;
	DWORD m_flSFXSOffsetZ;
	DWORD m_nDetailCombo;
	DWORD m_flSFXSDetailAmount;
	DWORD m_flSFXSDetailScale;
	DWORD m_flSFXSDetailScrollX;
	DWORD m_flSFXSDetailScrollY;
	DWORD m_flSFXSDetailScrollZ;
	DWORD m_flSFXSUseModelUVs;
} C_INIT_StatusEffectCitadel;

inline struct C_OP_RenderSoundOffsets {
	DWORD m_flDurationScale;
	DWORD m_flSndLvlScale;
	DWORD m_flPitchScale;
	DWORD m_flVolumeScale;
	DWORD m_nSndLvlField;
	DWORD m_nDurationField;
	DWORD m_nPitchField;
	DWORD m_nVolumeField;
	DWORD m_nChannel;
	DWORD m_nCPReference;
	DWORD m_pszSoundName;
	DWORD m_bSuppressStopSoundEvent;
} C_OP_RenderSound;

inline struct CParticleVisibilityInputsOffsets {
	DWORD m_flCameraBias;
	DWORD m_nCPin;
	DWORD m_flProxyRadius;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flInputPixelVisFade;
	DWORD m_flNoPixelVisibilityFallback;
	DWORD m_flDistanceInputMin;
	DWORD m_flDistanceInputMax;
	DWORD m_flDotInputMin;
	DWORD m_flDotInputMax;
	DWORD m_bDotCPAngles;
	DWORD m_bDotCameraAngles;
	DWORD m_flAlphaScaleMin;
	DWORD m_flAlphaScaleMax;
	DWORD m_flRadiusScaleMin;
	DWORD m_flRadiusScaleMax;
	DWORD m_flRadiusScaleFOVBase;
	DWORD m_bRightEye;
} CParticleVisibilityInputs;

inline struct C_OP_SetControlPointsToParticleOffsets {
	DWORD m_nChildGroupID;
	DWORD m_nFirstControlPoint;
	DWORD m_nNumControlPoints;
	DWORD m_nFirstSourcePoint;
	DWORD m_bReverse;
	DWORD m_bSetOrientation;
	DWORD m_nOrientationMode;
	DWORD m_nSetParent;
} C_OP_SetControlPointsToParticle;

inline struct C_OP_RemapCPVelocityToVectorOffsets {
	DWORD m_nControlPoint;
	DWORD m_nFieldOutput;
	DWORD m_flScale;
	DWORD m_bNormalize;
} C_OP_RemapCPVelocityToVector;

inline struct C_OP_PointVectorAtNextParticleOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flInterpolation;
} C_OP_PointVectorAtNextParticle;

inline struct ParticlePreviewBodyGroup_tOffsets {
	DWORD m_bodyGroupName;
	DWORD m_nValue;
} ParticlePreviewBodyGroup_t;

inline struct C_OP_OscillateScalarSimpleOffsets {
	DWORD m_Rate;
	DWORD m_Frequency;
	DWORD m_nField;
	DWORD m_flOscMult;
	DWORD m_flOscAdd;
} C_OP_OscillateScalarSimple;

inline struct C_INIT_StatusEffectOffsets {
	DWORD m_nDetail2Combo;
	DWORD m_flDetail2Rotation;
	DWORD m_flDetail2Scale;
	DWORD m_flDetail2BlendFactor;
	DWORD m_flColorWarpIntensity;
	DWORD m_flDiffuseWarpBlendToFull;
	DWORD m_flEnvMapIntensity;
	DWORD m_flAmbientScale;
	DWORD m_specularColor;
	DWORD m_flSpecularScale;
	DWORD m_flSpecularExponent;
	DWORD m_flSpecularExponentBlendToFull;
	DWORD m_flSpecularBlendToFull;
	DWORD m_rimLightColor;
	DWORD m_flRimLightScale;
	DWORD m_flReflectionsTintByBaseBlendToNone;
	DWORD m_flMetalnessBlendToFull;
	DWORD m_flSelfIllumBlendToFull;
} C_INIT_StatusEffect;

inline struct C_INIT_RtEnvCullOffsets {
	DWORD m_vecTestDir;
	DWORD m_vecTestNormal;
	DWORD m_bUseVelocity;
	DWORD m_bCullOnMiss;
	DWORD m_bLifeAdjust;
	DWORD m_RtEnvName;
	DWORD m_nRTEnvCP;
	DWORD m_nComponent;
} C_INIT_RtEnvCull;

inline struct C_OP_ConstrainDistanceOffsets {
	DWORD m_fMinDistance;
	DWORD m_fMaxDistance;
	DWORD m_nControlPointNumber;
	DWORD m_CenterOffset;
	DWORD m_bGlobalCenter;
} C_OP_ConstrainDistance;

inline struct C_INIT_RandomVectorOffsets {
	DWORD m_vecMin;
	DWORD m_vecMax;
	DWORD m_nFieldOutput;
	DWORD m_randomnessParameters;
} C_INIT_RandomVector;

inline struct C_INIT_InitialVelocityNoiseOffsets {
	DWORD m_vecAbsVal;
	DWORD m_vecAbsValInv;
	DWORD m_vecOffsetLoc;
	DWORD m_flOffset;
	DWORD m_vecOutputMin;
	DWORD m_vecOutputMax;
	DWORD m_flNoiseScale;
	DWORD m_flNoiseScaleLoc;
	DWORD m_TransformInput;
	DWORD m_bIgnoreDt;
} C_INIT_InitialVelocityNoise;

inline struct ParticleChildrenInfo_tOffsets {
	DWORD m_ChildRef;
	DWORD m_flDelay;
	DWORD m_bEndCap;
	DWORD m_bDisableChild;
	DWORD m_nDetailLevel;
} ParticleChildrenInfo_t;

inline struct C_OP_RemapScalarOnceTimedOffsets {
	DWORD m_bProportional;
	DWORD m_nFieldInput;
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_flRemapTime;
} C_OP_RemapScalarOnceTimed;

inline struct C_OP_PlaneCullOffsets {
	DWORD m_nPlaneControlPoint;
	DWORD m_vecPlaneDirection;
	DWORD m_bLocalSpace;
	DWORD m_flPlaneOffset;
} C_OP_PlaneCull;

inline struct C_INIT_VelocityRandomOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_fSpeedMin;
	DWORD m_fSpeedMax;
	DWORD m_LocalCoordinateSystemSpeedMin;
	DWORD m_LocalCoordinateSystemSpeedMax;
	DWORD m_bIgnoreDT;
	DWORD m_randomnessParameters;
} C_INIT_VelocityRandom;

inline struct C_OP_ModelDampenMovementOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_bBoundBox;
	DWORD m_bOutside;
	DWORD m_bUseBones;
	DWORD m_HitboxSetName;
	DWORD m_vecPosOffset;
	DWORD m_fDrag;
} C_OP_ModelDampenMovement;

inline struct C_OP_TwistAroundAxisOffsets {
	DWORD m_fForceAmount;
	DWORD m_TwistAxis;
	DWORD m_bLocalSpace;
	DWORD m_nControlPointNumber;
} C_OP_TwistAroundAxis;

inline struct C_OP_TeleportBeamOffsets {
	DWORD m_nCPPosition;
	DWORD m_nCPVelocity;
	DWORD m_nCPMisc;
	DWORD m_nCPColor;
	DWORD m_nCPInvalidColor;
	DWORD m_nCPExtraArcData;
	DWORD m_vGravity;
	DWORD m_flArcMaxDuration;
	DWORD m_flSegmentBreak;
	DWORD m_flArcSpeed;
	DWORD m_flAlpha;
} C_OP_TeleportBeam;

inline struct C_OP_RemapExternalWindToCPOffsets {
	DWORD m_nCP;
	DWORD m_nCPOutput;
	DWORD m_vecScale;
	DWORD m_bSetMagnitude;
	DWORD m_nOutVectorField;
} C_OP_RemapExternalWindToCP;

inline struct CBaseRendererSource2Offsets {
	DWORD m_flRadiusScale;
	DWORD m_flAlphaScale;
	DWORD m_flRollScale;
	DWORD m_nAlpha2Field;
	DWORD m_vecColorScale;
	DWORD m_nColorBlendType;
	DWORD m_nShaderType;
	DWORD m_strShaderOverride;
	DWORD m_flCenterXOffset;
	DWORD m_flCenterYOffset;
	DWORD m_flBumpStrength;
	DWORD m_nCropTextureOverride;
	DWORD m_vecTexturesInput;
	DWORD m_flAnimationRate;
	DWORD m_nAnimationType;
	DWORD m_bAnimateInFPS;
	DWORD m_flMotionVectorScaleU;
	DWORD m_flMotionVectorScaleV;
	DWORD m_flSelfIllumAmount;
	DWORD m_flDiffuseAmount;
	DWORD m_flDiffuseClamp;
	DWORD m_nLightingControlPoint;
	DWORD m_nSelfIllumPerParticle;
	DWORD m_nOutputBlendMode;
	DWORD m_bGammaCorrectVertexColors;
	DWORD m_bSaturateColorPreAlphaBlend;
	DWORD m_flAddSelfAmount;
	DWORD m_flDesaturation;
	DWORD m_flOverbrightFactor;
	DWORD m_nHSVShiftControlPoint;
	DWORD m_nFogType;
	DWORD m_flFogAmount;
	DWORD m_bTintByFOW;
	DWORD m_bTintByGlobalLight;
	DWORD m_nPerParticleAlphaReference;
	DWORD m_nPerParticleAlphaRefWindow;
	DWORD m_nAlphaReferenceType;
	DWORD m_flAlphaReferenceSoftness;
	DWORD m_flSourceAlphaValueToMapToZero;
	DWORD m_flSourceAlphaValueToMapToOne;
	DWORD m_bRefract;
	DWORD m_bRefractSolid;
	DWORD m_flRefractAmount;
	DWORD m_nRefractBlurRadius;
	DWORD m_nRefractBlurType;
	DWORD m_bOnlyRenderInEffectsBloomPass;
	DWORD m_bOnlyRenderInEffectsWaterPass;
	DWORD m_bUseMixedResolutionRendering;
	DWORD m_bOnlyRenderInEffecsGameOverlay;
	DWORD m_stencilTestID;
	DWORD m_bStencilTestExclude;
	DWORD m_stencilWriteID;
	DWORD m_bWriteStencilOnDepthPass;
	DWORD m_bWriteStencilOnDepthFail;
	DWORD m_bReverseZBuffering;
	DWORD m_bDisableZBuffering;
	DWORD m_nFeatheringMode;
	DWORD m_flFeatheringMinDist;
	DWORD m_flFeatheringMaxDist;
	DWORD m_flFeatheringFilter;
	DWORD m_flFeatheringDepthMapFilter;
	DWORD m_flDepthBias;
	DWORD m_nSortMethod;
	DWORD m_bBlendFramesSeq0;
	DWORD m_bMaxLuminanceBlendingSequence0;
} CBaseRendererSource2;

inline struct C_OP_OrientTo2dDirectionOffsets {
	DWORD m_flRotOffset;
	DWORD m_flSpinStrength;
	DWORD m_nFieldOutput;
} C_OP_OrientTo2dDirection;

inline struct C_OP_RemapDotProductToCPOffsets {
	DWORD m_nInputCP1;
	DWORD m_nInputCP2;
	DWORD m_nOutputCP;
	DWORD m_nOutVectorField;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
} C_OP_RemapDotProductToCP;

inline struct C_INIT_RemapParticleCountToNamedModelElementScalarOffsets {
	DWORD m_hModel;
	DWORD m_outputMinName;
	DWORD m_outputMaxName;
	DWORD m_bModelFromRenderer;
} C_INIT_RemapParticleCountToNamedModelElementScalar;

inline struct C_OP_RenderTrailsOffsets {
	DWORD m_bEnableFadingAndClamping;
	DWORD m_flStartFadeDot;
	DWORD m_flEndFadeDot;
	DWORD m_nPrevPntSource;
	DWORD m_flMaxLength;
	DWORD m_flMinLength;
	DWORD m_bIgnoreDT;
	DWORD m_flConstrainRadiusToLengthRatio;
	DWORD m_flLengthScale;
	DWORD m_flLengthFadeInTime;
	DWORD m_flRadiusHeadTaper;
	DWORD m_vecHeadColorScale;
	DWORD m_flHeadAlphaScale;
	DWORD m_flRadiusTaper;
	DWORD m_vecTailColorScale;
	DWORD m_flTailAlphaScale;
	DWORD m_nHorizCropField;
	DWORD m_nVertCropField;
	DWORD m_flForwardShift;
	DWORD m_bFlipUVBasedOnPitchYaw;
} C_OP_RenderTrails;

inline struct C_OP_SetControlPointPositionToTimeOfDayValueOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_pszTimeOfDayParameter;
	DWORD m_vecDefaultValue;
} C_OP_SetControlPointPositionToTimeOfDayValue;

inline struct C_OP_DecayMaintainCountOffsets {
	DWORD m_nParticlesToMaintain;
	DWORD m_flDecayDelay;
	DWORD m_nSnapshotControlPoint;
	DWORD m_strSnapshotSubset;
	DWORD m_bLifespanDecay;
	DWORD m_flScale;
	DWORD m_bKillNewest;
} C_OP_DecayMaintainCount;

inline struct C_INIT_RandomModelSequenceOffsets {
	DWORD m_ActivityName;
	DWORD m_SequenceName;
	DWORD m_hModel;
} C_INIT_RandomModelSequence;

inline struct C_OP_ExternalGameImpulseForceOffsets {
	DWORD m_flForceScale;
	DWORD m_bRopes;
	DWORD m_bRopesZOnly;
	DWORD m_bExplosions;
	DWORD m_bParticles;
} C_OP_ExternalGameImpulseForce;

inline struct C_OP_RemapAverageHitboxSpeedtoCPOffsets {
	DWORD m_nInControlPointNumber;
	DWORD m_nOutControlPointNumber;
	DWORD m_nField;
	DWORD m_nHitboxDataType;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_nHeightControlPointNumber;
	DWORD m_vecComparisonVelocity;
	DWORD m_HitboxSetName;
} C_OP_RemapAverageHitboxSpeedtoCP;

inline struct C_INIT_RandomAlphaOffsets {
	DWORD m_nFieldOutput;
	DWORD m_nAlphaMin;
	DWORD m_nAlphaMax;
	DWORD m_flAlphaRandExponent;
} C_INIT_RandomAlpha;

inline struct C_OP_NormalizeVectorOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flScale;
} C_OP_NormalizeVector;

inline struct C_OP_FadeInSimpleOffsets {
	DWORD m_flFadeInTime;
	DWORD m_nFieldOutput;
} C_OP_FadeInSimple;

inline struct C_OP_RepeatedTriggerChildGroupOffsets {
	DWORD m_nChildGroupID;
	DWORD m_flClusterRefireTime;
	DWORD m_flClusterSize;
	DWORD m_flClusterCooldown;
	DWORD m_bLimitChildCount;
} C_OP_RepeatedTriggerChildGroup;

inline struct C_OP_RemapVelocityToVectorOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flScale;
	DWORD m_bNormalize;
} C_OP_RemapVelocityToVector;

inline struct C_INIT_SetHitboxToClosestOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_nDesiredHitbox;
	DWORD m_vecHitBoxScale;
	DWORD m_HitboxSetName;
	DWORD m_bUseBones;
	DWORD m_bUseClosestPointOnHitbox;
	DWORD m_nTestType;
	DWORD m_flHybridRatio;
	DWORD m_bUpdatePosition;
} C_INIT_SetHitboxToClosest;

inline struct C_INIT_RingWaveOffsets {
	DWORD m_TransformInput;
	DWORD m_flParticlesPerOrbit;
	DWORD m_flInitialRadius;
	DWORD m_flThickness;
	DWORD m_flInitialSpeedMin;
	DWORD m_flInitialSpeedMax;
	DWORD m_flRoll;
	DWORD m_flPitch;
	DWORD m_flYaw;
	DWORD m_bEvenDistribution;
	DWORD m_bXYVelocityOnly;
} C_INIT_RingWave;

inline struct C_INIT_RandomTrailLengthOffsets {
	DWORD m_flMinLength;
	DWORD m_flMaxLength;
	DWORD m_flLengthRandExponent;
} C_INIT_RandomTrailLength;

inline struct C_OP_RemapScalarOffsets {
	DWORD m_nFieldInput;
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_bOldCode;
} C_OP_RemapScalar;

inline struct C_OP_DistanceBetweenTransformsOffsets {
	DWORD m_nFieldOutput;
	DWORD m_TransformStart;
	DWORD m_TransformEnd;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_flMaxTraceLength;
	DWORD m_flLOSScale;
	DWORD m_CollisionGroupName;
	DWORD m_nTraceSet;
	DWORD m_bLOS;
	DWORD m_nSetMethod;
} C_OP_DistanceBetweenTransforms;

inline struct C_OP_DecayOffscreenOffsets {
	DWORD m_flOffscreenTime;
} C_OP_DecayOffscreen;

inline struct C_INIT_CreateSequentialPathOffsets {
	DWORD m_fMaxDistance;
	DWORD m_flNumToAssign;
	DWORD m_bLoop;
	DWORD m_bCPPairs;
	DWORD m_bSaveOffset;
	DWORD m_PathParams;
} C_INIT_CreateSequentialPath;

inline struct C_OP_EndCapTimedDecayOffsets {
	DWORD m_flDecayTime;
} C_OP_EndCapTimedDecay;

inline struct C_OP_RemapDistanceToLineSegmentBaseOffsets {
	DWORD m_nCP0;
	DWORD m_nCP1;
	DWORD m_flMinInputValue;
	DWORD m_flMaxInputValue;
	DWORD m_bInfiniteLine;
} C_OP_RemapDistanceToLineSegmentBase;

inline struct C_OP_ContinuousEmitterOffsets {
	DWORD m_flEmissionDuration;
	DWORD m_flStartTime;
	DWORD m_flEmitRate;
	DWORD m_flEmissionScale;
	DWORD m_flScalePerParentParticle;
	DWORD m_bInitFromKilledParentParticles;
	DWORD m_nEventType;
	DWORD m_nSnapshotControlPoint;
	DWORD m_strSnapshotSubset;
	DWORD m_nLimitPerUpdate;
	DWORD m_bForceEmitOnFirstUpdate;
	DWORD m_bForceEmitOnLastUpdate;
} C_OP_ContinuousEmitter;

inline struct C_OP_OscillateVectorSimpleOffsets {
	DWORD m_Rate;
	DWORD m_Frequency;
	DWORD m_nField;
	DWORD m_flOscMult;
	DWORD m_flOscAdd;
	DWORD m_bOffset;
} C_OP_OscillateVectorSimple;

inline struct C_INIT_SequenceLifeTimeOffsets {
	DWORD m_flFramerate;
} C_INIT_SequenceLifeTime;

inline struct C_INIT_MoveBetweenPointsOffsets {
	DWORD m_flSpeedMin;
	DWORD m_flSpeedMax;
	DWORD m_flEndSpread;
	DWORD m_flStartOffset;
	DWORD m_flEndOffset;
	DWORD m_nEndControlPointNumber;
	DWORD m_bTrailBias;
} C_INIT_MoveBetweenPoints;

inline struct C_OP_SetUserEventOffsets {
	DWORD m_flInput;
	DWORD m_flRisingEdge;
	DWORD m_nRisingEventType;
	DWORD m_flFallingEdge;
	DWORD m_nFallingEventType;
} C_OP_SetUserEvent;

inline struct C_OP_QuantizeFloatOffsets {
	DWORD m_InputValue;
	DWORD m_nOutputField;
} C_OP_QuantizeFloat;

inline struct C_OP_BasicMovementOffsets {
	DWORD m_Gravity;
	DWORD m_fDrag;
	DWORD m_massControls;
	DWORD m_nMaxConstraintPasses;
	DWORD m_bUseNewCode;
} C_OP_BasicMovement;

inline struct C_INIT_RandomNamedModelElementOffsets {
	DWORD m_hModel;
	DWORD m_names;
	DWORD m_bShuffle;
	DWORD m_bLinear;
	DWORD m_bModelFromRenderer;
	DWORD m_nFieldOutput;
} C_INIT_RandomNamedModelElement;

inline struct C_INIT_InitFromParentKilledOffsets {
	DWORD m_nAttributeToCopy;
	DWORD m_nEventType;
} C_INIT_InitFromParentKilled;

inline struct CParticleFunctionOffsets {
	DWORD m_flOpStrength;
	DWORD m_nOpEndCapState;
	DWORD m_flOpStartFadeInTime;
	DWORD m_flOpEndFadeInTime;
	DWORD m_flOpStartFadeOutTime;
	DWORD m_flOpEndFadeOutTime;
	DWORD m_flOpFadeOscillatePeriod;
	DWORD m_bNormalizeToStopTime;
	DWORD m_flOpTimeOffsetMin;
	DWORD m_flOpTimeOffsetMax;
	DWORD m_nOpTimeOffsetSeed;
	DWORD m_nOpTimeScaleSeed;
	DWORD m_flOpTimeScaleMin;
	DWORD m_flOpTimeScaleMax;
	DWORD m_bDisableOperator;
	DWORD m_Notes;
} CParticleFunction;

inline struct C_OP_GlobalLightOffsets {
	DWORD m_flScale;
	DWORD m_bClampLowerRange;
	DWORD m_bClampUpperRange;
} C_OP_GlobalLight;

inline struct C_INIT_OffsetVectorToVectorOffsets {
	DWORD m_nFieldInput;
	DWORD m_nFieldOutput;
	DWORD m_vecOutputMin;
	DWORD m_vecOutputMax;
	DWORD m_randomnessParameters;
} C_INIT_OffsetVectorToVector;

inline struct C_OP_SetPerChildControlPointFromAttributeOffsets {
	DWORD m_nChildGroupID;
	DWORD m_nFirstControlPoint;
	DWORD m_nNumControlPoints;
	DWORD m_nParticleIncrement;
	DWORD m_nFirstSourcePoint;
	DWORD m_bNumBasedOnParticleCount;
	DWORD m_nAttributeToRead;
	DWORD m_nCPField;
} C_OP_SetPerChildControlPointFromAttribute;

inline struct C_OP_SetParentControlPointsToChildCPOffsets {
	DWORD m_nChildGroupID;
	DWORD m_nChildControlPoint;
	DWORD m_nNumControlPoints;
	DWORD m_nFirstSourcePoint;
	DWORD m_bSetOrientation;
} C_OP_SetParentControlPointsToChildCP;

inline struct C_OP_BoxConstraintOffsets {
	DWORD m_vecMin;
	DWORD m_vecMax;
	DWORD m_nCP;
	DWORD m_bLocalSpace;
	DWORD m_bAccountForRadius;
} C_OP_BoxConstraint;

inline struct C_INIT_CreatePhyllotaxisOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_nScaleCP;
	DWORD m_nComponent;
	DWORD m_fRadCentCore;
	DWORD m_fRadPerPoint;
	DWORD m_fRadPerPointTo;
	DWORD m_fpointAngle;
	DWORD m_fsizeOverall;
	DWORD m_fRadBias;
	DWORD m_fMinRad;
	DWORD m_fDistBias;
	DWORD m_bUseLocalCoords;
	DWORD m_bUseWithContEmit;
	DWORD m_bUseOrigRadius;
} C_INIT_CreatePhyllotaxis;

inline struct C_OP_AttractToControlPointOffsets {
	DWORD m_vecComponentScale;
	DWORD m_fForceAmount;
	DWORD m_fFalloffPower;
	DWORD m_TransformInput;
	DWORD m_fForceAmountMin;
	DWORD m_bApplyMinForce;
} C_OP_AttractToControlPoint;

inline struct C_INIT_RandomLifeTimeOffsets {
	DWORD m_fLifetimeMin;
	DWORD m_fLifetimeMax;
	DWORD m_fLifetimeRandExponent;
} C_INIT_RandomLifeTime;

inline struct C_INIT_VelocityRadialRandomOffsets {
	DWORD m_bPerParticleCenter;
	DWORD m_nControlPointNumber;
	DWORD m_vecPosition;
	DWORD m_vecFwd;
	DWORD m_fSpeedMin;
	DWORD m_fSpeedMax;
	DWORD m_vecLocalCoordinateSystemSpeedScale;
	DWORD m_bIgnoreDelta;
} C_INIT_VelocityRadialRandom;

inline struct C_INIT_RandomRadiusOffsets {
	DWORD m_flRadiusMin;
	DWORD m_flRadiusMax;
	DWORD m_flRadiusRandExponent;
} C_INIT_RandomRadius;

inline struct C_OP_Orient2DRelToCPOffsets {
	DWORD m_flRotOffset;
	DWORD m_flSpinStrength;
	DWORD m_nCP;
	DWORD m_nFieldOutput;
} C_OP_Orient2DRelToCP;

inline struct TextureControls_tOffsets {
	DWORD m_flFinalTextureScaleU;
	DWORD m_flFinalTextureScaleV;
	DWORD m_flFinalTextureOffsetU;
	DWORD m_flFinalTextureOffsetV;
	DWORD m_flFinalTextureUVRotation;
	DWORD m_flZoomScale;
	DWORD m_flDistortion;
	DWORD m_bRandomizeOffsets;
	DWORD m_bClampUVs;
	DWORD m_nPerParticleBlend;
	DWORD m_nPerParticleScale;
	DWORD m_nPerParticleOffsetU;
	DWORD m_nPerParticleOffsetV;
	DWORD m_nPerParticleRotation;
	DWORD m_nPerParticleZoom;
	DWORD m_nPerParticleDistortion;
} TextureControls_t;

inline struct ControlPointReference_tOffsets {
	DWORD m_controlPointNameString;
	DWORD m_vOffsetFromControlPoint;
	DWORD m_bOffsetInLocalSpace;
} ControlPointReference_t;

inline struct C_OP_SetControlPointToVectorExpressionOffsets {
	DWORD m_nExpression;
	DWORD m_nOutputCP;
	DWORD m_vInput1;
	DWORD m_vInput2;
	DWORD m_flLerp;
	DWORD m_bNormalizedOutput;
} C_OP_SetControlPointToVectorExpression;

inline struct C_OP_LightningSnapshotGeneratorOffsets {
	DWORD m_nCPSnapshot;
	DWORD m_nCPStartPnt;
	DWORD m_nCPEndPnt;
	DWORD m_flSegments;
	DWORD m_flOffset;
	DWORD m_flOffsetDecay;
	DWORD m_flRecalcRate;
	DWORD m_flUVScale;
	DWORD m_flUVOffset;
	DWORD m_flSplitRate;
	DWORD m_flBranchTwist;
	DWORD m_nBranchBehavior;
	DWORD m_flRadiusStart;
	DWORD m_flRadiusEnd;
	DWORD m_flDedicatedPool;
} C_OP_LightningSnapshotGenerator;

inline struct C_INIT_RemapQAnglesToRotationOffsets {
	DWORD m_TransformInput;
} C_INIT_RemapQAnglesToRotation;

inline struct C_INIT_PositionWarpOffsets {
	DWORD m_vecWarpMin;
	DWORD m_vecWarpMax;
	DWORD m_nScaleControlPointNumber;
	DWORD m_nControlPointNumber;
	DWORD m_nRadiusComponent;
	DWORD m_flWarpTime;
	DWORD m_flWarpStartTime;
	DWORD m_flPrevPosScale;
	DWORD m_bInvertWarp;
	DWORD m_bUseCount;
} C_INIT_PositionWarp;

inline struct C_OP_SetControlPointFieldToScalarExpressionOffsets {
	DWORD m_nExpression;
	DWORD m_flInput1;
	DWORD m_flInput2;
	DWORD m_flOutputRemap;
	DWORD m_nOutputCP;
	DWORD m_nOutVectorField;
} C_OP_SetControlPointFieldToScalarExpression;

inline struct C_OP_CreateParticleSystemRendererOffsets {
	DWORD m_hEffect;
	DWORD m_nEventType;
	DWORD m_vecCPs;
	DWORD m_szParticleConfig;
	DWORD m_AggregationPos;
} C_OP_CreateParticleSystemRenderer;

inline struct C_INIT_RandomVectorComponentOffsets {
	DWORD m_flMin;
	DWORD m_flMax;
	DWORD m_nFieldOutput;
	DWORD m_nComponent;
} C_INIT_RandomVectorComponent;

inline struct C_OP_InheritFromParentParticlesOffsets {
	DWORD m_flScale;
	DWORD m_nFieldOutput;
	DWORD m_nIncrement;
	DWORD m_bRandomDistribution;
} C_OP_InheritFromParentParticles;

inline struct C_INIT_SetVectorAttributeToVectorExpressionOffsets {
	DWORD m_nExpression;
	DWORD m_vInput1;
	DWORD m_vInput2;
	DWORD m_flLerp;
	DWORD m_nOutputField;
	DWORD m_nSetMethod;
	DWORD m_bNormalizedOutput;
} C_INIT_SetVectorAttributeToVectorExpression;

inline struct C_OP_RemapTransformVisibilityToVectorOffsets {
	DWORD m_nSetMethod;
	DWORD m_TransformInput;
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_vecOutputMin;
	DWORD m_vecOutputMax;
	DWORD m_flRadius;
} C_OP_RemapTransformVisibilityToVector;

inline struct C_OP_DirectionBetweenVecsToVecOffsets {
	DWORD m_nFieldOutput;
	DWORD m_vecPoint1;
	DWORD m_vecPoint2;
} C_OP_DirectionBetweenVecsToVec;

inline struct C_OP_MovementLoopInsideSphereOffsets {
	DWORD m_nCP;
	DWORD m_flDistance;
	DWORD m_vecScale;
	DWORD m_nDistSqrAttr;
} C_OP_MovementLoopInsideSphere;

inline struct C_OP_RenderSimpleModelCollectionOffsets {
	DWORD m_bCenterOffset;
	DWORD m_hModel;
	DWORD m_modelInput;
	DWORD m_fSizeCullScale;
	DWORD m_bDisableShadows;
	DWORD m_bDisableMotionBlur;
	DWORD m_bAcceptsDecals;
	DWORD m_fDrawFilter;
	DWORD m_nAngularVelocityField;
} C_OP_RenderSimpleModelCollection;

inline struct C_OP_QuantizeCPComponentOffsets {
	DWORD m_flInputValue;
	DWORD m_nCPOutput;
	DWORD m_nOutVectorField;
	DWORD m_flQuantizeValue;
} C_OP_QuantizeCPComponent;

inline struct C_OP_PlayEndCapWhenFinishedOffsets {
	DWORD m_bFireOnEmissionEnd;
	DWORD m_bIncludeChildren;
} C_OP_PlayEndCapWhenFinished;

inline struct C_INIT_InitFloatCollectionOffsets {
	DWORD m_InputValue;
	DWORD m_nOutputField;
} C_INIT_InitFloatCollection;

inline struct CPathParametersOffsets {
	DWORD m_nStartControlPointNumber;
	DWORD m_nEndControlPointNumber;
	DWORD m_nBulgeControl;
	DWORD m_flBulge;
	DWORD m_flMidPoint;
	DWORD m_vStartPointOffset;
	DWORD m_vMidPointOffset;
	DWORD m_vEndOffset;
} CPathParameters;

inline struct C_OP_RemapScalarEndCapOffsets {
	DWORD m_nFieldInput;
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
} C_OP_RemapScalarEndCap;

inline struct C_INIT_CreateFromPlaneCacheOffsets {
	DWORD m_vecOffsetMin;
	DWORD m_vecOffsetMax;
	DWORD m_bUseNormal;
} C_INIT_CreateFromPlaneCache;

inline struct C_OP_LazyCullCompareFloatOffsets {
	DWORD m_flComparsion1;
	DWORD m_flComparsion2;
	DWORD m_flCullTime;
} C_OP_LazyCullCompareFloat;

inline struct C_OP_ControlPointToRadialScreenSpaceOffsets {
	DWORD m_nCPIn;
	DWORD m_vecCP1Pos;
	DWORD m_nCPOut;
	DWORD m_nCPOutField;
	DWORD m_nCPSSPosOut;
} C_OP_ControlPointToRadialScreenSpace;

inline struct C_INIT_NormalOffsetOffsets {
	DWORD m_OffsetMin;
	DWORD m_OffsetMax;
	DWORD m_nControlPointNumber;
	DWORD m_bLocalCoords;
	DWORD m_bNormalize;
} C_INIT_NormalOffset;

inline struct C_OP_RemapDistanceToLineSegmentToVectorOffsets {
	DWORD m_nFieldOutput;
	DWORD m_vMinOutputValue;
	DWORD m_vMaxOutputValue;
} C_OP_RemapDistanceToLineSegmentToVector;

inline struct C_OP_RenderAsModelsOffsets {
	DWORD m_ModelList;
	DWORD m_flModelScale;
	DWORD m_bFitToModelSize;
	DWORD m_bNonUniformScaling;
	DWORD m_nXAxisScalingAttribute;
	DWORD m_nYAxisScalingAttribute;
	DWORD m_nZAxisScalingAttribute;
	DWORD m_nSizeCullBloat;
} C_OP_RenderAsModels;

inline struct C_INIT_CreationNoiseOffsets {
	DWORD m_nFieldOutput;
	DWORD m_bAbsVal;
	DWORD m_bAbsValInv;
	DWORD m_flOffset;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_flNoiseScale;
	DWORD m_flNoiseScaleLoc;
	DWORD m_vecOffsetLoc;
	DWORD m_flWorldTimeScale;
} C_INIT_CreationNoise;

inline struct C_OP_GameLiquidSpillOffsets {
	DWORD m_flLiquidContentsField;
	DWORD m_flExpirationTime;
	DWORD m_nAmountAttribute;
} C_OP_GameLiquidSpill;

inline struct C_OP_InstantaneousEmitterOffsets {
	DWORD m_nParticlesToEmit;
	DWORD m_flStartTime;
	DWORD m_flInitFromKilledParentParticles;
	DWORD m_nEventType;
	DWORD m_flParentParticleScale;
	DWORD m_nMaxEmittedPerFrame;
	DWORD m_nSnapshotControlPoint;
	DWORD m_strSnapshotSubset;
} C_OP_InstantaneousEmitter;

inline struct C_OP_ConstrainLineLengthOffsets {
	DWORD m_flMinDistance;
	DWORD m_flMaxDistance;
} C_OP_ConstrainLineLength;

inline struct C_INIT_LifespanFromVelocityOffsets {
	DWORD m_vecComponentScale;
	DWORD m_flTraceOffset;
	DWORD m_flMaxTraceLength;
	DWORD m_flTraceTolerance;
	DWORD m_nMaxPlanes;
	DWORD m_CollisionGroupName;
	DWORD m_nTraceSet;
	DWORD m_bIncludeWater;
} C_INIT_LifespanFromVelocity;

inline struct CBaseTrailRendererOffsets {
	DWORD m_nOrientationType;
	DWORD m_nOrientationControlPoint;
	DWORD m_flMinSize;
	DWORD m_flMaxSize;
	DWORD m_flStartFadeSize;
	DWORD m_flEndFadeSize;
	DWORD m_bClampV;
} CBaseTrailRenderer;

inline struct C_INIT_VelocityFromCPOffsets {
	DWORD m_velocityInput;
	DWORD m_transformInput;
	DWORD m_flVelocityScale;
	DWORD m_bDirectionOnly;
} C_INIT_VelocityFromCP;

inline struct C_OP_SetControlPointOrientationOffsets {
	DWORD m_bUseWorldLocation;
	DWORD m_bRandomize;
	DWORD m_bSetOnce;
	DWORD m_nCP;
	DWORD m_nHeadLocation;
	DWORD m_vecRotation;
	DWORD m_vecRotationB;
	DWORD m_flInterpolation;
} C_OP_SetControlPointOrientation;

inline struct C_OP_MovementSkinnedPositionFromCPSnapshotOffsets {
	DWORD m_nSnapshotControlPointNumber;
	DWORD m_nControlPointNumber;
	DWORD m_bRandom;
	DWORD m_nRandomSeed;
	DWORD m_bSetNormal;
	DWORD m_bSetRadius;
	DWORD m_nIndexType;
	DWORD m_flReadIndex;
	DWORD m_flIncrement;
	DWORD m_nFullLoopIncrement;
	DWORD m_nSnapShotStartPoint;
	DWORD m_flInterpolation;
} C_OP_MovementSkinnedPositionFromCPSnapshot;

inline struct C_OP_OscillateVectorOffsets {
	DWORD m_RateMin;
	DWORD m_RateMax;
	DWORD m_FrequencyMin;
	DWORD m_FrequencyMax;
	DWORD m_nField;
	DWORD m_bProportional;
	DWORD m_bProportionalOp;
	DWORD m_bOffset;
	DWORD m_flStartTime_min;
	DWORD m_flStartTime_max;
	DWORD m_flEndTime_min;
	DWORD m_flEndTime_max;
	DWORD m_flOscMult;
	DWORD m_flOscAdd;
	DWORD m_flRateScale;
} C_OP_OscillateVector;

inline struct C_OP_PositionLockOffsets {
	DWORD m_TransformInput;
	DWORD m_flStartTime_min;
	DWORD m_flStartTime_max;
	DWORD m_flStartTime_exp;
	DWORD m_flEndTime_min;
	DWORD m_flEndTime_max;
	DWORD m_flEndTime_exp;
	DWORD m_flRange;
	DWORD m_flRangeBias;
	DWORD m_flJumpThreshold;
	DWORD m_flPrevPosScale;
	DWORD m_bLockRot;
	DWORD m_vecScale;
	DWORD m_nFieldOutput;
	DWORD m_nFieldOutputPrev;
} C_OP_PositionLock;

inline struct C_OP_RenderVRHapticEventOffsets {
	DWORD m_nHand;
	DWORD m_nOutputHandCP;
	DWORD m_nOutputField;
	DWORD m_flAmplitude;
} C_OP_RenderVRHapticEvent;

inline struct C_OP_SetControlPointToImpactPointOffsets {
	DWORD m_nCPOut;
	DWORD m_nCPIn;
	DWORD m_flUpdateRate;
	DWORD m_flTraceLength;
	DWORD m_flStartOffset;
	DWORD m_flOffset;
	DWORD m_vecTraceDir;
	DWORD m_CollisionGroupName;
	DWORD m_nTraceSet;
	DWORD m_bSetToEndpoint;
	DWORD m_bTraceToClosestSurface;
	DWORD m_bIncludeWater;
} C_OP_SetControlPointToImpactPoint;

inline struct C_OP_InterpolateRadiusOffsets {
	DWORD m_flStartTime;
	DWORD m_flEndTime;
	DWORD m_flStartScale;
	DWORD m_flEndScale;
	DWORD m_bEaseInAndOut;
	DWORD m_flBias;
} C_OP_InterpolateRadius;

inline struct C_OP_ReinitializeScalarEndCapOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
} C_OP_ReinitializeScalarEndCap;

inline struct C_OP_TurbulenceForceOffsets {
	DWORD m_flNoiseCoordScale0;
	DWORD m_flNoiseCoordScale1;
	DWORD m_flNoiseCoordScale2;
	DWORD m_flNoiseCoordScale3;
	DWORD m_vecNoiseAmount0;
	DWORD m_vecNoiseAmount1;
	DWORD m_vecNoiseAmount2;
	DWORD m_vecNoiseAmount3;
} C_OP_TurbulenceForce;

inline struct C_OP_RemapNamedModelElementOnceTimedOffsets {
	DWORD m_hModel;
	DWORD m_inNames;
	DWORD m_outNames;
	DWORD m_fallbackNames;
	DWORD m_bModelFromRenderer;
	DWORD m_bProportional;
	DWORD m_nFieldInput;
	DWORD m_nFieldOutput;
	DWORD m_flRemapTime;
} C_OP_RemapNamedModelElementOnceTimed;

inline struct C_OP_SetControlPointToPlayerOffsets {
	DWORD m_nCP1;
	DWORD m_vecCP1Pos;
	DWORD m_bOrientToEyes;
} C_OP_SetControlPointToPlayer;

inline struct C_OP_EndCapTimedFreezeOffsets {
	DWORD m_flFreezeTime;
} C_OP_EndCapTimedFreeze;

inline struct C_OP_RenderGpuImplicitOffsets {
	DWORD m_bUsePerParticleRadius;
	DWORD m_nVertexCountKb;
	DWORD m_nIndexCountKb;
	DWORD m_fGridSize;
	DWORD m_fRadiusScale;
	DWORD m_fIsosurfaceThreshold;
	DWORD m_nScaleCP;
	DWORD m_hMaterial;
} C_OP_RenderGpuImplicit;

inline struct C_OP_SetRandomControlPointPositionOffsets {
	DWORD m_bUseWorldLocation;
	DWORD m_bOrient;
	DWORD m_nCP1;
	DWORD m_nHeadLocation;
	DWORD m_flReRandomRate;
	DWORD m_vecCPMinPos;
	DWORD m_vecCPMaxPos;
	DWORD m_flInterpolation;
} C_OP_SetRandomControlPointPosition;

inline struct C_OP_RemapTransformVisibilityToScalarOffsets {
	DWORD m_nSetMethod;
	DWORD m_TransformInput;
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_flRadius;
} C_OP_RemapTransformVisibilityToScalar;

inline struct C_OP_RemapControlPointDirectionToVectorOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flScale;
	DWORD m_nControlPointNumber;
} C_OP_RemapControlPointDirectionToVector;

inline struct C_OP_ScreenSpacePositionOfTargetOffsets {
	DWORD m_vecTargetPosition;
	DWORD m_bOututBehindness;
	DWORD m_nBehindFieldOutput;
	DWORD m_flBehindOutputRemap;
	DWORD m_nBehindSetMethod;
} C_OP_ScreenSpacePositionOfTarget;

inline struct C_OP_DragRelativeToPlaneOffsets {
	DWORD m_flDragAtPlane;
	DWORD m_flFalloff;
	DWORD m_bDirectional;
	DWORD m_vecPlaneNormal;
	DWORD m_nControlPointNumber;
} C_OP_DragRelativeToPlane;

inline struct C_OP_SetCPtoVectorOffsets {
	DWORD m_nCPInput;
	DWORD m_nFieldOutput;
} C_OP_SetCPtoVector;

inline struct C_OP_SnapshotRigidSkinToBonesOffsets {
	DWORD m_bTransformNormals;
	DWORD m_bTransformRadii;
	DWORD m_nControlPointNumber;
} C_OP_SnapshotRigidSkinToBones;

inline struct C_OP_SetSingleControlPointPositionOffsets {
	DWORD m_bSetOnce;
	DWORD m_nCP1;
	DWORD m_vecCP1Pos;
	DWORD m_transformInput;
} C_OP_SetSingleControlPointPosition;

inline struct C_INIT_DistanceToNeighborCullOffsets {
	DWORD m_flDistance;
	DWORD m_bIncludeRadii;
	DWORD m_flLifespanOverlap;
	DWORD m_nFieldModify;
	DWORD m_flModify;
	DWORD m_nSetMethod;
	DWORD m_bUseNeighbor;
} C_INIT_DistanceToNeighborCull;

inline struct C_OP_RemapCPtoScalarOffsets {
	DWORD m_nCPInput;
	DWORD m_nFieldOutput;
	DWORD m_nField;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_flStartTime;
	DWORD m_flEndTime;
	DWORD m_flInterpRate;
	DWORD m_nSetMethod;
} C_OP_RemapCPtoScalar;

inline struct CParticleFunctionRendererOffsets {
	DWORD VisibilityInputs;
	DWORD m_bCannotBeRefracted;
	DWORD m_bSkipRenderingOnMobile;
} CParticleFunctionRenderer;

inline struct CParticleSystemDefinitionOffsets {
	DWORD m_nBehaviorVersion;
	DWORD m_PreEmissionOperators;
	DWORD m_Emitters;
	DWORD m_Initializers;
	DWORD m_Operators;
	DWORD m_ForceGenerators;
	DWORD m_Constraints;
	DWORD m_Renderers;
	DWORD m_Children;
	DWORD m_nFirstMultipleOverride_BackwardCompat;
	DWORD m_nInitialParticles;
	DWORD m_nMaxParticles;
	DWORD m_nGroupID;
	DWORD m_BoundingBoxMin;
	DWORD m_BoundingBoxMax;
	DWORD m_flDepthSortBias;
	DWORD m_nSortOverridePositionCP;
	DWORD m_bInfiniteBounds;
	DWORD m_bEnableNamedValues;
	DWORD m_NamedValueDomain;
	DWORD m_NamedValueLocals;
	DWORD m_ConstantColor;
	DWORD m_ConstantNormal;
	DWORD m_flConstantRadius;
	DWORD m_flConstantRotation;
	DWORD m_flConstantRotationSpeed;
	DWORD m_flConstantLifespan;
	DWORD m_nConstantSequenceNumber;
	DWORD m_nConstantSequenceNumber1;
	DWORD m_nSnapshotControlPoint;
	DWORD m_hSnapshot;
	DWORD m_pszCullReplacementName;
	DWORD m_flCullRadius;
	DWORD m_flCullFillCost;
	DWORD m_nCullControlPoint;
	DWORD m_hFallback;
	DWORD m_nFallbackMaxCount;
	DWORD m_hLowViolenceDef;
	DWORD m_hReferenceReplacement;
	DWORD m_flPreSimulationTime;
	DWORD m_flStopSimulationAfterTime;
	DWORD m_flMaximumTimeStep;
	DWORD m_flMaximumSimTime;
	DWORD m_flMinimumSimTime;
	DWORD m_flMinimumTimeStep;
	DWORD m_nMinimumFrames;
	DWORD m_nMinCPULevel;
	DWORD m_nMinGPULevel;
	DWORD m_flNoDrawTimeToGoToSleep;
	DWORD m_flMaxDrawDistance;
	DWORD m_flStartFadeDistance;
	DWORD m_flMaxCreationDistance;
	DWORD m_nAggregationMinAvailableParticles;
	DWORD m_flAggregateRadius;
	DWORD m_bShouldBatch;
	DWORD m_bShouldHitboxesFallbackToRenderBounds;
	DWORD m_bShouldHitboxesFallbackToSnapshot;
	DWORD m_bShouldHitboxesFallbackToCollisionHulls;
	DWORD m_nViewModelEffect;
	DWORD m_bScreenSpaceEffect;
	DWORD m_pszTargetLayerID;
	DWORD m_nSkipRenderControlPoint;
	DWORD m_nAllowRenderControlPoint;
	DWORD m_bShouldSort;
	DWORD m_controlPointConfigurations;
} CParticleSystemDefinition;

inline struct C_OP_PercentageBetweenTransformsVectorOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_vecOutputMin;
	DWORD m_vecOutputMax;
	DWORD m_TransformStart;
	DWORD m_TransformEnd;
	DWORD m_nSetMethod;
	DWORD m_bActiveRange;
	DWORD m_bRadialCheck;
} C_OP_PercentageBetweenTransformsVector;

inline struct C_OP_RenderScreenVelocityRotateOffsets {
	DWORD m_flRotateRateDegrees;
	DWORD m_flForwardDegrees;
} C_OP_RenderScreenVelocityRotate;

inline struct C_OP_UpdateLightSourceOffsets {
	DWORD m_vColorTint;
	DWORD m_flBrightnessScale;
	DWORD m_flRadiusScale;
	DWORD m_flMinimumLightingRadius;
	DWORD m_flMaximumLightingRadius;
	DWORD m_flPositionDampingConstant;
} C_OP_UpdateLightSource;

inline struct C_INIT_CreateWithinBoxOffsets {
	DWORD m_vecMin;
	DWORD m_vecMax;
	DWORD m_nControlPointNumber;
	DWORD m_bLocalSpace;
	DWORD m_randomnessParameters;
	DWORD m_bUseNewCode;
} C_INIT_CreateWithinBox;

inline struct C_OP_ChooseRandomChildrenInGroupOffsets {
	DWORD m_nChildGroupID;
	DWORD m_flNumberOfChildren;
} C_OP_ChooseRandomChildrenInGroup;

inline struct C_OP_ControlpointLightOffsets {
	DWORD m_flScale;
	DWORD m_nControlPoint1;
	DWORD m_nControlPoint2;
	DWORD m_nControlPoint3;
	DWORD m_nControlPoint4;
	DWORD m_vecCPOffset1;
	DWORD m_vecCPOffset2;
	DWORD m_vecCPOffset3;
	DWORD m_vecCPOffset4;
	DWORD m_LightFiftyDist1;
	DWORD m_LightZeroDist1;
	DWORD m_LightFiftyDist2;
	DWORD m_LightZeroDist2;
	DWORD m_LightFiftyDist3;
	DWORD m_LightZeroDist3;
	DWORD m_LightFiftyDist4;
	DWORD m_LightZeroDist4;
	DWORD m_LightColor1;
	DWORD m_LightColor2;
	DWORD m_LightColor3;
	DWORD m_LightColor4;
	DWORD m_bLightType1;
	DWORD m_bLightType2;
	DWORD m_bLightType3;
	DWORD m_bLightType4;
	DWORD m_bLightDynamic1;
	DWORD m_bLightDynamic2;
	DWORD m_bLightDynamic3;
	DWORD m_bLightDynamic4;
	DWORD m_bUseNormal;
	DWORD m_bUseHLambert;
	DWORD m_bClampLowerRange;
	DWORD m_bClampUpperRange;
} C_OP_ControlpointLight;

inline struct C_OP_VectorFieldSnapshotOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_nAttributeToWrite;
	DWORD m_nLocalSpaceCP;
	DWORD m_flInterpolation;
	DWORD m_vecScale;
	DWORD m_flBoundaryDampening;
	DWORD m_bSetVelocity;
	DWORD m_bLockToSurface;
	DWORD m_flGridSpacing;
} C_OP_VectorFieldSnapshot;

inline struct C_OP_CylindricalDistanceToTransformOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_TransformStart;
	DWORD m_TransformEnd;
	DWORD m_nSetMethod;
	DWORD m_bActiveRange;
	DWORD m_bAdditive;
	DWORD m_bCapsule;
} C_OP_CylindricalDistanceToTransform;

inline struct C_INIT_PositionPlaceOnGroundOffsets {
	DWORD m_flOffset;
	DWORD m_flMaxTraceLength;
	DWORD m_CollisionGroupName;
	DWORD m_nTraceSet;
	DWORD m_nTraceMissBehavior;
	DWORD m_bIncludeWater;
	DWORD m_bSetNormal;
	DWORD m_nAttribute;
	DWORD m_bSetPXYZOnly;
	DWORD m_bTraceAlongNormal;
	DWORD m_nTraceDirectionAttribute;
	DWORD m_bOffsetonColOnly;
	DWORD m_flOffsetByRadiusFactor;
	DWORD m_nPreserveOffsetCP;
	DWORD m_nIgnoreCP;
} C_INIT_PositionPlaceOnGround;

inline struct C_INIT_RandomScalarOffsets {
	DWORD m_flMin;
	DWORD m_flMax;
	DWORD m_flExponent;
	DWORD m_nFieldOutput;
} C_INIT_RandomScalar;

inline struct C_OP_RenderPostProcessingOffsets {
	DWORD m_flPostProcessStrength;
	DWORD m_hPostTexture;
	DWORD m_nPriority;
} C_OP_RenderPostProcessing;

inline struct C_OP_WorldTraceConstraintOffsets {
	DWORD m_nCP;
	DWORD m_vecCpOffset;
	DWORD m_nCollisionMode;
	DWORD m_nCollisionModeMin;
	DWORD m_nTraceSet;
	DWORD m_CollisionGroupName;
	DWORD m_bWorldOnly;
	DWORD m_bBrushOnly;
	DWORD m_bIncludeWater;
	DWORD m_nIgnoreCP;
	DWORD m_flCpMovementTolerance;
	DWORD m_flRetestRate;
	DWORD m_flTraceTolerance;
	DWORD m_flCollisionConfirmationSpeed;
	DWORD m_nMaxTracesPerFrame;
	DWORD m_flRadiusScale;
	DWORD m_flBounceAmount;
	DWORD m_flSlideAmount;
	DWORD m_flRandomDirScale;
	DWORD m_bDecayBounce;
	DWORD m_bKillonContact;
	DWORD m_flMinSpeed;
	DWORD m_bSetNormal;
	DWORD m_nStickOnCollisionField;
	DWORD m_flStopSpeed;
	DWORD m_nEntityStickDataField;
	DWORD m_nEntityStickNormalField;
} C_OP_WorldTraceConstraint;

inline struct C_OP_RenderBlobsOffsets {
	DWORD m_cubeWidth;
	DWORD m_cutoffRadius;
	DWORD m_renderRadius;
	DWORD m_nVertexCountKb;
	DWORD m_nIndexCountKb;
	DWORD m_nScaleCP;
	DWORD m_MaterialVars;
	DWORD m_hMaterial;
} C_OP_RenderBlobs;

inline struct C_OP_OscillateScalarOffsets {
	DWORD m_RateMin;
	DWORD m_RateMax;
	DWORD m_FrequencyMin;
	DWORD m_FrequencyMax;
	DWORD m_nField;
	DWORD m_bProportional;
	DWORD m_bProportionalOp;
	DWORD m_flStartTime_min;
	DWORD m_flStartTime_max;
	DWORD m_flEndTime_min;
	DWORD m_flEndTime_max;
	DWORD m_flOscMult;
	DWORD m_flOscAdd;
} C_OP_OscillateScalar;

inline struct C_OP_FadeOutOffsets {
	DWORD m_flFadeOutTimeMin;
	DWORD m_flFadeOutTimeMax;
	DWORD m_flFadeOutTimeExp;
	DWORD m_flFadeBias;
	DWORD m_bProportional;
	DWORD m_bEaseInAndOut;
} C_OP_FadeOut;

inline struct C_OP_WaterImpulseRendererOffsets {
	DWORD m_vecPos;
	DWORD m_flRadius;
	DWORD m_flMagnitude;
	DWORD m_flShape;
	DWORD m_flWindSpeed;
	DWORD m_flWobble;
	DWORD m_bIsRadialWind;
	DWORD m_nEventType;
} C_OP_WaterImpulseRenderer;

inline struct C_INIT_RandomSequenceOffsets {
	DWORD m_nSequenceMin;
	DWORD m_nSequenceMax;
	DWORD m_bShuffle;
	DWORD m_bLinear;
	DWORD m_WeightedList;
} C_INIT_RandomSequence;

inline struct C_OP_RampScalarSplineSimpleOffsets {
	DWORD m_Rate;
	DWORD m_flStartTime;
	DWORD m_flEndTime;
	DWORD m_nField;
	DWORD m_bEaseOut;
} C_OP_RampScalarSplineSimple;

inline struct C_INIT_DistanceCullOffsets {
	DWORD m_nControlPoint;
	DWORD m_flDistance;
	DWORD m_bCullInside;
} C_INIT_DistanceCull;

inline struct C_OP_CollideWithParentParticlesOffsets {
	DWORD m_flParentRadiusScale;
	DWORD m_flRadiusScale;
} C_OP_CollideWithParentParticles;

inline struct C_INIT_InitFromVectorFieldSnapshotOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_nLocalSpaceCP;
	DWORD m_nWeightUpdateCP;
	DWORD m_bUseVerticalVelocity;
	DWORD m_vecScale;
} C_INIT_InitFromVectorFieldSnapshot;

inline struct C_OP_SetVectorAttributeToVectorExpressionOffsets {
	DWORD m_nExpression;
	DWORD m_vInput1;
	DWORD m_vInput2;
	DWORD m_flLerp;
	DWORD m_nOutputField;
	DWORD m_nSetMethod;
	DWORD m_bNormalizedOutput;
} C_OP_SetVectorAttributeToVectorExpression;

inline struct C_INIT_AddVectorToVectorOffsets {
	DWORD m_vecScale;
	DWORD m_nFieldOutput;
	DWORD m_nFieldInput;
	DWORD m_vOffsetMin;
	DWORD m_vOffsetMax;
	DWORD m_randomnessParameters;
} C_INIT_AddVectorToVector;

inline struct C_INIT_RemapInitialVisibilityScalarOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
} C_INIT_RemapInitialVisibilityScalar;

inline struct C_OP_RemapTransformOrientationToYawOffsets {
	DWORD m_TransformInput;
	DWORD m_nFieldOutput;
	DWORD m_flRotOffset;
	DWORD m_flSpinStrength;
} C_OP_RemapTransformOrientationToYaw;

inline struct C_OP_RenderStatusEffectOffsets {
	DWORD m_pTextureColorWarp;
	DWORD m_pTextureDetail2;
	DWORD m_pTextureDiffuseWarp;
	DWORD m_pTextureFresnelColorWarp;
	DWORD m_pTextureFresnelWarp;
	DWORD m_pTextureSpecularWarp;
	DWORD m_pTextureEnvMap;
} C_OP_RenderStatusEffect;

inline struct C_OP_RandomForceOffsets {
	DWORD m_MinForce;
	DWORD m_MaxForce;
} C_OP_RandomForce;

inline struct C_OP_RemapParticleCountOnScalarEndCapOffsets {
	DWORD m_nFieldOutput;
	DWORD m_nInputMin;
	DWORD m_nInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_bBackwards;
	DWORD m_nSetMethod;
} C_OP_RemapParticleCountOnScalarEndCap;

inline struct ParticlePreviewState_tOffsets {
	DWORD m_previewModel;
	DWORD m_nModSpecificData;
	DWORD m_groundType;
	DWORD m_sequenceName;
	DWORD m_nFireParticleOnSequenceFrame;
	DWORD m_hitboxSetName;
	DWORD m_materialGroupName;
	DWORD m_vecBodyGroups;
	DWORD m_flPlaybackSpeed;
	DWORD m_flParticleSimulationRate;
	DWORD m_bShouldDrawHitboxes;
	DWORD m_bShouldDrawAttachments;
	DWORD m_bShouldDrawAttachmentNames;
	DWORD m_bShouldDrawControlPointAxes;
	DWORD m_bAnimationNonLooping;
	DWORD m_bSequenceNameIsAnimClipPath;
	DWORD m_vecPreviewGravity;
} ParticlePreviewState_t;

inline struct C_OP_LocalAccelerationForceOffsets {
	DWORD m_nCP;
	DWORD m_nScaleCP;
	DWORD m_vecAccel;
} C_OP_LocalAccelerationForce;

inline struct C_OP_ModelCullOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_bBoundBox;
	DWORD m_bCullOutside;
	DWORD m_bUseBones;
	DWORD m_HitboxSetName;
} C_OP_ModelCull;

inline struct C_OP_SetFloatOffsets {
	DWORD m_InputValue;
	DWORD m_nOutputField;
	DWORD m_nSetMethod;
	DWORD m_Lerp;
} C_OP_SetFloat;

inline struct C_INIT_RemapTransformToVectorOffsets {
	DWORD m_nFieldOutput;
	DWORD m_vInputMin;
	DWORD m_vInputMax;
	DWORD m_vOutputMin;
	DWORD m_vOutputMax;
	DWORD m_TransformInput;
	DWORD m_LocalSpaceTransform;
	DWORD m_flStartTime;
	DWORD m_flEndTime;
	DWORD m_nSetMethod;
	DWORD m_bOffset;
	DWORD m_bAccelerate;
	DWORD m_flRemapBias;
} C_INIT_RemapTransformToVector;

inline struct C_OP_ScreenSpaceDistanceToEdgeOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flMaxDistFromEdge;
	DWORD m_flOutputRemap;
	DWORD m_nSetMethod;
} C_OP_ScreenSpaceDistanceToEdge;

inline struct C_OP_RemapDistanceToLineSegmentToScalarOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flMinOutputValue;
	DWORD m_flMaxOutputValue;
} C_OP_RemapDistanceToLineSegmentToScalar;

inline struct C_OP_RemapVectortoCPOffsets {
	DWORD m_nOutControlPointNumber;
	DWORD m_nFieldInput;
	DWORD m_nParticleNumber;
} C_OP_RemapVectortoCP;

inline struct C_OP_SetFromCPSnapshotOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_strSnapshotSubset;
	DWORD m_nAttributeToRead;
	DWORD m_nAttributeToWrite;
	DWORD m_nLocalSpaceCP;
	DWORD m_bRandom;
	DWORD m_bReverse;
	DWORD m_nRandomSeed;
	DWORD m_nSnapShotStartPoint;
	DWORD m_nSnapShotIncrement;
	DWORD m_flInterpolation;
	DWORD m_bSubSample;
	DWORD m_bPrev;
} C_OP_SetFromCPSnapshot;

inline struct C_OP_DistanceBetweenCPsToCPOffsets {
	DWORD m_nStartCP;
	DWORD m_nEndCP;
	DWORD m_nOutputCP;
	DWORD m_nOutputCPField;
	DWORD m_bSetOnce;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_flMaxTraceLength;
	DWORD m_flLOSScale;
	DWORD m_bLOS;
	DWORD m_CollisionGroupName;
	DWORD m_nTraceSet;
	DWORD m_nSetParent;
} C_OP_DistanceBetweenCPsToCP;

inline struct C_OP_SetControlPointToHandOffsets {
	DWORD m_nCP1;
	DWORD m_nHand;
	DWORD m_vecCP1Pos;
	DWORD m_bOrientToHand;
} C_OP_SetControlPointToHand;

inline struct C_OP_ConstrainDistanceToPathOffsets {
	DWORD m_fMinDistance;
	DWORD m_flMaxDistance0;
	DWORD m_flMaxDistanceMid;
	DWORD m_flMaxDistance1;
	DWORD m_PathParameters;
	DWORD m_flTravelTime;
	DWORD m_nFieldScale;
	DWORD m_nManualTField;
} C_OP_ConstrainDistanceToPath;

inline struct C_OP_DistanceCullOffsets {
	DWORD m_nControlPoint;
	DWORD m_vecPointOffset;
	DWORD m_flDistance;
	DWORD m_bCullInside;
	DWORD m_nAttribute;
} C_OP_DistanceCull;

inline struct C_INIT_CreateAlongPathOffsets {
	DWORD m_fMaxDistance;
	DWORD m_PathParams;
	DWORD m_bUseRandomCPs;
	DWORD m_vEndOffset;
	DWORD m_bSaveOffset;
} C_INIT_CreateAlongPath;

inline struct C_OP_GameDecalRendererOffsets {
	DWORD m_sDecalGroupName;
	DWORD m_nEventType;
	DWORD m_nInteractionMask;
	DWORD m_nCollisionGroup;
	DWORD m_vecStartPos;
	DWORD m_vecEndPos;
	DWORD m_flTraceBloat;
	DWORD m_flDecalSize;
	DWORD m_nDecalGroupIndex;
	DWORD m_flDecalRotation;
	DWORD m_vModulationColor;
	DWORD m_bUseGameDefaultDecalSize;
	DWORD m_bRandomDecalRotation;
	DWORD m_bRandomlySelectDecalInGroup;
	DWORD m_bNoDecalsOnOwner;
	DWORD m_bVisualizeTraces;
} C_OP_GameDecalRenderer;

inline struct C_OP_SetControlPointsToModelParticlesOffsets {
	DWORD m_HitboxSetName;
	DWORD m_AttachmentName;
	DWORD m_nFirstControlPoint;
	DWORD m_nNumControlPoints;
	DWORD m_nFirstSourcePoint;
	DWORD m_bSkin;
	DWORD m_bAttachment;
} C_OP_SetControlPointsToModelParticles;

inline struct C_OP_ColorInterpolateRandomOffsets {
	DWORD m_ColorFadeMin;
	DWORD m_ColorFadeMax;
	DWORD m_flFadeStartTime;
	DWORD m_flFadeEndTime;
	DWORD m_nFieldOutput;
	DWORD m_bEaseInOut;
} C_OP_ColorInterpolateRandom;

inline struct C_OP_RenderLightsOffsets {
	DWORD m_flAnimationRate;
	DWORD m_nAnimationType;
	DWORD m_bAnimateInFPS;
	DWORD m_flMinSize;
	DWORD m_flMaxSize;
	DWORD m_flStartFadeSize;
	DWORD m_flEndFadeSize;
} C_OP_RenderLights;

inline struct C_OP_DecayClampCountOffsets {
	DWORD m_nCount;
} C_OP_DecayClampCount;

inline struct CRandomNumberGeneratorParametersOffsets {
	DWORD m_bDistributeEvenly;
	DWORD m_nSeed;
} CRandomNumberGeneratorParameters;

inline struct C_INIT_ColorLitPerParticleOffsets {
	DWORD m_ColorMin;
	DWORD m_ColorMax;
	DWORD m_TintMin;
	DWORD m_TintMax;
	DWORD m_flTintPerc;
	DWORD m_nTintBlendMode;
	DWORD m_flLightAmplification;
} C_INIT_ColorLitPerParticle;

inline struct C_OP_RenderPointsOffsets {
	DWORD m_hMaterial;
} C_OP_RenderPoints;

inline struct C_INIT_SetAttributeToScalarExpressionOffsets {
	DWORD m_nExpression;
	DWORD m_flInput1;
	DWORD m_flInput2;
	DWORD m_flOutputRemap;
	DWORD m_nOutputField;
	DWORD m_nSetMethod;
} C_INIT_SetAttributeToScalarExpression;

inline struct C_INIT_CreateOnGridOffsets {
	DWORD m_nXCount;
	DWORD m_nYCount;
	DWORD m_nZCount;
	DWORD m_nXSpacing;
	DWORD m_nYSpacing;
	DWORD m_nZSpacing;
	DWORD m_nControlPointNumber;
	DWORD m_bLocalSpace;
	DWORD m_bCenter;
	DWORD m_bHollow;
} C_INIT_CreateOnGrid;

inline struct C_OP_RampCPLinearRandomOffsets {
	DWORD m_nOutControlPointNumber;
	DWORD m_vecRateMin;
	DWORD m_vecRateMax;
} C_OP_RampCPLinearRandom;

inline struct C_OP_VelocityMatchingForceOffsets {
	DWORD m_flDirScale;
	DWORD m_flSpdScale;
	DWORD m_flNeighborDistance;
	DWORD m_flFacingStrength;
	DWORD m_bUseAABB;
	DWORD m_nCPBroadcast;
} C_OP_VelocityMatchingForce;

inline struct C_INIT_RandomAlphaWindowThresholdOffsets {
	DWORD m_flMin;
	DWORD m_flMax;
	DWORD m_flExponent;
} C_INIT_RandomAlphaWindowThreshold;

inline struct C_INIT_CreateOnModelAtHeightOffsets {
	DWORD m_bUseBones;
	DWORD m_bForceZ;
	DWORD m_nControlPointNumber;
	DWORD m_nHeightCP;
	DWORD m_bUseWaterHeight;
	DWORD m_flDesiredHeight;
	DWORD m_vecHitBoxScale;
	DWORD m_vecDirectionBias;
	DWORD m_nBiasType;
	DWORD m_bLocalCoords;
	DWORD m_bPreferMovingBoxes;
	DWORD m_HitboxSetName;
	DWORD m_flHitboxVelocityScale;
	DWORD m_flMaxBoneVelocity;
} C_INIT_CreateOnModelAtHeight;

inline struct C_OP_RestartAfterDurationOffsets {
	DWORD m_flDurationMin;
	DWORD m_flDurationMax;
	DWORD m_nCP;
	DWORD m_nCPField;
	DWORD m_nChildGroupID;
	DWORD m_bOnlyChildren;
} C_OP_RestartAfterDuration;

inline struct C_OP_RemapVisibilityScalarOffsets {
	DWORD m_nFieldInput;
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_flRadiusScale;
} C_OP_RemapVisibilityScalar;

inline struct C_INIT_CreateSequentialPathV2Offsets {
	DWORD m_fMaxDistance;
	DWORD m_flNumToAssign;
	DWORD m_bLoop;
	DWORD m_bCPPairs;
	DWORD m_bSaveOffset;
	DWORD m_PathParams;
} C_INIT_CreateSequentialPathV2;

inline struct VecInputMaterialVariable_tOffsets {
	DWORD m_strVariable;
	DWORD m_vecInput;
} VecInputMaterialVariable_t;

inline struct C_INIT_RemapInitialDirectionToTransformToVectorOffsets {
	DWORD m_TransformInput;
	DWORD m_nFieldOutput;
	DWORD m_flScale;
	DWORD m_flOffsetRot;
	DWORD m_vecOffsetAxis;
	DWORD m_bNormalize;
} C_INIT_RemapInitialDirectionToTransformToVector;

inline struct C_OP_LockToSavedSequentialPathV2Offsets {
	DWORD m_flFadeStart;
	DWORD m_flFadeEnd;
	DWORD m_bCPPairs;
	DWORD m_PathParams;
} C_OP_LockToSavedSequentialPathV2;

inline struct C_OP_NormalLockOffsets {
	DWORD m_nControlPointNumber;
} C_OP_NormalLock;

inline struct C_INIT_RemapTransformOrientationToRotationsOffsets {
	DWORD m_TransformInput;
	DWORD m_vecRotation;
	DWORD m_bUseQuat;
	DWORD m_bWriteNormal;
} C_INIT_RemapTransformOrientationToRotations;

inline struct C_OP_CullOffsets {
	DWORD m_flCullPerc;
	DWORD m_flCullStart;
	DWORD m_flCullEnd;
	DWORD m_flCullExp;
} C_OP_Cull;

inline struct C_INIT_RandomYawFlipOffsets {
	DWORD m_flPercent;
} C_INIT_RandomYawFlip;

inline struct SequenceWeightedList_tOffsets {
	DWORD m_nSequence;
	DWORD m_flRelativeWeight;
} SequenceWeightedList_t;

inline struct C_OP_ReadFromNeighboringParticleOffsets {
	DWORD m_nFieldInput;
	DWORD m_nFieldOutput;
	DWORD m_nIncrement;
	DWORD m_DistanceCheck;
	DWORD m_flInterpolation;
} C_OP_ReadFromNeighboringParticle;

inline struct C_OP_RenderTextOffsets {
	DWORD m_OutlineColor;
	DWORD m_DefaultText;
} C_OP_RenderText;

inline struct C_OP_LerpToInitialPositionOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_flInterpolation;
	DWORD m_nCacheField;
	DWORD m_flScale;
	DWORD m_vecScale;
} C_OP_LerpToInitialPosition;

inline struct C_OP_LerpEndCapVectorOffsets {
	DWORD m_nFieldOutput;
	DWORD m_vecOutput;
	DWORD m_flLerpTime;
} C_OP_LerpEndCapVector;

inline struct C_OP_VelocityDecayOffsets {
	DWORD m_flMinVelocity;
} C_OP_VelocityDecay;

inline struct C_OP_SetCPOrientationToPointAtCPOffsets {
	DWORD m_nInputCP;
	DWORD m_nOutputCP;
	DWORD m_flInterpolation;
	DWORD m_b2DOrientation;
	DWORD m_bAvoidSingularity;
	DWORD m_bPointAway;
} C_OP_SetCPOrientationToPointAtCP;

inline struct C_OP_LockToPointListOffsets {
	DWORD m_nFieldOutput;
	DWORD m_pointList;
	DWORD m_bPlaceAlongPath;
	DWORD m_bClosedLoop;
	DWORD m_nNumPointsAlongPath;
} C_OP_LockToPointList;

inline struct C_OP_MovementPlaceOnGroundOffsets {
	DWORD m_flOffset;
	DWORD m_flMaxTraceLength;
	DWORD m_flTolerance;
	DWORD m_flTraceOffset;
	DWORD m_flLerpRate;
	DWORD m_CollisionGroupName;
	DWORD m_nTraceSet;
	DWORD m_nRefCP1;
	DWORD m_nRefCP2;
	DWORD m_nLerpCP;
	DWORD m_nTraceMissBehavior;
	DWORD m_bIncludeShotHull;
	DWORD m_bIncludeWater;
	DWORD m_bSetNormal;
	DWORD m_bScaleOffset;
	DWORD m_nPreserveOffsetCP;
	DWORD m_nIgnoreCP;
} C_OP_MovementPlaceOnGround;

inline struct C_OP_SetCPOrientationToDirectionOffsets {
	DWORD m_nInputControlPoint;
	DWORD m_nOutputControlPoint;
} C_OP_SetCPOrientationToDirection;

inline struct C_OP_RemapCrossProductOfTwoVectorsToVectorOffsets {
	DWORD m_InputVec1;
	DWORD m_InputVec2;
	DWORD m_nFieldOutput;
	DWORD m_bNormalize;
} C_OP_RemapCrossProductOfTwoVectorsToVector;

inline struct C_OP_RemapTransformOrientationToRotationsOffsets {
	DWORD m_TransformInput;
	DWORD m_vecRotation;
	DWORD m_bUseQuat;
	DWORD m_bWriteNormal;
} C_OP_RemapTransformOrientationToRotations;

inline struct C_OP_InheritFromParentParticlesV2Offsets {
	DWORD m_flScale;
	DWORD m_nFieldOutput;
	DWORD m_nIncrement;
	DWORD m_bRandomDistribution;
	DWORD m_bReverse;
	DWORD m_nMissingParentBehavior;
	DWORD m_flInterpolation;
} C_OP_InheritFromParentParticlesV2;

inline struct C_INIT_RandomSecondSequenceOffsets {
	DWORD m_nSequenceMin;
	DWORD m_nSequenceMax;
} C_INIT_RandomSecondSequence;

inline struct C_OP_SetFloatCollectionOffsets {
	DWORD m_InputValue;
	DWORD m_nOutputField;
	DWORD m_nSetMethod;
	DWORD m_Lerp;
} C_OP_SetFloatCollection;

inline struct PointDefinition_tOffsets {
	DWORD m_nControlPoint;
	DWORD m_bLocalCoords;
	DWORD m_vOffset;
} PointDefinition_t;

inline struct C_OP_SetControlPointPositionToRandomActiveCPOffsets {
	DWORD m_nCP1;
	DWORD m_nHeadLocationMin;
	DWORD m_nHeadLocationMax;
	DWORD m_flResetRate;
} C_OP_SetControlPointPositionToRandomActiveCP;

inline struct C_OP_DiffusionOffsets {
	DWORD m_flRadiusScale;
	DWORD m_nFieldOutput;
	DWORD m_nVoxelGridResolution;
} C_OP_Diffusion;

inline struct C_INIT_AgeNoiseOffsets {
	DWORD m_bAbsVal;
	DWORD m_bAbsValInv;
	DWORD m_flOffset;
	DWORD m_flAgeMin;
	DWORD m_flAgeMax;
	DWORD m_flNoiseScale;
	DWORD m_flNoiseScaleLoc;
	DWORD m_vecOffsetLoc;
} C_INIT_AgeNoise;

inline struct C_OP_RemapVectorComponentToScalarOffsets {
	DWORD m_nFieldInput;
	DWORD m_nFieldOutput;
	DWORD m_nComponent;
} C_OP_RemapVectorComponentToScalar;

inline struct CGeneralRandomRotationOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flDegrees;
	DWORD m_flDegreesMin;
	DWORD m_flDegreesMax;
	DWORD m_flRotationRandExponent;
	DWORD m_bRandomlyFlipDirection;
} CGeneralRandomRotation;

inline struct C_OP_DistanceBetweenVecsOffsets {
	DWORD m_nFieldOutput;
	DWORD m_vecPoint1;
	DWORD m_vecPoint2;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_nSetMethod;
	DWORD m_bDeltaTime;
} C_OP_DistanceBetweenVecs;

inline struct C_OP_DampenToCPOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_flRange;
	DWORD m_flScale;
} C_OP_DampenToCP;

inline struct C_OP_CalculateVectorAttributeOffsets {
	DWORD m_vStartValue;
	DWORD m_nFieldInput1;
	DWORD m_flInputScale1;
	DWORD m_nFieldInput2;
	DWORD m_flInputScale2;
	DWORD m_nControlPointInput1;
	DWORD m_flControlPointScale1;
	DWORD m_nControlPointInput2;
	DWORD m_flControlPointScale2;
	DWORD m_nFieldOutput;
	DWORD m_vFinalOutputScale;
} C_OP_CalculateVectorAttribute;

inline struct C_OP_LockToBoneOffsets {
	DWORD m_modelInput;
	DWORD m_transformInput;
	DWORD m_flLifeTimeFadeStart;
	DWORD m_flLifeTimeFadeEnd;
	DWORD m_flJumpThreshold;
	DWORD m_flPrevPosScale;
	DWORD m_HitboxSetName;
	DWORD m_bRigid;
	DWORD m_bUseBones;
	DWORD m_nFieldOutput;
	DWORD m_nFieldOutputPrev;
	DWORD m_nRotationSetType;
	DWORD m_bRigidRotationLock;
	DWORD m_vecRotation;
	DWORD m_flRotLerp;
} C_OP_LockToBone;

inline struct C_OP_ScreenSpaceRotateTowardTargetOffsets {
	DWORD m_vecTargetPosition;
	DWORD m_flOutputRemap;
	DWORD m_nSetMethod;
	DWORD m_flScreenEdgeAlignmentDistance;
} C_OP_ScreenSpaceRotateTowardTarget;

inline struct C_OP_MovementMaintainOffsetOffsets {
	DWORD m_vecOffset;
	DWORD m_nCP;
	DWORD m_bRadiusScale;
} C_OP_MovementMaintainOffset;

inline struct C_INIT_CreateWithinCapsuleTransformOffsets {
	DWORD m_fRadiusMin;
	DWORD m_fRadiusMax;
	DWORD m_fHeight;
	DWORD m_TransformInput;
	DWORD m_fSpeedMin;
	DWORD m_fSpeedMax;
	DWORD m_fSpeedRandExp;
	DWORD m_LocalCoordinateSystemSpeedMin;
	DWORD m_LocalCoordinateSystemSpeedMax;
	DWORD m_nFieldOutput;
	DWORD m_nFieldVelocity;
} C_INIT_CreateWithinCapsuleTransform;

inline struct C_OP_SetVecOffsets {
	DWORD m_InputValue;
	DWORD m_nOutputField;
	DWORD m_nSetMethod;
	DWORD m_Lerp;
	DWORD m_bNormalizedOutput;
} C_OP_SetVec;

inline struct C_INIT_CreateFromParentParticlesOffsets {
	DWORD m_flVelocityScale;
	DWORD m_flIncrement;
	DWORD m_bRandomDistribution;
	DWORD m_nRandomSeed;
	DWORD m_bSubFrame;
	DWORD m_bSetRopeSegmentID;
} C_INIT_CreateFromParentParticles;

inline struct C_INIT_CheckParticleForWaterOffsets {
	DWORD m_flRadius;
	DWORD m_nFieldOutput;
	DWORD m_flOutputRemap;
	DWORD m_nSetMethod;
} C_INIT_CheckParticleForWater;

inline struct C_OP_RenderOmni2LightOffsets {
	DWORD m_nLightType;
	DWORD m_vColorBlend;
	DWORD m_nColorBlendType;
	DWORD m_nBrightnessUnit;
	DWORD m_flBrightnessLumens;
	DWORD m_flBrightnessCandelas;
	DWORD m_bCastShadows;
	DWORD m_bFog;
	DWORD m_flFogScale;
	DWORD m_flLuminaireRadius;
	DWORD m_flSkirt;
	DWORD m_flRange;
	DWORD m_flInnerConeAngle;
	DWORD m_flOuterConeAngle;
	DWORD m_hLightCookie;
	DWORD m_bSphericalCookie;
} C_OP_RenderOmni2Light;

inline struct C_OP_ConnectParentParticleToNearestOffsets {
	DWORD m_nFirstControlPoint;
	DWORD m_nSecondControlPoint;
	DWORD m_bUseRadius;
	DWORD m_flRadiusScale;
	DWORD m_flParentRadiusScale;
} C_OP_ConnectParentParticleToNearest;

inline struct CPAssignment_tOffsets {
	DWORD m_nCPNumber;
	DWORD m_Pos;
	DWORD m_nOrientationMode;
} CPAssignment_t;

inline struct C_INIT_InitSkinnedPositionFromCPSnapshotOffsets {
	DWORD m_nSnapshotControlPointNumber;
	DWORD m_nControlPointNumber;
	DWORD m_bRandom;
	DWORD m_nRandomSeed;
	DWORD m_bRigid;
	DWORD m_bSetNormal;
	DWORD m_bIgnoreDt;
	DWORD m_flMinNormalVelocity;
	DWORD m_flMaxNormalVelocity;
	DWORD m_nIndexType;
	DWORD m_flReadIndex;
	DWORD m_flIncrement;
	DWORD m_nFullLoopIncrement;
	DWORD m_nSnapShotStartPoint;
	DWORD m_flBoneVelocity;
	DWORD m_flBoneVelocityMax;
	DWORD m_bCopyColor;
	DWORD m_bCopyAlpha;
	DWORD m_bSetRadius;
} C_INIT_InitSkinnedPositionFromCPSnapshot;

inline struct C_OP_LagCompensationOffsets {
	DWORD m_nDesiredVelocityCP;
	DWORD m_nLatencyCP;
	DWORD m_nLatencyCPField;
	DWORD m_nDesiredVelocityCPField;
} C_OP_LagCompensation;

inline struct C_OP_CollideWithSelfOffsets {
	DWORD m_flRadiusScale;
	DWORD m_flMinimumSpeed;
} C_OP_CollideWithSelf;

inline struct C_OP_NoiseOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_fl4NoiseScale;
	DWORD m_bAdditive;
	DWORD m_flNoiseAnimationTimeScale;
} C_OP_Noise;

inline struct C_OP_FadeAndKillForTracersOffsets {
	DWORD m_flStartFadeInTime;
	DWORD m_flEndFadeInTime;
	DWORD m_flStartFadeOutTime;
	DWORD m_flEndFadeOutTime;
	DWORD m_flStartAlpha;
	DWORD m_flEndAlpha;
} C_OP_FadeAndKillForTracers;

inline struct C_OP_ColorAdjustHSLOffsets {
	DWORD m_flHueAdjust;
	DWORD m_flSaturationAdjust;
	DWORD m_flLightnessAdjust;
} C_OP_ColorAdjustHSL;

inline struct CParticleMassCalculationParametersOffsets {
	DWORD m_nMassMode;
	DWORD m_flRadius;
	DWORD m_flNominalRadius;
	DWORD m_flScale;
} CParticleMassCalculationParameters;

inline struct C_OP_SequenceFromModelOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_nFieldOutput;
	DWORD m_nFieldOutputAnim;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_nSetMethod;
} C_OP_SequenceFromModel;

inline struct C_OP_AlphaDecayOffsets {
	DWORD m_flMinAlpha;
} C_OP_AlphaDecay;

inline struct C_OP_RemapDensityGradientToVectorAttributeOffsets {
	DWORD m_flRadiusScale;
	DWORD m_nFieldOutput;
} C_OP_RemapDensityGradientToVectorAttribute;

inline struct C_INIT_InitVecOffsets {
	DWORD m_InputValue;
	DWORD m_nOutputField;
	DWORD m_nSetMethod;
	DWORD m_bNormalizedOutput;
	DWORD m_bWritePreviousPosition;
} C_INIT_InitVec;

inline struct C_INIT_SetHitboxToModelOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_nForceInModel;
	DWORD m_bEvenDistribution;
	DWORD m_nDesiredHitbox;
	DWORD m_vecHitBoxScale;
	DWORD m_vecDirectionBias;
	DWORD m_bMaintainHitbox;
	DWORD m_bUseBones;
	DWORD m_HitboxSetName;
	DWORD m_flShellSize;
} C_INIT_SetHitboxToModel;

inline struct C_OP_MovementMoveAlongSkinnedCPSnapshotOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_nSnapshotControlPointNumber;
	DWORD m_bSetNormal;
	DWORD m_bSetRadius;
	DWORD m_flInterpolation;
	DWORD m_flTValue;
} C_OP_MovementMoveAlongSkinnedCPSnapshot;

inline struct C_OP_LerpScalarOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flOutput;
	DWORD m_flStartTime;
	DWORD m_flEndTime;
} C_OP_LerpScalar;

inline struct C_INIT_InitialRepulsionVelocityOffsets {
	DWORD m_CollisionGroupName;
	DWORD m_nTraceSet;
	DWORD m_vecOutputMin;
	DWORD m_vecOutputMax;
	DWORD m_nControlPointNumber;
	DWORD m_bPerParticle;
	DWORD m_bTranslate;
	DWORD m_bProportional;
	DWORD m_flTraceLength;
	DWORD m_bPerParticleTR;
	DWORD m_bInherit;
	DWORD m_nChildCP;
	DWORD m_nChildGroupID;
} C_INIT_InitialRepulsionVelocity;

inline struct C_OP_ClampScalarOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
} C_OP_ClampScalar;

inline struct C_OP_SetControlPointToHMDOffsets {
	DWORD m_nCP1;
	DWORD m_vecCP1Pos;
	DWORD m_bOrientToHMD;
} C_OP_SetControlPointToHMD;

inline struct C_OP_DifferencePreviousParticleOffsets {
	DWORD m_nFieldInput;
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_nSetMethod;
	DWORD m_bActiveRange;
	DWORD m_bSetPreviousParticle;
} C_OP_DifferencePreviousParticle;

inline struct C_OP_SetControlPointFieldFromVectorExpressionOffsets {
	DWORD m_nExpression;
	DWORD m_vecInput1;
	DWORD m_vecInput2;
	DWORD m_flLerp;
	DWORD m_flOutputRemap;
	DWORD m_nOutputCP;
	DWORD m_nOutVectorField;
} C_OP_SetControlPointFieldFromVectorExpression;

inline struct C_OP_PercentageBetweenTransformsOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_TransformStart;
	DWORD m_TransformEnd;
	DWORD m_nSetMethod;
	DWORD m_bActiveRange;
	DWORD m_bRadialCheck;
} C_OP_PercentageBetweenTransforms;

inline struct C_INIT_PlaneCullOffsets {
	DWORD m_nControlPoint;
	DWORD m_flDistance;
	DWORD m_bCullInside;
} C_INIT_PlaneCull;

inline struct C_INIT_InitFromCPSnapshotOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_strSnapshotSubset;
	DWORD m_nAttributeToRead;
	DWORD m_nAttributeToWrite;
	DWORD m_nLocalSpaceCP;
	DWORD m_bRandom;
	DWORD m_bReverse;
	DWORD m_nSnapShotIncrement;
	DWORD m_nManualSnapshotIndex;
	DWORD m_nRandomSeed;
	DWORD m_bLocalSpaceAngles;
} C_INIT_InitFromCPSnapshot;

inline struct C_OP_RenderCablesOffsets {
	DWORD m_flRadiusScale;
	DWORD m_flAlphaScale;
	DWORD m_vecColorScale;
	DWORD m_nColorBlendType;
	DWORD m_hMaterial;
	DWORD m_nTextureRepetitionMode;
	DWORD m_flTextureRepeatsPerSegment;
	DWORD m_flTextureRepeatsCircumference;
	DWORD m_flColorMapOffsetV;
	DWORD m_flColorMapOffsetU;
	DWORD m_flNormalMapOffsetV;
	DWORD m_flNormalMapOffsetU;
	DWORD m_bDrawCableCaps;
	DWORD m_flCapRoundness;
	DWORD m_flCapOffsetAmount;
	DWORD m_flTessScale;
	DWORD m_nMinTesselation;
	DWORD m_nMaxTesselation;
	DWORD m_nRoundness;
	DWORD m_nForceRoundnessFixed;
	DWORD m_LightingTransform;
	DWORD m_MaterialFloatVars;
	DWORD m_MaterialVecVars;
} C_OP_RenderCables;

inline struct C_INIT_InheritVelocityOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_flVelocityScale;
} C_INIT_InheritVelocity;

inline struct C_OP_SetControlPointToWaterSurfaceOffsets {
	DWORD m_nSourceCP;
	DWORD m_nDestCP;
	DWORD m_nFlowCP;
	DWORD m_nActiveCP;
	DWORD m_nActiveCPField;
	DWORD m_flRetestRate;
	DWORD m_bAdaptiveThreshold;
} C_OP_SetControlPointToWaterSurface;

inline struct C_INIT_PositionOffsetOffsets {
	DWORD m_OffsetMin;
	DWORD m_OffsetMax;
	DWORD m_TransformInput;
	DWORD m_bLocalCoords;
	DWORD m_bProportional;
	DWORD m_randomnessParameters;
} C_INIT_PositionOffset;

inline struct C_INIT_NormalAlignToCPOffsets {
	DWORD m_transformInput;
	DWORD m_nControlPointAxis;
} C_INIT_NormalAlignToCP;

inline struct C_OP_ShapeMatchingConstraintOffsets {
	DWORD m_flShapeRestorationTime;
} C_OP_ShapeMatchingConstraint;

inline struct C_OP_SetChildControlPointsOffsets {
	DWORD m_nChildGroupID;
	DWORD m_nFirstControlPoint;
	DWORD m_nNumControlPoints;
	DWORD m_nFirstSourcePoint;
	DWORD m_bReverse;
	DWORD m_bSetOrientation;
	DWORD m_nOrientation;
} C_OP_SetChildControlPoints;

inline struct C_OP_ChladniWaveOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_vecWaveLength;
	DWORD m_vecHarmonics;
	DWORD m_nSetMethod;
	DWORD m_nLocalSpaceControlPoint;
	DWORD m_b3D;
} C_OP_ChladniWave;

inline struct C_OP_RemapDirectionToCPToVectorOffsets {
	DWORD m_nCP;
	DWORD m_nFieldOutput;
	DWORD m_flScale;
	DWORD m_flOffsetRot;
	DWORD m_vecOffsetAxis;
	DWORD m_bNormalize;
	DWORD m_nFieldStrength;
} C_OP_RemapDirectionToCPToVector;

inline struct C_OP_DriveCPFromGlobalSoundFloatOffsets {
	DWORD m_nOutputControlPoint;
	DWORD m_nOutputField;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_StackName;
	DWORD m_OperatorName;
	DWORD m_FieldName;
} C_OP_DriveCPFromGlobalSoundFloat;

inline struct C_INIT_ScreenSpacePositionOfTargetOffsets {
	DWORD m_vecTargetPosition;
	DWORD m_bOututBehindness;
	DWORD m_nBehindFieldOutput;
	DWORD m_flBehindOutputRemap;
} C_INIT_ScreenSpacePositionOfTarget;

inline struct C_OP_RtEnvCullOffsets {
	DWORD m_vecTestDir;
	DWORD m_vecTestNormal;
	DWORD m_bCullOnMiss;
	DWORD m_bStickInsteadOfCull;
	DWORD m_RtEnvName;
	DWORD m_nRTEnvCP;
	DWORD m_nComponent;
} C_OP_RtEnvCull;

inline struct C_OP_PinParticleToCPOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_vecOffset;
	DWORD m_bOffsetLocal;
	DWORD m_nParticleSelection;
	DWORD m_nParticleNumber;
	DWORD m_nPinBreakType;
	DWORD m_flBreakDistance;
	DWORD m_flBreakSpeed;
	DWORD m_flAge;
	DWORD m_nBreakControlPointNumber;
	DWORD m_nBreakControlPointNumber2;
	DWORD m_flBreakValue;
	DWORD m_flInterpolation;
	DWORD m_bRetainInitialVelocity;
} C_OP_PinParticleToCP;

inline struct C_OP_RemapCPtoVectorOffsets {
	DWORD m_nCPInput;
	DWORD m_nFieldOutput;
	DWORD m_nLocalSpaceCP;
	DWORD m_vInputMin;
	DWORD m_vInputMax;
	DWORD m_vOutputMin;
	DWORD m_vOutputMax;
	DWORD m_flStartTime;
	DWORD m_flEndTime;
	DWORD m_flInterpRate;
	DWORD m_nSetMethod;
	DWORD m_bOffset;
	DWORD m_bAccelerate;
} C_OP_RemapCPtoVector;

inline struct C_INIT_CreateParticleImpulseOffsets {
	DWORD m_InputRadius;
	DWORD m_InputMagnitude;
	DWORD m_nFalloffFunction;
	DWORD m_InputFalloffExp;
	DWORD m_nImpulseType;
} C_INIT_CreateParticleImpulse;

inline struct C_OP_DensityForceOffsets {
	DWORD m_flRadiusScale;
	DWORD m_flForceScale;
	DWORD m_flTargetDensity;
} C_OP_DensityForce;

inline struct C_INIT_CreateInEpitrochoidOffsets {
	DWORD m_nComponent1;
	DWORD m_nComponent2;
	DWORD m_TransformInput;
	DWORD m_flParticleDensity;
	DWORD m_flOffset;
	DWORD m_flRadius1;
	DWORD m_flRadius2;
	DWORD m_bUseCount;
	DWORD m_bUseLocalCoords;
	DWORD m_bOffsetExistingPos;
} C_INIT_CreateInEpitrochoid;

inline struct C_OP_ConstrainDistanceToUserSpecifiedPathOffsets {
	DWORD m_fMinDistance;
	DWORD m_flMaxDistance;
	DWORD m_flTimeScale;
	DWORD m_bLoopedPath;
	DWORD m_pointList;
} C_OP_ConstrainDistanceToUserSpecifiedPath;

inline struct C_OP_SetControlPointPositionsOffsets {
	DWORD m_bUseWorldLocation;
	DWORD m_bOrient;
	DWORD m_bSetOnce;
	DWORD m_nCP1;
	DWORD m_nCP2;
	DWORD m_nCP3;
	DWORD m_nCP4;
	DWORD m_vecCP1Pos;
	DWORD m_vecCP2Pos;
	DWORD m_vecCP3Pos;
	DWORD m_vecCP4Pos;
	DWORD m_nHeadLocation;
} C_OP_SetControlPointPositions;

inline struct C_OP_SetFloatAttributeToVectorExpressionOffsets {
	DWORD m_nExpression;
	DWORD m_vInput1;
	DWORD m_vInput2;
	DWORD m_flOutputRemap;
	DWORD m_nOutputField;
	DWORD m_nSetMethod;
} C_OP_SetFloatAttributeToVectorExpression;

inline struct C_OP_MovementRotateParticleAroundAxisOffsets {
	DWORD m_vecRotAxis;
	DWORD m_flRotRate;
	DWORD m_TransformInput;
	DWORD m_bLocalSpace;
} C_OP_MovementRotateParticleAroundAxis;

inline struct C_OP_IntraParticleForceOffsets {
	DWORD m_flAttractionMinDistance;
	DWORD m_flAttractionMaxDistance;
	DWORD m_flAttractionMaxStrength;
	DWORD m_flRepulsionMinDistance;
	DWORD m_flRepulsionMaxDistance;
	DWORD m_flRepulsionMaxStrength;
	DWORD m_bUseAABB;
} C_OP_IntraParticleForce;

inline struct C_INIT_InitFloatOffsets {
	DWORD m_InputValue;
	DWORD m_nOutputField;
	DWORD m_nSetMethod;
	DWORD m_InputStrength;
} C_INIT_InitFloat;

inline struct C_INIT_CreateOnModelOffsets {
	DWORD m_modelInput;
	DWORD m_transformInput;
	DWORD m_nForceInModel;
	DWORD m_bScaleToVolume;
	DWORD m_bEvenDistribution;
	DWORD m_nDesiredHitbox;
	DWORD m_nHitboxValueFromControlPointIndex;
	DWORD m_vecHitBoxScale;
	DWORD m_flBoneVelocity;
	DWORD m_flMaxBoneVelocity;
	DWORD m_vecDirectionBias;
	DWORD m_HitboxSetName;
	DWORD m_bLocalCoords;
	DWORD m_bUseBones;
	DWORD m_bUseMesh;
	DWORD m_flShellSize;
} C_INIT_CreateOnModel;

inline struct C_OP_InheritFromPeerSystemOffsets {
	DWORD m_nFieldOutput;
	DWORD m_nFieldInput;
	DWORD m_nIncrement;
	DWORD m_nGroupID;
} C_OP_InheritFromPeerSystem;

inline struct C_OP_PerParticleForceOffsets {
	DWORD m_flForceScale;
	DWORD m_vForce;
	DWORD m_nCP;
} C_OP_PerParticleForce;

inline struct C_OP_RenderProjectedOffsets {
	DWORD m_bProjectCharacter;
	DWORD m_bProjectWorld;
	DWORD m_bProjectWater;
	DWORD m_bFlipHorizontal;
	DWORD m_bEnableProjectedDepthControls;
	DWORD m_flMinProjectionDepth;
	DWORD m_flMaxProjectionDepth;
	DWORD m_vecProjectedMaterials;
	DWORD m_flMaterialSelection;
	DWORD m_flAnimationTimeScale;
	DWORD m_bOrientToNormal;
	DWORD m_MaterialVars;
	DWORD m_flRadiusScale;
	DWORD m_flAlphaScale;
	DWORD m_flRollScale;
	DWORD m_nAlpha2Field;
	DWORD m_vecColorScale;
	DWORD m_nColorBlendType;
} C_OP_RenderProjected;

inline struct C_OP_MaxVelocityOffsets {
	DWORD m_flMaxVelocity;
	DWORD m_flMinVelocity;
	DWORD m_nOverrideCP;
	DWORD m_nOverrideCPField;
} C_OP_MaxVelocity;

inline struct C_INIT_VelocityFromNormalOffsets {
	DWORD m_fSpeedMin;
	DWORD m_fSpeedMax;
	DWORD m_bIgnoreDt;
} C_INIT_VelocityFromNormal;

inline struct C_OP_MaintainEmitterOffsets {
	DWORD m_nParticlesToMaintain;
	DWORD m_flStartTime;
	DWORD m_flEmissionDuration;
	DWORD m_flEmissionRate;
	DWORD m_nSnapshotControlPoint;
	DWORD m_strSnapshotSubset;
	DWORD m_bEmitInstantaneously;
	DWORD m_bFinalEmitOnStop;
	DWORD m_flScale;
} C_OP_MaintainEmitter;

inline struct C_INIT_PositionOffsetToCPOffsets {
	DWORD m_nControlPointNumberStart;
	DWORD m_nControlPointNumberEnd;
	DWORD m_bLocalCoords;
} C_INIT_PositionOffsetToCP;

inline struct C_INIT_RemapInitialTransformDirectionToRotationOffsets {
	DWORD m_TransformInput;
	DWORD m_nFieldOutput;
	DWORD m_flOffsetRot;
	DWORD m_nComponent;
} C_INIT_RemapInitialTransformDirectionToRotation;

inline struct C_OP_FadeAndKillOffsets {
	DWORD m_flStartFadeInTime;
	DWORD m_flEndFadeInTime;
	DWORD m_flStartFadeOutTime;
	DWORD m_flEndFadeOutTime;
	DWORD m_flStartAlpha;
	DWORD m_flEndAlpha;
	DWORD m_bForcePreserveParticleOrder;
} C_OP_FadeAndKill;

inline struct C_OP_ColorInterpolateOffsets {
	DWORD m_ColorFade;
	DWORD m_flFadeStartTime;
	DWORD m_flFadeEndTime;
	DWORD m_nFieldOutput;
	DWORD m_bEaseInOut;
} C_OP_ColorInterpolate;

inline struct C_OP_RampScalarSplineOffsets {
	DWORD m_RateMin;
	DWORD m_RateMax;
	DWORD m_flStartTime_min;
	DWORD m_flStartTime_max;
	DWORD m_flEndTime_min;
	DWORD m_flEndTime_max;
	DWORD m_flBias;
	DWORD m_nField;
	DWORD m_bProportionalOp;
	DWORD m_bEaseOut;
} C_OP_RampScalarSpline;

inline struct C_OP_SetControlPointFromObjectScaleOffsets {
	DWORD m_nCPInput;
	DWORD m_nCPOutput;
} C_OP_SetControlPointFromObjectScale;

inline struct C_OP_MaintainSequentialPathOffsets {
	DWORD m_fMaxDistance;
	DWORD m_flNumToAssign;
	DWORD m_flCohesionStrength;
	DWORD m_flTolerance;
	DWORD m_bLoop;
	DWORD m_bUseParticleCount;
	DWORD m_PathParams;
} C_OP_MaintainSequentialPath;

inline struct C_OP_StopAfterCPDurationOffsets {
	DWORD m_flDuration;
	DWORD m_bDestroyImmediately;
	DWORD m_bPlayEndCap;
} C_OP_StopAfterCPDuration;

inline struct CGeneralSpinOffsets {
	DWORD m_nSpinRateDegrees;
	DWORD m_nSpinRateMinDegrees;
	DWORD m_fSpinRateStopTime;
} CGeneralSpin;

inline struct C_OP_LockToSavedSequentialPathOffsets {
	DWORD m_flFadeStart;
	DWORD m_flFadeEnd;
	DWORD m_bCPPairs;
	DWORD m_PathParams;
} C_OP_LockToSavedSequentialPath;

inline struct C_INIT_RemapNamedModelElementToScalarOffsets {
	DWORD m_hModel;
	DWORD m_names;
	DWORD m_values;
	DWORD m_nFieldInput;
	DWORD m_nFieldOutput;
	DWORD m_nSetMethod;
	DWORD m_bModelFromRenderer;
} C_INIT_RemapNamedModelElementToScalar;

inline struct C_OP_ClampVectorOffsets {
	DWORD m_nFieldOutput;
	DWORD m_vecOutputMin;
	DWORD m_vecOutputMax;
} C_OP_ClampVector;

inline struct C_OP_RenderStatusEffectCitadelOffsets {
	DWORD m_pTextureColorWarp;
	DWORD m_pTextureNormal;
	DWORD m_pTextureMetalness;
	DWORD m_pTextureRoughness;
	DWORD m_pTextureSelfIllum;
	DWORD m_pTextureDetail;
} C_OP_RenderStatusEffectCitadel;

inline struct C_OP_WindForceOffsets {
	DWORD m_vForce;
} C_OP_WindForce;

inline struct C_OP_SetVariableOffsets {
	DWORD m_variableReference;
	DWORD m_transformInput;
	DWORD m_positionOffset;
	DWORD m_rotationOffset;
	DWORD m_vecInput;
	DWORD m_floatInput;
} C_OP_SetVariable;

inline struct C_OP_RenderStandardLightOffsets {
	DWORD m_nLightType;
	DWORD m_vecColorScale;
	DWORD m_nColorBlendType;
	DWORD m_flIntensity;
	DWORD m_bCastShadows;
	DWORD m_flTheta;
	DWORD m_flPhi;
	DWORD m_flRadiusMultiplier;
	DWORD m_nAttenuationStyle;
	DWORD m_flFalloffLinearity;
	DWORD m_flFiftyPercentFalloff;
	DWORD m_flZeroPercentFalloff;
	DWORD m_bRenderDiffuse;
	DWORD m_bRenderSpecular;
	DWORD m_lightCookie;
	DWORD m_nPriority;
	DWORD m_nFogLightingMode;
	DWORD m_flFogContribution;
	DWORD m_nCapsuleLightBehavior;
	DWORD m_flCapsuleLength;
	DWORD m_bReverseOrder;
	DWORD m_bClosedLoop;
	DWORD m_nPrevPntSource;
	DWORD m_flMaxLength;
	DWORD m_flMinLength;
	DWORD m_bIgnoreDT;
	DWORD m_flConstrainRadiusToLengthRatio;
	DWORD m_flLengthScale;
	DWORD m_flLengthFadeInTime;
} C_OP_RenderStandardLight;

inline struct C_OP_DistanceToTransformOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_TransformStart;
	DWORD m_bLOS;
	DWORD m_CollisionGroupName;
	DWORD m_nTraceSet;
	DWORD m_flMaxTraceLength;
	DWORD m_flLOSScale;
	DWORD m_nSetMethod;
	DWORD m_bActiveRange;
	DWORD m_bAdditive;
	DWORD m_vecComponentScale;
} C_OP_DistanceToTransform;

inline struct C_OP_RemapControlPointOrientationToRotationOffsets {
	DWORD m_nCP;
	DWORD m_nFieldOutput;
	DWORD m_flOffsetRot;
	DWORD m_nComponent;
} C_OP_RemapControlPointOrientationToRotation;

inline struct C_OP_SetControlPointToCenterOffsets {
	DWORD m_nCP1;
	DWORD m_vecCP1Pos;
	DWORD m_bUseAvgParticlePos;
	DWORD m_nSetParent;
} C_OP_SetControlPointToCenter;

inline struct C_OP_RemapAverageScalarValuetoCPOffsets {
	DWORD m_nExpression;
	DWORD m_flDecimalPlaces;
	DWORD m_nOutControlPointNumber;
	DWORD m_nOutVectorField;
	DWORD m_nField;
	DWORD m_flOutputRemap;
} C_OP_RemapAverageScalarValuetoCP;

inline struct C_OP_RemapDotProductToScalarOffsets {
	DWORD m_nInputCP1;
	DWORD m_nInputCP2;
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_bUseParticleVelocity;
	DWORD m_nSetMethod;
	DWORD m_bActiveRange;
	DWORD m_bUseParticleNormal;
} C_OP_RemapDotProductToScalar;

inline struct C_OP_RemapCPtoCPOffsets {
	DWORD m_nInputControlPoint;
	DWORD m_nOutputControlPoint;
	DWORD m_nInputField;
	DWORD m_nOutputField;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_bDerivative;
	DWORD m_flInterpRate;
} C_OP_RemapCPtoCP;

inline struct C_OP_SetControlPointRotationOffsets {
	DWORD m_vecRotAxis;
	DWORD m_flRotRate;
	DWORD m_nCP;
	DWORD m_nLocalCP;
} C_OP_SetControlPointRotation;

inline struct C_OP_CurlNoiseForceOffsets {
	DWORD m_nNoiseType;
	DWORD m_vecNoiseFreq;
	DWORD m_vecNoiseScale;
	DWORD m_vecOffset;
	DWORD m_vecOffsetRate;
	DWORD m_flWorleySeed;
	DWORD m_flWorleyJitter;
} C_OP_CurlNoiseForce;

inline struct C_INIT_Orient2DRelToCPOffsets {
	DWORD m_nCP;
	DWORD m_nFieldOutput;
	DWORD m_flRotOffset;
} C_INIT_Orient2DRelToCP;

inline struct C_OP_SetSimulationRateOffsets {
	DWORD m_flSimulationScale;
} C_OP_SetSimulationRate;

inline struct C_OP_FadeInOffsets {
	DWORD m_flFadeInTimeMin;
	DWORD m_flFadeInTimeMax;
	DWORD m_flFadeInTimeExp;
	DWORD m_bProportional;
} C_OP_FadeIn;

inline struct C_OP_RenderScreenShakeOffsets {
	DWORD m_flDurationScale;
	DWORD m_flRadiusScale;
	DWORD m_flFrequencyScale;
	DWORD m_flAmplitudeScale;
	DWORD m_nRadiusField;
	DWORD m_nDurationField;
	DWORD m_nFrequencyField;
	DWORD m_nAmplitudeField;
	DWORD m_nFilterCP;
} C_OP_RenderScreenShake;

inline struct C_OP_RemapBoundingVolumetoCPOffsets {
	DWORD m_nOutControlPointNumber;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
} C_OP_RemapBoundingVolumetoCP;

inline struct C_OP_HSVShiftToCPOffsets {
	DWORD m_nColorCP;
	DWORD m_nColorGemEnableCP;
	DWORD m_nOutputCP;
	DWORD m_DefaultHSVColor;
} C_OP_HSVShiftToCP;

inline struct C_INIT_GlobalScaleOffsets {
	DWORD m_flScale;
	DWORD m_nScaleControlPointNumber;
	DWORD m_nControlPointNumber;
	DWORD m_bScaleRadius;
	DWORD m_bScalePosition;
	DWORD m_bScaleVelocity;
} C_INIT_GlobalScale;

inline struct C_INIT_RadiusFromCPObjectOffsets {
	DWORD m_nControlPoint;
} C_INIT_RadiusFromCPObject;

inline struct C_INIT_InitialVelocityFromHitboxOffsets {
	DWORD m_flVelocityMin;
	DWORD m_flVelocityMax;
	DWORD m_nControlPointNumber;
	DWORD m_HitboxSetName;
	DWORD m_bUseBones;
} C_INIT_InitialVelocityFromHitbox;

inline struct C_OP_LerpVectorOffsets {
	DWORD m_nFieldOutput;
	DWORD m_vecOutput;
	DWORD m_flStartTime;
	DWORD m_flEndTime;
	DWORD m_nSetMethod;
} C_OP_LerpVector;

inline struct C_OP_SetControlPointFieldToWaterOffsets {
	DWORD m_nSourceCP;
	DWORD m_nDestCP;
	DWORD m_nCPField;
} C_OP_SetControlPointFieldToWater;

inline struct TextureGroup_tOffsets {
	DWORD m_bEnabled;
	DWORD m_bReplaceTextureWithGradient;
	DWORD m_hTexture;
	DWORD m_Gradient;
	DWORD m_nTextureType;
	DWORD m_nTextureChannels;
	DWORD m_nTextureBlendMode;
	DWORD m_flTextureBlend;
	DWORD m_TextureControls;
} TextureGroup_t;

inline struct C_OP_TimeVaryingForceOffsets {
	DWORD m_flStartLerpTime;
	DWORD m_StartingForce;
	DWORD m_flEndLerpTime;
	DWORD m_EndingForce;
} C_OP_TimeVaryingForce;

inline struct C_OP_SetCPOrientationToGroundNormalOffsets {
	DWORD m_flInterpRate;
	DWORD m_flMaxTraceLength;
	DWORD m_flTolerance;
	DWORD m_flTraceOffset;
	DWORD m_CollisionGroupName;
	DWORD m_nTraceSet;
	DWORD m_nInputCP;
	DWORD m_nOutputCP;
	DWORD m_bIncludeWater;
} C_OP_SetCPOrientationToGroundNormal;

inline struct C_OP_SnapshotSkinToBonesOffsets {
	DWORD m_bTransformNormals;
	DWORD m_bTransformRadii;
	DWORD m_nControlPointNumber;
	DWORD m_flLifeTimeFadeStart;
	DWORD m_flLifeTimeFadeEnd;
	DWORD m_flJumpThreshold;
	DWORD m_flPrevPosScale;
} C_OP_SnapshotSkinToBones;

inline struct C_INIT_CreateWithinSphereTransformOffsets {
	DWORD m_fRadiusMin;
	DWORD m_fRadiusMax;
	DWORD m_vecDistanceBias;
	DWORD m_vecDistanceBiasAbs;
	DWORD m_TransformInput;
	DWORD m_fSpeedMin;
	DWORD m_fSpeedMax;
	DWORD m_fSpeedRandExp;
	DWORD m_bLocalCoords;
	DWORD m_LocalCoordinateSystemSpeedMin;
	DWORD m_LocalCoordinateSystemSpeedMax;
	DWORD m_nFieldOutput;
	DWORD m_nFieldVelocity;
} C_INIT_CreateWithinSphereTransform;

inline struct C_OP_RadiusDecayOffsets {
	DWORD m_flMinRadius;
} C_OP_RadiusDecay;

inline struct C_INIT_RemapScalarToVectorOffsets {
	DWORD m_nFieldInput;
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_vecOutputMin;
	DWORD m_vecOutputMax;
	DWORD m_flStartTime;
	DWORD m_flEndTime;
	DWORD m_nSetMethod;
	DWORD m_nControlPointNumber;
	DWORD m_bLocalCoords;
	DWORD m_flRemapBias;
} C_INIT_RemapScalarToVector;

inline struct C_INIT_InitialSequenceFromModelOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_nFieldOutput;
	DWORD m_nFieldOutputAnim;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_nSetMethod;
} C_INIT_InitialSequenceFromModel;

inline struct C_OP_NoiseEmitterOffsets {
	DWORD m_flEmissionDuration;
	DWORD m_flStartTime;
	DWORD m_flEmissionScale;
	DWORD m_nScaleControlPoint;
	DWORD m_nScaleControlPointField;
	DWORD m_nWorldNoisePoint;
	DWORD m_bAbsVal;
	DWORD m_bAbsValInv;
	DWORD m_flOffset;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_flNoiseScale;
	DWORD m_flWorldNoiseScale;
	DWORD m_vecOffsetLoc;
	DWORD m_flWorldTimeScale;
} C_OP_NoiseEmitter;

inline struct CParticleFunctionInitializerOffsets {
	DWORD m_nAssociatedEmitterIndex;
} CParticleFunctionInitializer;

inline struct C_OP_SelectivelyEnableChildrenOffsets {
	DWORD m_nChildGroupID;
	DWORD m_nFirstChild;
	DWORD m_nNumChildrenToEnable;
	DWORD m_bPlayEndcapOnStop;
	DWORD m_bDestroyImmediately;
} C_OP_SelectivelyEnableChildren;

inline struct ModelReference_tOffsets {
	DWORD m_model;
	DWORD m_flRelativeProbabilityOfSpawn;
} ModelReference_t;

inline struct C_OP_PlanarConstraintOffsets {
	DWORD m_PointOnPlane;
	DWORD m_PlaneNormal;
	DWORD m_nControlPointNumber;
	DWORD m_bGlobalOrigin;
	DWORD m_bGlobalNormal;
	DWORD m_flRadiusScale;
	DWORD m_flMaximumDistanceToCP;
	DWORD m_bUseOldCode;
} C_OP_PlanarConstraint;

inline struct C_INIT_CreateFromCPsOffsets {
	DWORD m_nIncrement;
	DWORD m_nMinCP;
	DWORD m_nMaxCP;
	DWORD m_nDynamicCPCount;
} C_INIT_CreateFromCPs;

inline struct C_OP_LockPointsOffsets {
	DWORD m_nMinCol;
	DWORD m_nMaxCol;
	DWORD m_nMinRow;
	DWORD m_nMaxRow;
	DWORD m_nControlPoint;
	DWORD m_flBlendValue;
} C_OP_LockPoints;

inline struct C_INIT_CreateSpiralSphereOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_nOverrideCP;
	DWORD m_nDensity;
	DWORD m_flInitialRadius;
	DWORD m_flInitialSpeedMin;
	DWORD m_flInitialSpeedMax;
	DWORD m_bUseParticleCount;
} C_INIT_CreateSpiralSphere;

inline struct C_OP_CPVelocityForceOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_flScale;
} C_OP_CPVelocityForce;

inline struct C_OP_RemapNamedModelElementEndCapOffsets {
	DWORD m_hModel;
	DWORD m_inNames;
	DWORD m_outNames;
	DWORD m_fallbackNames;
	DWORD m_bModelFromRenderer;
	DWORD m_nFieldInput;
	DWORD m_nFieldOutput;
} C_OP_RemapNamedModelElementEndCap;

inline struct C_INIT_ScaleVelocityOffsets {
	DWORD m_vecScale;
} C_INIT_ScaleVelocity;

inline struct C_OP_MoveToHitboxOffsets {
	DWORD m_modelInput;
	DWORD m_transformInput;
	DWORD m_flLifeTimeLerpStart;
	DWORD m_flLifeTimeLerpEnd;
	DWORD m_flPrevPosScale;
	DWORD m_HitboxSetName;
	DWORD m_bUseBones;
	DWORD m_nLerpType;
	DWORD m_flInterpolation;
} C_OP_MoveToHitbox;

inline struct C_OP_PinRopeSegmentParticleToParentOffsets {
	DWORD m_nParticleSelection;
	DWORD m_nParticleNumber;
	DWORD m_flInterpolation;
} C_OP_PinRopeSegmentParticleToParent;

inline struct C_INIT_PointListOffsets {
	DWORD m_nFieldOutput;
	DWORD m_pointList;
	DWORD m_bPlaceAlongPath;
	DWORD m_bClosedLoop;
	DWORD m_nNumPointsAlongPath;
} C_INIT_PointList;

inline struct C_OP_LerpToOtherAttributeOffsets {
	DWORD m_flInterpolation;
	DWORD m_nFieldInputFrom;
	DWORD m_nFieldInput;
	DWORD m_nFieldOutput;
} C_OP_LerpToOtherAttribute;

inline struct C_INIT_RandomColorOffsets {
	DWORD m_ColorMin;
	DWORD m_ColorMax;
	DWORD m_TintMin;
	DWORD m_TintMax;
	DWORD m_flTintPerc;
	DWORD m_flUpdateThreshold;
	DWORD m_nTintCP;
	DWORD m_nFieldOutput;
	DWORD m_nTintBlendMode;
	DWORD m_flLightAmplification;
} C_INIT_RandomColor;

inline struct C_OP_SetGravityToCPOffsets {
	DWORD m_nCPInput;
	DWORD m_nCPOutput;
	DWORD m_flScale;
	DWORD m_bSetOrientation;
	DWORD m_bSetZDown;
} C_OP_SetGravityToCP;

inline struct C_INIT_RemapParticleCountToScalarOffsets {
	DWORD m_nFieldOutput;
	DWORD m_nInputMin;
	DWORD m_nInputMax;
	DWORD m_nScaleControlPoint;
	DWORD m_nScaleControlPointField;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_nSetMethod;
	DWORD m_bActiveRange;
	DWORD m_bInvert;
	DWORD m_bWrap;
	DWORD m_flRemapBias;
} C_INIT_RemapParticleCountToScalar;

inline struct C_INIT_InheritFromParentParticlesOffsets {
	DWORD m_flScale;
	DWORD m_nFieldOutput;
	DWORD m_nIncrement;
	DWORD m_bRandomDistribution;
	DWORD m_nRandomSeed;
} C_INIT_InheritFromParentParticles;

inline struct C_OP_RampScalarLinearSimpleOffsets {
	DWORD m_Rate;
	DWORD m_flStartTime;
	DWORD m_flEndTime;
	DWORD m_nField;
} C_OP_RampScalarLinearSimple;

inline struct C_INIT_ChaoticAttractorOffsets {
	DWORD m_flAParm;
	DWORD m_flBParm;
	DWORD m_flCParm;
	DWORD m_flDParm;
	DWORD m_flScale;
	DWORD m_flSpeedMin;
	DWORD m_flSpeedMax;
	DWORD m_nBaseCP;
	DWORD m_bUniformSpeed;
} C_INIT_ChaoticAttractor;

inline struct C_OP_MovementRigidAttachToCPOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_nScaleControlPoint;
	DWORD m_nScaleCPField;
	DWORD m_nFieldInput;
	DWORD m_nFieldOutput;
	DWORD m_bOffsetLocal;
} C_OP_MovementRigidAttachToCP;

inline struct C_OP_RenderFlattenGrassOffsets {
	DWORD m_flFlattenStrength;
	DWORD m_nStrengthFieldOverride;
	DWORD m_flRadiusScale;
} C_OP_RenderFlattenGrass;

inline struct C_OP_RenderLightBeamOffsets {
	DWORD m_vColorBlend;
	DWORD m_nColorBlendType;
	DWORD m_flBrightnessLumensPerMeter;
	DWORD m_bCastShadows;
	DWORD m_flSkirt;
	DWORD m_flRange;
	DWORD m_flThickness;
} C_OP_RenderLightBeam;

inline struct C_OP_EnableChildrenFromParentParticleCountOffsets {
	DWORD m_nChildGroupID;
	DWORD m_nFirstChild;
	DWORD m_nNumChildrenToEnable;
	DWORD m_bDisableChildren;
	DWORD m_bPlayEndcapOnStop;
	DWORD m_bDestroyImmediately;
} C_OP_EnableChildrenFromParentParticleCount;

inline struct C_INIT_DistanceToCPInitOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_nStartCP;
	DWORD m_bLOS;
	DWORD m_CollisionGroupName;
	DWORD m_nTraceSet;
	DWORD m_flMaxTraceLength;
	DWORD m_flLOSScale;
	DWORD m_nSetMethod;
	DWORD m_bActiveRange;
	DWORD m_vecDistanceScale;
	DWORD m_flRemapBias;
} C_INIT_DistanceToCPInit;

inline struct CReplicationParametersOffsets {
	DWORD m_nReplicationMode;
	DWORD m_bScaleChildParticleRadii;
	DWORD m_flMinRandomRadiusScale;
	DWORD m_flMaxRandomRadiusScale;
	DWORD m_vMinRandomDisplacement;
	DWORD m_vMaxRandomDisplacement;
	DWORD m_flModellingScale;
} CReplicationParameters;

inline struct C_OP_ForceBasedOnDistanceToPlaneOffsets {
	DWORD m_flMinDist;
	DWORD m_vecForceAtMinDist;
	DWORD m_flMaxDist;
	DWORD m_vecForceAtMaxDist;
	DWORD m_vecPlaneNormal;
	DWORD m_nControlPointNumber;
	DWORD m_flExponent;
} C_OP_ForceBasedOnDistanceToPlane;

inline struct C_OP_RemapDensityToVectorOffsets {
	DWORD m_flRadiusScale;
	DWORD m_nFieldOutput;
	DWORD m_flDensityMin;
	DWORD m_flDensityMax;
	DWORD m_vecOutputMin;
	DWORD m_vecOutputMax;
	DWORD m_bUseParentDensity;
	DWORD m_nVoxelGridResolution;
} C_OP_RemapDensityToVector;

inline struct ParticleControlPointConfiguration_tOffsets {
	DWORD m_name;
	DWORD m_drivers;
	DWORD m_previewState;
} ParticleControlPointConfiguration_t;

inline struct C_INIT_SetRigidAttachmentOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_nFieldInput;
	DWORD m_nFieldOutput;
	DWORD m_bLocalSpace;
} C_INIT_SetRigidAttachment;

inline struct MaterialVariable_tOffsets {
	DWORD m_strVariable;
	DWORD m_nVariableField;
	DWORD m_flScale;
} MaterialVariable_t;

inline struct C_OP_RemapSpeedOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_nSetMethod;
	DWORD m_bIgnoreDelta;
} C_OP_RemapSpeed;

inline struct C_OP_RenderModelsOffsets {
	DWORD m_bOnlyRenderInEffectsBloomPass;
	DWORD m_bOnlyRenderInEffectsWaterPass;
	DWORD m_bUseMixedResolutionRendering;
	DWORD m_bOnlyRenderInEffecsGameOverlay;
	DWORD m_ModelList;
	DWORD m_nBodyGroupField;
	DWORD m_nSubModelField;
	DWORD m_bIgnoreNormal;
	DWORD m_bOrientZ;
	DWORD m_bCenterOffset;
	DWORD m_vecLocalOffset;
	DWORD m_vecLocalRotation;
	DWORD m_bIgnoreRadius;
	DWORD m_nModelScaleCP;
	DWORD m_vecComponentScale;
	DWORD m_bLocalScale;
	DWORD m_nSizeCullBloat;
	DWORD m_bAnimated;
	DWORD m_flAnimationRate;
	DWORD m_bScaleAnimationRate;
	DWORD m_bForceLoopingAnimation;
	DWORD m_bResetAnimOnStop;
	DWORD m_bManualAnimFrame;
	DWORD m_nAnimationScaleField;
	DWORD m_nAnimationField;
	DWORD m_nManualFrameField;
	DWORD m_ActivityName;
	DWORD m_SequenceName;
	DWORD m_bEnableClothSimulation;
	DWORD m_ClothEffectName;
	DWORD m_hOverrideMaterial;
	DWORD m_bOverrideTranslucentMaterials;
	DWORD m_nSkin;
	DWORD m_MaterialVars;
	DWORD m_flRenderFilter;
	DWORD m_flManualModelSelection;
	DWORD m_modelInput;
	DWORD m_nLOD;
	DWORD m_EconSlotName;
	DWORD m_bOriginalModel;
	DWORD m_bSuppressTint;
	DWORD m_nSubModelFieldType;
	DWORD m_bDisableShadows;
	DWORD m_bDisableDepthPrepass;
	DWORD m_bAcceptsDecals;
	DWORD m_bForceDrawInterlevedWithSiblings;
	DWORD m_bDoNotDrawInParticlePass;
	DWORD m_bAllowApproximateTransforms;
	DWORD m_szRenderAttribute;
	DWORD m_flRadiusScale;
	DWORD m_flAlphaScale;
	DWORD m_flRollScale;
	DWORD m_nAlpha2Field;
	DWORD m_vecColorScale;
	DWORD m_nColorBlendType;
} C_OP_RenderModels;

inline struct C_OP_RenderClientPhysicsImpulseOffsets {
	DWORD m_flRadius;
	DWORD m_flMagnitude;
	DWORD m_nSimIdFilter;
} C_OP_RenderClientPhysicsImpulse;

inline struct CParticleFunctionEmitterOffsets {
	DWORD m_nEmitterIndex;
} CParticleFunctionEmitter;

inline struct C_OP_SetControlPointOrientationToCPVelocityOffsets {
	DWORD m_nCPInput;
	DWORD m_nCPOutput;
} C_OP_SetControlPointOrientationToCPVelocity;

inline struct C_OP_RopeSpringConstraintOffsets {
	DWORD m_flRestLength;
	DWORD m_flMinDistance;
	DWORD m_flMaxDistance;
	DWORD m_flAdjustmentScale;
	DWORD m_flInitialRestingLength;
} C_OP_RopeSpringConstraint;

inline struct C_INIT_PositionWarpScalarOffsets {
	DWORD m_vecWarpMin;
	DWORD m_vecWarpMax;
	DWORD m_InputValue;
	DWORD m_flPrevPosScale;
	DWORD m_nScaleControlPointNumber;
	DWORD m_nControlPointNumber;
} C_INIT_PositionWarpScalar;

inline struct C_OP_ForceControlPointStubOffsets {
	DWORD m_ControlPoint;
} C_OP_ForceControlPointStub;

inline struct C_OP_VectorNoiseOffsets {
	DWORD m_nFieldOutput;
	DWORD m_vecOutputMin;
	DWORD m_vecOutputMax;
	DWORD m_fl4NoiseScale;
	DWORD m_bAdditive;
	DWORD m_bOffset;
	DWORD m_flNoiseAnimationTimeScale;
} C_OP_VectorNoise;

inline struct C_OP_RemapParticleCountToScalarOffsets {
	DWORD m_nFieldOutput;
	DWORD m_nInputMin;
	DWORD m_nInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_bActiveRange;
	DWORD m_nSetMethod;
} C_OP_RemapParticleCountToScalar;

inline struct C_INIT_QuantizeFloatOffsets {
	DWORD m_InputValue;
	DWORD m_nOutputField;
} C_INIT_QuantizeFloat;

inline struct C_OP_RemapModelVolumetoCPOffsets {
	DWORD m_nBBoxType;
	DWORD m_nInControlPointNumber;
	DWORD m_nOutControlPointNumber;
	DWORD m_nOutControlPointMaxNumber;
	DWORD m_nField;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flOutputMin;
	DWORD m_flOutputMax;
	DWORD m_bBBoxOnly;
	DWORD m_bCubeRoot;
} C_OP_RemapModelVolumetoCP;

inline struct C_OP_SetToCPOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_vecOffset;
	DWORD m_bOffsetLocal;
} C_OP_SetToCP;

inline struct ParticleControlPointDriver_tOffsets {
	DWORD m_iControlPoint;
	DWORD m_iAttachType;
	DWORD m_attachmentName;
	DWORD m_vecOffset;
	DWORD m_angOffset;
	DWORD m_entityName;
} ParticleControlPointDriver_t;

inline struct C_OP_ParentVorticesOffsets {
	DWORD m_flForceScale;
	DWORD m_vecTwistAxis;
	DWORD m_bFlipBasedOnYaw;
} C_OP_ParentVortices;

inline struct C_OP_SetControlPointToCPVelocityOffsets {
	DWORD m_nCPInput;
	DWORD m_nCPOutputVel;
	DWORD m_bNormalize;
	DWORD m_nCPOutputMag;
	DWORD m_nCPField;
	DWORD m_vecComparisonVelocity;
} C_OP_SetControlPointToCPVelocity;

inline struct C_OP_ClientPhysicsOffsets {
	DWORD m_strPhysicsType;
	DWORD m_bStartAsleep;
	DWORD m_flPlayerWakeRadius;
	DWORD m_flVehicleWakeRadius;
	DWORD m_bUseHighQualitySimulation;
	DWORD m_nMaxParticleCount;
	DWORD m_bRespectExclusionVolumes;
	DWORD m_bKillParticles;
	DWORD m_bDeleteSim;
	DWORD m_nControlPoint;
	DWORD m_nForcedSimId;
	DWORD m_nColorBlendType;
	DWORD m_nForcedStatusEffects;
} C_OP_ClientPhysics;

inline struct PointDefinitionWithTimeValues_tOffsets {
	DWORD m_flTimeDuration;
} PointDefinitionWithTimeValues_t;

inline struct RenderProjectedMaterial_tOffsets {
	DWORD m_hMaterial;
} RenderProjectedMaterial_t;

inline struct C_INIT_SetFloatAttributeToVectorExpressionOffsets {
	DWORD m_nExpression;
	DWORD m_vInput1;
	DWORD m_vInput2;
	DWORD m_flOutputRemap;
	DWORD m_nOutputField;
	DWORD m_nSetMethod;
} C_INIT_SetFloatAttributeToVectorExpression;

inline struct C_OP_ExternalWindForceOffsets {
	DWORD m_vecSamplePosition;
	DWORD m_vecScale;
	DWORD m_bSampleWind;
	DWORD m_bSampleWater;
	DWORD m_bDampenNearWaterPlane;
	DWORD m_bSampleGravity;
	DWORD m_vecGravityForce;
	DWORD m_bUseBasicMovementGravity;
	DWORD m_flLocalGravityScale;
	DWORD m_flLocalBuoyancyScale;
	DWORD m_vecBuoyancyForce;
} C_OP_ExternalWindForce;

inline struct C_INIT_ModelCullOffsets {
	DWORD m_nControlPointNumber;
	DWORD m_bBoundBox;
	DWORD m_bCullOutside;
	DWORD m_bUseBones;
	DWORD m_HitboxSetName;
} C_INIT_ModelCull;

inline struct C_OP_RenderSpritesOffsets {
	DWORD m_nSequenceOverride;
	DWORD m_bSequenceNumbersAreRawSequenceIndices;
	DWORD m_nOrientationType;
	DWORD m_nOrientationControlPoint;
	DWORD m_bUseYawWithNormalAligned;
	DWORD m_flMinSize;
	DWORD m_flMaxSize;
	DWORD m_flAlphaAdjustWithSizeAdjust;
	DWORD m_flStartFadeSize;
	DWORD m_flEndFadeSize;
	DWORD m_flStartFadeDot;
	DWORD m_flEndFadeDot;
	DWORD m_bDistanceAlpha;
	DWORD m_bSoftEdges;
	DWORD m_flEdgeSoftnessStart;
	DWORD m_flEdgeSoftnessEnd;
	DWORD m_bOutline;
	DWORD m_OutlineColor;
	DWORD m_nOutlineAlpha;
	DWORD m_flOutlineStart0;
	DWORD m_flOutlineStart1;
	DWORD m_flOutlineEnd0;
	DWORD m_flOutlineEnd1;
	DWORD m_nLightingMode;
	DWORD m_vecLightingOverride;
	DWORD m_flLightingTessellation;
	DWORD m_flLightingDirectionality;
	DWORD m_bParticleShadows;
	DWORD m_flShadowDensity;
	DWORD m_replicationParameters;
} C_OP_RenderSprites;

inline struct C_OP_PercentageBetweenTransformLerpCPsOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_TransformStart;
	DWORD m_TransformEnd;
	DWORD m_nOutputStartCP;
	DWORD m_nOutputStartField;
	DWORD m_nOutputEndCP;
	DWORD m_nOutputEndField;
	DWORD m_nSetMethod;
	DWORD m_bActiveRange;
	DWORD m_bRadialCheck;
} C_OP_PercentageBetweenTransformLerpCPs;

inline struct C_OP_SetPerChildControlPointOffsets {
	DWORD m_nChildGroupID;
	DWORD m_nFirstControlPoint;
	DWORD m_nNumControlPoints;
	DWORD m_nParticleIncrement;
	DWORD m_nFirstSourcePoint;
	DWORD m_bSetOrientation;
	DWORD m_nOrientationField;
	DWORD m_bNumBasedOnParticleCount;
} C_OP_SetPerChildControlPoint;

inline struct C_OP_RenderTreeShakeOffsets {
	DWORD m_flPeakStrength;
	DWORD m_nPeakStrengthFieldOverride;
	DWORD m_flRadius;
	DWORD m_nRadiusFieldOverride;
	DWORD m_flShakeDuration;
	DWORD m_flTransitionTime;
	DWORD m_flTwistAmount;
	DWORD m_flRadialAmount;
	DWORD m_flControlPointOrientationAmount;
	DWORD m_nControlPointForLinearDirection;
} C_OP_RenderTreeShake;

inline struct C_OP_SetAttributeToScalarExpressionOffsets {
	DWORD m_nExpression;
	DWORD m_flInput1;
	DWORD m_flInput2;
	DWORD m_flOutputRemap;
	DWORD m_nOutputField;
	DWORD m_nSetMethod;
} C_OP_SetAttributeToScalarExpression;

inline struct C_OP_CycleScalarOffsets {
	DWORD m_nDestField;
	DWORD m_flStartValue;
	DWORD m_flEndValue;
	DWORD m_flCycleTime;
	DWORD m_bDoNotRepeatCycle;
	DWORD m_bSynchronizeParticles;
	DWORD m_nCPScale;
	DWORD m_nCPFieldMin;
	DWORD m_nCPFieldMax;
	DWORD m_nSetMethod;
} C_OP_CycleScalar;

inline struct C_OP_RenderMaterialProxyOffsets {
	DWORD m_nMaterialControlPoint;
	DWORD m_nProxyType;
	DWORD m_MaterialVars;
	DWORD m_hOverrideMaterial;
	DWORD m_flMaterialOverrideEnabled;
	DWORD m_vecColorScale;
	DWORD m_flAlpha;
	DWORD m_nColorBlendType;
} C_OP_RenderMaterialProxy;

inline struct FloatInputMaterialVariable_tOffsets {
	DWORD m_strVariable;
	DWORD m_flInput;
} FloatInputMaterialVariable_t;

inline struct C_OP_RampScalarLinearOffsets {
	DWORD m_RateMin;
	DWORD m_RateMax;
	DWORD m_flStartTime_min;
	DWORD m_flStartTime_max;
	DWORD m_flEndTime_min;
	DWORD m_flEndTime_max;
	DWORD m_nField;
	DWORD m_bProportionalOp;
} C_OP_RampScalarLinear;

inline struct C_OP_RotateVectorOffsets {
	DWORD m_nFieldOutput;
	DWORD m_vecRotAxisMin;
	DWORD m_vecRotAxisMax;
	DWORD m_flRotRateMin;
	DWORD m_flRotRateMax;
	DWORD m_bNormalize;
	DWORD m_flScale;
} C_OP_RotateVector;

inline struct C_INIT_InitVecCollectionOffsets {
	DWORD m_InputValue;
	DWORD m_nOutputField;
} C_INIT_InitVecCollection;

inline struct C_INIT_SequenceFromCPOffsets {
	DWORD m_bKillUnused;
	DWORD m_bRadiusScale;
	DWORD m_nCP;
	DWORD m_vecOffset;
} C_INIT_SequenceFromCP;

inline struct C_OP_CPOffsetToPercentageBetweenCPsOffsets {
	DWORD m_flInputMin;
	DWORD m_flInputMax;
	DWORD m_flInputBias;
	DWORD m_nStartCP;
	DWORD m_nEndCP;
	DWORD m_nOffsetCP;
	DWORD m_nOuputCP;
	DWORD m_nInputCP;
	DWORD m_bRadialCheck;
	DWORD m_bScaleOffset;
	DWORD m_vecOffset;
} C_OP_CPOffsetToPercentageBetweenCPs;

inline struct C_OP_LerpEndCapScalarOffsets {
	DWORD m_nFieldOutput;
	DWORD m_flOutput;
	DWORD m_flLerpTime;
} C_OP_LerpEndCapScalar;

inline struct CTestDomainDerived_CursorOffsets {
	DWORD m_nCursorValueA;
	DWORD m_nCursorValueB;
} CTestDomainDerived_Cursor;

inline struct CPulseCell_Test_MultiOutflow_WithParamsOffsets {
	DWORD m_Out1;
	DWORD m_Out2;
} CPulseCell_Test_MultiOutflow_WithParams;

inline struct CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_tOffsets {
	DWORD nTestStep;
} CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t;

inline struct CPulseTurtleGraphicsCursorOffsets {
	DWORD m_Color;
	DWORD m_vPos;
	DWORD m_flHeadingDeg;
	DWORD m_bPenUp;
} CPulseTurtleGraphicsCursor;

inline struct CPulseCell_TestWaitWithCursorState__CursorState_tOffsets {
	DWORD flWaitValue;
	DWORD bFailOnCancel;
} CPulseCell_TestWaitWithCursorState__CursorState_t;

inline struct CPulseCell_Test_MultiOutflow_WithParams_YieldingOffsets {
	DWORD m_Out1;
	DWORD m_AsyncChild1;
	DWORD m_AsyncChild2;
	DWORD m_YieldResume1;
	DWORD m_YieldResume2;
} CPulseCell_Test_MultiOutflow_WithParams_Yielding;

inline struct CPulseGraphInstance_TestDomain_DerivedOffsets {
	DWORD m_nInstanceValueX;
} CPulseGraphInstance_TestDomain_Derived;

inline struct CPulseGraphInstance_TestDomainOffsets {
	DWORD m_bIsRunningUnitTests;
	DWORD m_bExplicitTimeStepping;
	DWORD m_bExpectingToDestroyWithYieldedCursors;
	DWORD m_bQuietTracepoints;
	DWORD m_bExpectingCursorTerminatedDueToMaxInstructions;
	DWORD m_nCursorsTerminatedDueToMaxInstructions;
	DWORD m_nNextValidateIndex;
	DWORD m_Tracepoints;
	DWORD m_bTestYesOrNoPath;
} CPulseGraphInstance_TestDomain;

inline struct CPulseCell_Outflow_TestExplicitYesNoOffsets {
	DWORD m_Yes;
	DWORD m_No;
} CPulseCell_Outflow_TestExplicitYesNo;

inline struct CPulseCell_Outflow_TestRandomYesNoOffsets {
	DWORD m_Yes;
	DWORD m_No;
} CPulseCell_Outflow_TestRandomYesNo;

inline struct CPulseCell_TestWaitWithCursorStateOffsets {
	DWORD m_WakeResume;
	DWORD m_WakeCancel;
	DWORD m_WakeFail;
} CPulseCell_TestWaitWithCursorState;

inline struct CPulseCell_Step_TestDomainEntFireOffsets {
	DWORD m_Input;
} CPulseCell_Step_TestDomainEntFire;

inline struct CPulseCell_ExampleSelectorOffsets {
	DWORD m_OutflowList;
} CPulseCell_ExampleSelector;

inline struct CPulseCell_ExampleCriteria__Criteria_tOffsets {
	DWORD m_flFloatValue1;
	DWORD m_flFloatValue2;
	DWORD m_bMyBool;
} CPulseCell_ExampleCriteria__Criteria_t;

inline struct RsDepthStencilStateDesc_tOffsets {
	DWORD m_bDepthTestEnable;
	DWORD m_bDepthWriteEnable;
	DWORD m_depthFunc;
	DWORD m_stencilState;
} RsDepthStencilStateDesc_t;

inline struct SheetSequenceIntegerId_tOffsets {
	DWORD m_Value;
} SheetSequenceIntegerId_t;

inline struct RsBlendStateDesc_tOffsets {
	DWORD m_srcBlendBits;
	DWORD m_destBlendBits;
	DWORD m_srcBlendAlphaBits;
	DWORD m_destBlendAlphaBits;
	DWORD m_renderTargetWriteMaskBits;
	DWORD m_blendOpBits;
	DWORD m_bAlphaToCoverageEnable;
	DWORD m_bIndependentBlendEnable;
	DWORD m_blendOpAlphaBits;
	DWORD m_blendEnableBits;
	DWORD m_srgbWriteEnableBits;
} RsBlendStateDesc_t;

inline struct VsInputSignatureElement_tOffsets {
	DWORD m_pName;
	DWORD m_pSemantic;
	DWORD m_pD3DSemanticName;
	DWORD m_nD3DSemanticIndex;
} VsInputSignatureElement_t;

inline struct RsRasterizerStateDesc_tOffsets {
	DWORD m_nFillMode;
	DWORD m_nCullMode;
	DWORD m_bDepthClipEnable;
	DWORD m_bMultisampleEnable;
	DWORD m_nDepthBias;
	DWORD m_flDepthBiasClamp;
	DWORD m_flSlopeScaledDepthBias;
} RsRasterizerStateDesc_t;

inline struct RsStencilStateDesc_tOffsets {
	DWORD m_bStencilEnable;
	DWORD m_frontStencilFailOp;
	DWORD m_frontStencilDepthFailOp;
	DWORD m_frontStencilPassOp;
	DWORD m_frontStencilFunc;
	DWORD m_backStencilFailOp;
	DWORD m_backStencilDepthFailOp;
	DWORD m_backStencilPassOp;
	DWORD m_backStencilFunc;
	DWORD m_nStencilReadMask;
	DWORD m_nStencilWriteMask;
} RsStencilStateDesc_t;

inline struct VsInputSignature_tOffsets {
	DWORD m_elems;
	DWORD m_depth_elems;
} VsInputSignature_t;

inline struct RenderInputLayoutField_tOffsets {
	DWORD m_pSemanticName;
	DWORD m_nSemanticIndex;
	DWORD m_nOffset;
	DWORD m_nSlot;
	DWORD m_nSlotType;
	DWORD m_szShaderSemantic;
} RenderInputLayoutField_t;

inline struct PackedAABB_tOffsets {
	DWORD m_nPackedMin;
	DWORD m_nPackedMax;
} PackedAABB_t;

inline struct ConstantInfo_tOffsets {
	DWORD m_name;
	DWORD m_nameToken;
	DWORD m_flValue;
} ConstantInfo_t;

inline struct FuseFunctionIndex_tOffsets {
	DWORD m_Value;
} FuseFunctionIndex_t;

inline struct CFuseSymbolTableOffsets {
	DWORD m_constants;
	DWORD m_variables;
	DWORD m_functions;
	DWORD m_constantMap;
	DWORD m_variableMap;
	DWORD m_functionMap;
} CFuseSymbolTable;

inline struct AABB_tOffsets {
	DWORD m_vMinBounds;
	DWORD m_vMaxBounds;
} AABB_t;

inline struct VariableInfo_tOffsets {
	DWORD m_name;
	DWORD m_nameToken;
	DWORD m_nIndex;
	DWORD m_nNumComponents;
	DWORD m_eVarType;
	DWORD m_eAccess;
} VariableInfo_t;

inline struct FourQuaternionsOffsets {
	DWORD x;
	DWORD y;
	DWORD z;
	DWORD w;
} FourQuaternions;

inline struct CFuseProgramOffsets {
	DWORD m_programBuffer;
	DWORD m_variablesRead;
	DWORD m_variablesWritten;
	DWORD m_nMaxTempVarsUsed;
} CFuseProgram;

inline struct FunctionInfo_tOffsets {
	DWORD m_name;
	DWORD m_nameToken;
	DWORD m_nParamCount;
	DWORD m_nIndex;
	DWORD m_bIsPure;
} FunctionInfo_t;

inline struct FuseVariableIndex_tOffsets {
	DWORD m_Value;
} FuseVariableIndex_t;

inline struct ManifestTestResource_tOffsets {
	DWORD m_name;
	DWORD m_child;
} ManifestTestResource_t;

inline struct CSSDSMsg_ViewTargetOffsets {
	DWORD m_Name;
	DWORD m_TextureId;
	DWORD m_nWidth;
	DWORD m_nHeight;
	DWORD m_nRequestedWidth;
	DWORD m_nRequestedHeight;
	DWORD m_nNumMipLevels;
	DWORD m_nDepth;
	DWORD m_nMultisampleNumSamples;
	DWORD m_nFormat;
} CSSDSMsg_ViewTarget;

inline struct SceneViewId_tOffsets {
	DWORD m_nViewId;
	DWORD m_nFrameCount;
} SceneViewId_t;

inline struct CSSDSEndFrameViewInfoOffsets {
	DWORD m_nViewId;
	DWORD m_ViewName;
} CSSDSEndFrameViewInfo;

inline struct CSSDSMsg_LayerBaseOffsets {
	DWORD m_viewId;
	DWORD m_ViewName;
	DWORD m_nLayerId;
	DWORD m_LayerName;
	DWORD m_displayText;
} CSSDSMsg_LayerBase;

inline struct CSSDSMsg_ViewTargetListOffsets {
	DWORD m_viewId;
	DWORD m_ViewName;
	DWORD m_Targets;
} CSSDSMsg_ViewTargetList;

inline struct CSSDSMsg_ViewRenderOffsets {
	DWORD m_viewId;
	DWORD m_ViewName;
} CSSDSMsg_ViewRender;

inline struct CSSDSMsg_EndFrameOffsets {
	DWORD m_Views;
} CSSDSMsg_EndFrame;

inline struct CSchemaSystemInternalRegistrationOffsets {
	DWORD m_Vector2D;
	DWORD m_Vector;
	DWORD m_VectorWS;
	DWORD m_VectorAligned;
	DWORD m_Quaternion;
	DWORD m_QAngle;
	DWORD m_RotationVector;
	DWORD m_RadianEuler;
	DWORD m_DegreeEuler;
	DWORD m_QuaternionStorage;
	DWORD m_matrix3x4_t;
	DWORD m_matrix3x4a_t;
	DWORD m_Color;
	DWORD m_Vector4D;
	DWORD m_CTransform;
	DWORD m_pKeyValues;
	DWORD m_CUtlBinaryBlock;
	DWORD m_CUtlString;
	DWORD m_CUtlSymbol;
	DWORD m_stringToken;
	DWORD m_stringTokenWithStorage;
	DWORD m_ResourceTypes;
	DWORD m_KV3;
} CSchemaSystemInternalRegistration;

inline struct CExampleSchemaVData_PolymorphicDerivedAOffsets {
	DWORD m_nDerivedA;
} CExampleSchemaVData_PolymorphicDerivedA;

inline struct CExampleSchemaVData_PolymorphicBaseOffsets {
	DWORD m_nBase;
} CExampleSchemaVData_PolymorphicBase;

inline struct CExampleSchemaVData_PolymorphicDerivedBOffsets {
	DWORD m_nDerivedB;
} CExampleSchemaVData_PolymorphicDerivedB;

inline struct ResourceId_tOffsets {
	DWORD m_Value;
} ResourceId_t;

inline struct CExampleSchemaVData_MonomorphicOffsets {
	DWORD m_nExample1;
	DWORD m_nExample2;
} CExampleSchemaVData_Monomorphic;

inline struct CPointWorldTextOffsets {
	DWORD m_messageText;
	DWORD m_FontName;
	DWORD m_BackgroundMaterialName;
	DWORD m_bEnabled;
	DWORD m_bFullbright;
	DWORD m_flWorldUnitsPerPx;
	DWORD m_flFontSize;
	DWORD m_flDepthOffset;
	DWORD m_bDrawBackground;
	DWORD m_flBackgroundBorderWidth;
	DWORD m_flBackgroundBorderHeight;
	DWORD m_flBackgroundWorldToUV;
	DWORD m_Color;
	DWORD m_nJustifyHorizontal;
	DWORD m_nJustifyVertical;
	DWORD m_nReorientMode;
} CPointWorldText;

inline struct CAmbientGenericOffsets {
	DWORD m_radius;
	DWORD m_flMaxRadius;
	DWORD m_iSoundLevel;
	DWORD m_dpv;
	DWORD m_fActive;
	DWORD m_fLooping;
	DWORD m_iszSound;
	DWORD m_sSourceEntName;
	DWORD m_hSoundSource;
	DWORD m_nSoundSourceEntIndex;
} CAmbientGeneric;

inline struct CEnvEntityMakerOffsets {
	DWORD m_vecEntityMins;
	DWORD m_vecEntityMaxs;
	DWORD m_hCurrentInstance;
	DWORD m_hCurrentBlocker;
	DWORD m_vecBlockerOrigin;
	DWORD m_angPostSpawnDirection;
	DWORD m_flPostSpawnDirectionVariance;
	DWORD m_flPostSpawnSpeed;
	DWORD m_bPostSpawnUseAngles;
	DWORD m_iszTemplate;
	DWORD m_pOutputOnSpawned;
	DWORD m_pOutputOnFailedSpawn;
} CEnvEntityMaker;

inline struct CFilterEnemyOffsets {
	DWORD m_iszEnemyName;
	DWORD m_flRadius;
	DWORD m_flOuterRadius;
	DWORD m_nMaxSquadmatesPerEnemy;
	DWORD m_iszPlayerName;
} CFilterEnemy;

inline struct CScriptedSequenceOffsets {
	DWORD m_iszEntry;
	DWORD m_iszPreIdle;
	DWORD m_iszPlay;
	DWORD m_iszPostIdle;
	DWORD m_iszModifierToAddOnPlay;
	DWORD m_iszNextScript;
	DWORD m_iszEntity;
	DWORD m_iszSyncGroup;
	DWORD m_nMoveTo;
	DWORD m_nMoveToGait;
	DWORD m_nHeldWeaponBehavior;
	DWORD m_nForcedCrouchState;
	DWORD m_bIsPlayingPreIdle;
	DWORD m_bIsPlayingEntry;
	DWORD m_bIsPlayingAction;
	DWORD m_bIsPlayingPostIdle;
	DWORD m_bDontRotateOther;
	DWORD m_bIsRepeatable;
	DWORD m_bShouldLeaveCorpse;
	DWORD m_bStartOnSpawn;
	DWORD m_bDisallowInterrupts;
	DWORD m_bCanOverrideNPCState;
	DWORD m_bDontTeleportAtEnd;
	DWORD m_bHighPriority;
	DWORD m_bHideDebugComplaints;
	DWORD m_bContinueOnDeath;
	DWORD m_bLoopPreIdleSequence;
	DWORD m_bLoopActionSequence;
	DWORD m_bLoopPostIdleSequence;
	DWORD m_bSynchPostIdles;
	DWORD m_bIgnoreLookAt;
	DWORD m_bIgnoreGravity;
	DWORD m_bDisableNPCCollisions;
	DWORD m_bKeepAnimgraphLockedPost;
	DWORD m_bDontAddModifiers;
	DWORD m_bDisableAimingWhileMoving;
	DWORD m_bIgnoreRotation;
	DWORD m_flRadius;
	DWORD m_flRepeat;
	DWORD m_flPlayAnimFadeInTime;
	DWORD m_flMoveInterpTime;
	DWORD m_flAngRate;
	DWORD m_flMoveSpeed;
	DWORD m_bWaitUntilMoveCompletesToStartAnimation;
	DWORD m_nNotReadySequenceCount;
	DWORD m_startTime;
	DWORD m_bWaitForBeginSequence;
	DWORD m_saved_effects;
	DWORD m_savedFlags;
	DWORD m_savedCollisionGroup;
	DWORD m_bInterruptable;
	DWORD m_sequenceStarted;
	DWORD m_bPositionRelativeToOtherEntity;
	DWORD m_hTargetEnt;
	DWORD m_hNextCine;
	DWORD m_bThinking;
	DWORD m_bInitiatedSelfDelete;
	DWORD m_bIsTeleportingDueToMoveTo;
	DWORD m_bAllowCustomInterruptConditions;
	DWORD m_hForcedTarget;
	DWORD m_bDontCancelOtherSequences;
	DWORD m_bForceSynch;
	DWORD m_bPreventUpdateYawOnFinish;
	DWORD m_bEnsureOnNavmeshOnFinish;
	DWORD m_onDeathBehavior;
	DWORD m_ConflictResponse;
	DWORD m_OnBeginSequence;
	DWORD m_OnActionStartOrLoop;
	DWORD m_OnEndSequence;
	DWORD m_OnPostIdleEndSequence;
	DWORD m_OnCancelSequence;
	DWORD m_OnCancelFailedSequence;
	DWORD m_OnScriptEvent;
	DWORD m_matOtherToMain;
	DWORD m_hInteractionMainEntity;
	DWORD m_iPlayerDeathBehavior;
	DWORD m_bSkipFadeIn;
} CScriptedSequence;

inline struct CFogTriggerOffsets {
	DWORD m_fog;
} CFogTrigger;

inline struct CPhysicsSpringOffsets {
	DWORD m_flFrequency;
	DWORD m_flDampingRatio;
	DWORD m_flRestLength;
	DWORD m_nameAttachStart;
	DWORD m_nameAttachEnd;
	DWORD m_start;
	DWORD m_end;
	DWORD m_teleportTick;
} CPhysicsSpring;

inline struct CEnvMuzzleFlashOffsets {
	DWORD m_flScale;
	DWORD m_iszParentAttachment;
} CEnvMuzzleFlash;

inline struct CBtActionCombatPositioningOffsets {
	DWORD m_szSensorInputKey;
	DWORD m_szIsAttackingKey;
	DWORD m_ActionTimer;
	DWORD m_bCrouching;
} CBtActionCombatPositioning;

inline struct CTriggerBuoyancyOffsets {
	DWORD m_BuoyancyHelper;
	DWORD m_flFluidDensity;
} CTriggerBuoyancy;

inline struct CPathTrackOffsets {
	DWORD m_pnext;
	DWORD m_pprevious;
	DWORD m_paltpath;
	DWORD m_flRadius;
	DWORD m_length;
	DWORD m_altName;
	DWORD m_nIterVal;
	DWORD m_eOrientationType;
	DWORD m_OnPass;
} CPathTrack;

inline struct CTriggerProximityOffsets {
	DWORD m_hMeasureTarget;
	DWORD m_iszMeasureTarget;
	DWORD m_fRadius;
	DWORD m_nTouchers;
	DWORD m_NearestEntityDistance;
} CTriggerProximity;

inline struct CTankTrainAIOffsets {
	DWORD m_hTrain;
	DWORD m_hTargetEntity;
	DWORD m_soundPlaying;
	DWORD m_startSoundName;
	DWORD m_engineSoundName;
	DWORD m_movementSoundName;
	DWORD m_targetEntityName;
} CTankTrainAI;

inline struct CGameTextOffsets {
	DWORD m_iszMessage;
	DWORD m_textParms;
} CGameText;

inline struct CBaseFlexOffsets {
	DWORD m_flexWeight;
	DWORD m_vLookTargetPosition;
	DWORD m_blinktoggle;
	DWORD m_flAllowResponsesEndTime;
	DWORD m_flLastFlexAnimationTime;
	DWORD m_nNextSceneEventId;
	DWORD m_bUpdateLayerPriorities;
} CBaseFlex;

inline struct CLogicCaseOffsets {
	DWORD m_nCase;
	DWORD m_nShuffleCases;
	DWORD m_nLastShuffleCase;
	DWORD m_uchShuffleCaseMap;
	DWORD m_OnCase;
	DWORD m_OnDefault;
} CLogicCase;

inline struct CInfoGameEventProxyOffsets {
	DWORD m_iszEventName;
	DWORD m_flRange;
} CInfoGameEventProxy;

inline struct CGamePlayerZoneOffsets {
	DWORD m_OnPlayerInZone;
	DWORD m_OnPlayerOutZone;
	DWORD m_PlayersInCount;
	DWORD m_PlayersOutCount;
} CGamePlayerZone;

inline struct CBaseToggleOffsets {
	DWORD m_toggle_state;
	DWORD m_flMoveDistance;
	DWORD m_flWait;
	DWORD m_flLip;
	DWORD m_bAlwaysFireBlockedOutputs;
	DWORD m_vecPosition1;
	DWORD m_vecPosition2;
	DWORD m_vecMoveAng;
	DWORD m_vecAngle1;
	DWORD m_vecAngle2;
	DWORD m_flHeight;
	DWORD m_hActivator;
	DWORD m_vecFinalDest;
	DWORD m_vecFinalAngle;
	DWORD m_movementType;
	DWORD m_sMaster;
} CBaseToggle;

inline struct CPulseServerCursorOffsets {
	DWORD m_hActivator;
	DWORD m_hCaller;
} CPulseServerCursor;

inline struct CInfernoOffsets {
	DWORD m_firePositions;
	DWORD m_fireParentPositions;
	DWORD m_bFireIsBurning;
	DWORD m_BurnNormal;
	DWORD m_fireCount;
	DWORD m_nInfernoType;
	DWORD m_nFireEffectTickBegin;
	DWORD m_nFireLifetime;
	DWORD m_bInPostEffectTime;
	DWORD m_bWasCreatedInSmoke;
	DWORD m_extent;
	DWORD m_damageTimer;
	DWORD m_damageRampTimer;
	DWORD m_splashVelocity;
	DWORD m_InitialSplashVelocity;
	DWORD m_startPos;
	DWORD m_vecOriginalSpawnLocation;
	DWORD m_activeTimer;
	DWORD m_fireSpawnOffset;
	DWORD m_nMaxFlames;
	DWORD m_nSpreadCount;
	DWORD m_BookkeepingTimer;
	DWORD m_NextSpreadTimer;
	DWORD m_nSourceItemDefIndex;
} CInferno;

inline struct CPulseCell_Outflow_PlaySceneBaseOffsets {
	DWORD m_OnFinished;
	DWORD m_OnCanceled;
	DWORD m_Triggers;
} CPulseCell_Outflow_PlaySceneBase;

inline struct CFuncInteractionLayerClipOffsets {
	DWORD m_bDisabled;
	DWORD m_iszInteractsAs;
	DWORD m_iszInteractsWith;
} CFuncInteractionLayerClip;

inline struct CTriggerDetectBulletFireOffsets {
	DWORD m_bPlayerFireOnly;
	DWORD m_OnDetectedBulletFire;
} CTriggerDetectBulletFire;

inline struct CCSPlayer_UseServicesOffsets {
	DWORD m_hLastKnownUseEntity;
	DWORD m_flLastUseTimeStamp;
	DWORD m_flTimeLastUsedWindow;
} CCSPlayer_UseServices;

inline struct CGameRulesOffsets {
	DWORD __m_pChainEntity;
	DWORD m_szQuestName;
	DWORD m_nQuestPhase;
	DWORD m_nTotalPausedTicks;
	DWORD m_nPauseStartTick;
	DWORD m_bGamePaused;
} CGameRules;

inline struct CFishOffsets {
	DWORD m_pool;
	DWORD m_id;
	DWORD m_x;
	DWORD m_y;
	DWORD m_z;
	DWORD m_angle;
	DWORD m_angleChange;
	DWORD m_forward;
	DWORD m_perp;
	DWORD m_poolOrigin;
	DWORD m_waterLevel;
	DWORD m_speed;
	DWORD m_desiredSpeed;
	DWORD m_calmSpeed;
	DWORD m_panicSpeed;
	DWORD m_avoidRange;
	DWORD m_turnTimer;
	DWORD m_turnClockwise;
	DWORD m_goTimer;
	DWORD m_moveTimer;
	DWORD m_panicTimer;
	DWORD m_disperseTimer;
	DWORD m_proximityTimer;
	DWORD m_visible;
} CFish;

inline struct CCSBotOffsets {
	DWORD m_eyePosition;
	DWORD m_name;
	DWORD m_combatRange;
	DWORD m_isRogue;
	DWORD m_rogueTimer;
	DWORD m_diedLastRound;
	DWORD m_safeTime;
	DWORD m_wasSafe;
	DWORD m_blindFire;
	DWORD m_surpriseTimer;
	DWORD m_bAllowActive;
	DWORD m_isFollowing;
	DWORD m_leader;
	DWORD m_followTimestamp;
	DWORD m_allowAutoFollowTime;
	DWORD m_hurryTimer;
	DWORD m_alertTimer;
	DWORD m_sneakTimer;
	DWORD m_panicTimer;
	DWORD m_stateTimestamp;
	DWORD m_isAttacking;
	DWORD m_isOpeningDoor;
	DWORD m_taskEntity;
	DWORD m_goalPosition;
	DWORD m_goalEntity;
	DWORD m_avoid;
	DWORD m_avoidTimestamp;
	DWORD m_isStopping;
	DWORD m_hasVisitedEnemySpawn;
	DWORD m_stillTimer;
	DWORD m_bEyeAnglesUnderPathFinderControl;
	DWORD m_pathIndex;
	DWORD m_areaEnteredTimestamp;
	DWORD m_repathTimer;
	DWORD m_avoidFriendTimer;
	DWORD m_isFriendInTheWay;
	DWORD m_politeTimer;
	DWORD m_isWaitingBehindFriend;
	DWORD m_pathLadderEnd;
	DWORD m_mustRunTimer;
	DWORD m_waitTimer;
	DWORD m_updateTravelDistanceTimer;
	DWORD m_playerTravelDistance;
	DWORD m_travelDistancePhase;
	DWORD m_hostageEscortCount;
	DWORD m_hostageEscortCountTimestamp;
	DWORD m_desiredTeam;
	DWORD m_hasJoined;
	DWORD m_isWaitingForHostage;
	DWORD m_inhibitWaitingForHostageTimer;
	DWORD m_waitForHostageTimer;
	DWORD m_noisePosition;
	DWORD m_noiseTravelDistance;
	DWORD m_noiseTimestamp;
	DWORD m_noiseSource;
	DWORD m_noiseBendTimer;
	DWORD m_bentNoisePosition;
	DWORD m_bendNoisePositionValid;
	DWORD m_lookAroundStateTimestamp;
	DWORD m_lookAheadAngle;
	DWORD m_forwardAngle;
	DWORD m_inhibitLookAroundTimestamp;
	DWORD m_lookAtSpot;
	DWORD m_lookAtSpotDuration;
	DWORD m_lookAtSpotTimestamp;
	DWORD m_lookAtSpotAngleTolerance;
	DWORD m_lookAtSpotClearIfClose;
	DWORD m_lookAtSpotAttack;
	DWORD m_lookAtDesc;
	DWORD m_peripheralTimestamp;
	DWORD m_approachPointCount;
	DWORD m_approachPointViewPosition;
	DWORD m_viewSteadyTimer;
	DWORD m_tossGrenadeTimer;
	DWORD m_isAvoidingGrenade;
	DWORD m_spotCheckTimestamp;
	DWORD m_checkedHidingSpotCount;
	DWORD m_lookPitch;
	DWORD m_lookPitchVel;
	DWORD m_lookYaw;
	DWORD m_lookYawVel;
	DWORD m_targetSpot;
	DWORD m_targetSpotVelocity;
	DWORD m_targetSpotPredicted;
	DWORD m_aimError;
	DWORD m_aimGoal;
	DWORD m_targetSpotTime;
	DWORD m_aimFocus;
	DWORD m_aimFocusInterval;
	DWORD m_aimFocusNextUpdate;
	DWORD m_ignoreEnemiesTimer;
	DWORD m_enemy;
	DWORD m_isEnemyVisible;
	DWORD m_visibleEnemyParts;
	DWORD m_lastEnemyPosition;
	DWORD m_lastSawEnemyTimestamp;
	DWORD m_firstSawEnemyTimestamp;
	DWORD m_currentEnemyAcquireTimestamp;
	DWORD m_enemyDeathTimestamp;
	DWORD m_friendDeathTimestamp;
	DWORD m_isLastEnemyDead;
	DWORD m_nearbyEnemyCount;
	DWORD m_bomber;
	DWORD m_nearbyFriendCount;
	DWORD m_closestVisibleFriend;
	DWORD m_closestVisibleHumanFriend;
	DWORD m_attentionInterval;
	DWORD m_attacker;
	DWORD m_attackedTimestamp;
	DWORD m_burnedByFlamesTimer;
	DWORD m_lastVictimID;
	DWORD m_isAimingAtEnemy;
	DWORD m_isRapidFiring;
	DWORD m_equipTimer;
	DWORD m_zoomTimer;
	DWORD m_fireWeaponTimestamp;
	DWORD m_lookForWeaponsOnGroundTimer;
	DWORD m_bIsSleeping;
	DWORD m_isEnemySniperVisible;
	DWORD m_sawEnemySniperTimer;
	DWORD m_enemyQueueIndex;
	DWORD m_enemyQueueCount;
	DWORD m_enemyQueueAttendIndex;
	DWORD m_isStuck;
	DWORD m_stuckTimestamp;
	DWORD m_stuckSpot;
	DWORD m_wiggleTimer;
	DWORD m_stuckJumpTimer;
	DWORD m_nextCleanupCheckTimestamp;
	DWORD m_avgVel;
	DWORD m_avgVelIndex;
	DWORD m_avgVelCount;
	DWORD m_lastOrigin;
	DWORD m_lastRadioRecievedTimestamp;
	DWORD m_lastRadioSentTimestamp;
	DWORD m_radioSubject;
	DWORD m_radioPosition;
	DWORD m_voiceEndTimestamp;
	DWORD m_lastValidReactionQueueFrame;
} CCSBot;

inline struct CHandleTestOffsets {
	DWORD m_Handle;
	DWORD m_bSendHandle;
} CHandleTest;

inline struct CLogicNPCCounterOffsets {
	DWORD m_OnMinCountAll;
	DWORD m_OnMaxCountAll;
	DWORD m_OnFactorAll;
	DWORD m_OnMinPlayerDistAll;
	DWORD m_OnMinCount_1;
	DWORD m_OnMaxCount_1;
	DWORD m_OnFactor_1;
	DWORD m_OnMinPlayerDist_1;
	DWORD m_OnMinCount_2;
	DWORD m_OnMaxCount_2;
	DWORD m_OnFactor_2;
	DWORD m_OnMinPlayerDist_2;
	DWORD m_OnMinCount_3;
	DWORD m_OnMaxCount_3;
	DWORD m_OnFactor_3;
	DWORD m_OnMinPlayerDist_3;
	DWORD m_hSource;
	DWORD m_iszSourceEntityName;
	DWORD m_flDistanceMax;
	DWORD m_bDisabled;
	DWORD m_nMinCountAll;
	DWORD m_nMaxCountAll;
	DWORD m_nMinFactorAll;
	DWORD m_nMaxFactorAll;
	DWORD m_iszNPCClassname_1;
	DWORD m_nNPCState_1;
	DWORD m_bInvertState_1;
	DWORD m_nMinCount_1;
	DWORD m_nMaxCount_1;
	DWORD m_nMinFactor_1;
	DWORD m_nMaxFactor_1;
	DWORD m_flDefaultDist_1;
	DWORD m_iszNPCClassname_2;
	DWORD m_nNPCState_2;
	DWORD m_bInvertState_2;
	DWORD m_nMinCount_2;
	DWORD m_nMaxCount_2;
	DWORD m_nMinFactor_2;
	DWORD m_nMaxFactor_2;
	DWORD m_flDefaultDist_2;
	DWORD m_iszNPCClassname_3;
	DWORD m_nNPCState_3;
	DWORD m_bInvertState_3;
	DWORD m_nMinCount_3;
	DWORD m_nMaxCount_3;
	DWORD m_nMinFactor_3;
	DWORD m_nMaxFactor_3;
	DWORD m_flDefaultDist_3;
} CLogicNPCCounter;

inline struct CCSPlayer_RadioServicesOffsets {
	DWORD m_flGotHostageTalkTimer;
	DWORD m_flDefusingTalkTimer;
	DWORD m_flC4PlantTalkTimer;
	DWORD m_flRadioTokenSlots;
	DWORD m_bIgnoreRadio;
} CCSPlayer_RadioServices;

inline struct CRagdollConstraintOffsets {
	DWORD m_xmin;
	DWORD m_xmax;
	DWORD m_ymin;
	DWORD m_ymax;
	DWORD m_zmin;
	DWORD m_zmax;
	DWORD m_xfriction;
	DWORD m_yfriction;
	DWORD m_zfriction;
} CRagdollConstraint;

inline struct CEnvSplashOffsets {
	DWORD m_flScale;
} CEnvSplash;

inline struct CPointCameraVFOVOffsets {
	DWORD m_flVerticalFOV;
} CPointCameraVFOV;

inline struct CFuncMoveLinearOffsets {
	DWORD m_authoredPosition;
	DWORD m_angMoveEntitySpace;
	DWORD m_vecMoveDirParentSpace;
	DWORD m_soundStart;
	DWORD m_soundStop;
	DWORD m_currentSound;
	DWORD m_flBlockDamage;
	DWORD m_flStartPosition;
	DWORD m_OnFullyOpen;
	DWORD m_OnFullyClosed;
	DWORD m_bCreateMovableNavMesh;
	DWORD m_bAllowMovableNavMeshDockingOnEntireEntity;
	DWORD m_bCreateNavObstacle;
} CFuncMoveLinear;

inline struct CScriptItemOffsets {
	DWORD m_MoveTypeOverride;
} CScriptItem;

inline struct CBaseTriggerOffsets {
	DWORD m_OnStartTouch;
	DWORD m_OnStartTouchAll;
	DWORD m_OnEndTouch;
	DWORD m_OnEndTouchAll;
	DWORD m_OnTouching;
	DWORD m_OnTouchingEachEntity;
	DWORD m_OnNotTouching;
	DWORD m_hTouchingEntities;
	DWORD m_iFilterName;
	DWORD m_hFilter;
	DWORD m_bDisabled;
	DWORD m_bUseAsyncQueries;
} CBaseTrigger;

inline struct CPointPushOffsets {
	DWORD m_bEnabled;
	DWORD m_flMagnitude;
	DWORD m_flRadius;
	DWORD m_flInnerRadius;
	DWORD m_flConeOfInfluence;
	DWORD m_iszFilterName;
	DWORD m_hFilter;
} CPointPush;

inline struct CPlayerPingOffsets {
	DWORD m_hPlayer;
	DWORD m_hPingedEntity;
	DWORD m_iType;
	DWORD m_bUrgent;
	DWORD m_szPlaceName;
} CPlayerPing;

inline struct CRopeKeyframeOffsets {
	DWORD m_RopeFlags;
	DWORD m_iNextLinkName;
	DWORD m_Slack;
	DWORD m_Width;
	DWORD m_TextureScale;
	DWORD m_nSegments;
	DWORD m_bConstrainBetweenEndpoints;
	DWORD m_strRopeMaterialModel;
	DWORD m_iRopeMaterialModelIndex;
	DWORD m_Subdiv;
	DWORD m_nChangeCount;
	DWORD m_RopeLength;
	DWORD m_fLockedPoints;
	DWORD m_bCreatedFromMapFile;
	DWORD m_flScrollSpeed;
	DWORD m_bStartPointValid;
	DWORD m_bEndPointValid;
	DWORD m_hStartPoint;
	DWORD m_hEndPoint;
	DWORD m_iStartAttachment;
	DWORD m_iEndAttachment;
} CRopeKeyframe;

inline struct CBaseCombatCharacterOffsets {
	DWORD m_bForceServerRagdoll;
	DWORD m_hMyWearables;
	DWORD m_impactEnergyScale;
	DWORD m_bApplyStressDamage;
	DWORD m_bDeathEventsDispatched;
	DWORD m_pVecRelationships;
	DWORD m_strRelationships;
	DWORD m_eHull;
	DWORD m_nNavHullIdx;
	DWORD m_movementStats;
} CBaseCombatCharacter;

inline struct CTestPulseIOOffsets {
	DWORD m_OnVariantVoid;
	DWORD m_OnVariantBool;
	DWORD m_OnVariantInt;
	DWORD m_OnVariantFloat;
	DWORD m_OnVariantString;
	DWORD m_OnVariantColor;
	DWORD m_OnVariantVector;
	DWORD m_bAllowEmptyInputs;
} CTestPulseIO;

inline struct CPointEntityFinderOffsets {
	DWORD m_hEntity;
	DWORD m_iFilterName;
	DWORD m_hFilter;
	DWORD m_iRefName;
	DWORD m_hReference;
	DWORD m_FindMethod;
	DWORD m_OnFoundEntity;
} CPointEntityFinder;

inline struct CKnifeOffsets {
	DWORD m_bFirstAttack;
} CKnife;

inline struct CLogicPlayerProxyOffsets {
	DWORD m_hPlayer;
	DWORD m_PlayerHasAmmo;
	DWORD m_PlayerHasNoAmmo;
	DWORD m_PlayerDied;
	DWORD m_RequestedPlayerHealth;
} CLogicPlayerProxy;

inline struct CTriggerSoundscapeOffsets {
	DWORD m_hSoundscape;
	DWORD m_SoundscapeName;
	DWORD m_spectators;
} CTriggerSoundscape;

inline struct CHostageExpresserShimOffsets {
	DWORD m_pExpresser;
} CHostageExpresserShim;

inline struct CShatterGlassShardPhysicsOffsets {
	DWORD m_bDebris;
	DWORD m_hParentShard;
	DWORD m_ShardDesc;
} CShatterGlassShardPhysics;

inline struct CPathParticleRopeOffsets {
	DWORD m_bStartActive;
	DWORD m_flMaxSimulationTime;
	DWORD m_iszEffectName;
	DWORD m_PathNodes_Name;
	DWORD m_flParticleSpacing;
	DWORD m_flSlack;
	DWORD m_flRadius;
	DWORD m_ColorTint;
	DWORD m_nEffectState;
	DWORD m_iEffectIndex;
	DWORD m_PathNodes_Position;
	DWORD m_PathNodes_TangentIn;
	DWORD m_PathNodes_TangentOut;
	DWORD m_PathNodes_Color;
	DWORD m_PathNodes_PinEnabled;
	DWORD m_PathNodes_RadiusScale;
} CPathParticleRope;

inline struct CCreditsOffsets {
	DWORD m_OnCreditsDone;
	DWORD m_bRolledOutroCredits;
	DWORD m_flLogoLength;
} CCredits;

inline struct CFishPoolOffsets {
	DWORD m_fishCount;
	DWORD m_maxRange;
	DWORD m_swimDepth;
	DWORD m_waterLevel;
	DWORD m_isDormant;
	DWORD m_fishes;
	DWORD m_visTimer;
} CFishPool;

inline struct CBreakablePropOffsets {
	DWORD m_CPropDataComponent;
	DWORD m_OnStartDeath;
	DWORD m_OnBreak;
	DWORD m_OnHealthChanged;
	DWORD m_OnTakeDamage;
	DWORD m_impactEnergyScale;
	DWORD m_iMinHealthDmg;
	DWORD m_preferredCarryAngles;
	DWORD m_flPressureDelay;
	DWORD m_flDefBurstScale;
	DWORD m_vDefBurstOffset;
	DWORD m_hBreaker;
	DWORD m_PerformanceMode;
	DWORD m_flPreventDamageBeforeTime;
	DWORD m_BreakableContentsType;
	DWORD m_strBreakableContentsPropGroupOverride;
	DWORD m_strBreakableContentsParticleOverride;
	DWORD m_bHasBreakPiecesOrCommands;
	DWORD m_explodeDamage;
	DWORD m_explodeRadius;
	DWORD m_explosionDelay;
	DWORD m_explosionBuildupSound;
	DWORD m_explosionCustomEffect;
	DWORD m_explosionCustomSound;
	DWORD m_explosionModifier;
	DWORD m_hPhysicsAttacker;
	DWORD m_flLastPhysicsInfluenceTime;
	DWORD m_flDefaultFadeScale;
	DWORD m_hLastAttacker;
	DWORD m_iszPuntSound;
	DWORD m_bUsePuntSound;
	DWORD m_bOriginalBlockLOS;
} CBreakableProp;

inline struct CLightEntityOffsets {
	DWORD m_CLightComponent;
} CLightEntity;

inline struct COrnamentPropOffsets {
	DWORD m_initialOwner;
} COrnamentProp;

inline struct CRectLightOffsets {
	DWORD m_bShowLight;
} CRectLight;

inline struct CCSPlayerResourceOffsets {
	DWORD m_bHostageAlive;
	DWORD m_isHostageFollowingSomeone;
	DWORD m_iHostageEntityIDs;
	DWORD m_bombsiteCenterA;
	DWORD m_bombsiteCenterB;
	DWORD m_hostageRescueX;
	DWORD m_hostageRescueY;
	DWORD m_hostageRescueZ;
	DWORD m_bEndMatchNextMapAllVoted;
	DWORD m_foundGoalPositions;
} CCSPlayerResource;

inline struct CFuncNavBlockerOffsets {
	DWORD m_bDisabled;
	DWORD m_nBlockedTeamNumber;
} CFuncNavBlocker;

inline struct CMoverPathNodeOffsets {
	DWORD m_vInTangentLocal;
	DWORD m_vOutTangentLocal;
	DWORD m_szParentPathUniqueID;
	DWORD m_szPathNodeParameter;
	DWORD m_OnStartFromOrInSegment;
	DWORD m_OnStoppedAtOrInSegment;
	DWORD m_OnPassThrough;
	DWORD m_OnPassThroughForward;
	DWORD m_OnPassThroughReverse;
	DWORD m_hMover;
	DWORD m_xWSPrevParent;
} CMoverPathNode;

inline struct CFuncBrushOffsets {
	DWORD m_iSolidity;
	DWORD m_iDisabled;
	DWORD m_bSolidBsp;
	DWORD m_iszExcludedClass;
	DWORD m_bInvertExclusion;
	DWORD m_bScriptedMovement;
} CFuncBrush;

inline struct CPhysBoxOffsets {
	DWORD m_damageType;
	DWORD m_damageToEnableMotion;
	DWORD m_flForceToEnableMotion;
	DWORD m_vHoverPosePosition;
	DWORD m_angHoverPoseAngles;
	DWORD m_bNotSolidToWorld;
	DWORD m_bEnableUseOutput;
	DWORD m_nHoverPoseFlags;
	DWORD m_flTouchOutputPerEntityDelay;
	DWORD m_OnDamaged;
	DWORD m_OnAwakened;
	DWORD m_OnMotionEnabled;
	DWORD m_OnPlayerUse;
	DWORD m_OnStartTouch;
	DWORD m_hCarryingPlayer;
} CPhysBox;

inline struct CSoundEventAABBEntityOffsets {
	DWORD m_vMins;
	DWORD m_vMaxs;
} CSoundEventAABBEntity;

inline struct COmniLightOffsets {
	DWORD m_flInnerAngle;
	DWORD m_flOuterAngle;
	DWORD m_bShowLight;
} COmniLight;

inline struct CTriggerVolumeOffsets {
	DWORD m_iFilterName;
	DWORD m_hFilter;
} CTriggerVolume;

inline struct CBtNodeConditionOffsets {
	DWORD m_bNegated;
} CBtNodeCondition;

inline struct CEnvExplosionOffsets {
	DWORD m_iMagnitude;
	DWORD m_flPlayerDamage;
	DWORD m_iRadiusOverride;
	DWORD m_flInnerRadius;
	DWORD m_flDamageForce;
	DWORD m_hInflictor;
	DWORD m_iCustomDamageType;
	DWORD m_bCreateDebris;
	DWORD m_iszCustomEffectName;
	DWORD m_iszCustomSoundName;
	DWORD m_bSuppressParticleImpulse;
	DWORD m_iClassIgnore;
	DWORD m_iClassIgnore2;
	DWORD m_iszEntityIgnoreName;
	DWORD m_hEntityIgnore;
} CEnvExplosion;

inline struct CFootstepControlOffsets {
	DWORD m_source;
	DWORD m_destination;
} CFootstepControl;

inline struct CParticleSystemOffsets {
	DWORD m_szSnapshotFileName;
	DWORD m_bActive;
	DWORD m_bFrozen;
	DWORD m_flFreezeTransitionDuration;
	DWORD m_nStopType;
	DWORD m_bAnimateDuringGameplayPause;
	DWORD m_iEffectIndex;
	DWORD m_flStartTime;
	DWORD m_flPreSimTime;
	DWORD m_vServerControlPoints;
	DWORD m_iServerControlPointAssignments;
	DWORD m_hControlPointEnts;
	DWORD m_bNoSave;
	DWORD m_bNoFreeze;
	DWORD m_bNoRamp;
	DWORD m_bStartActive;
	DWORD m_iszEffectName;
	DWORD m_iszControlPointNames;
	DWORD m_nDataCP;
	DWORD m_vecDataCPValue;
	DWORD m_nTintCP;
	DWORD m_clrTint;
} CParticleSystem;

inline struct CTriggerBrushOffsets {
	DWORD m_OnStartTouch;
	DWORD m_OnEndTouch;
	DWORD m_OnUse;
	DWORD m_iInputFilter;
	DWORD m_iDontMessageParent;
} CTriggerBrush;

inline struct CSoundAreaEntityBaseOffsets {
	DWORD m_bDisabled;
	DWORD m_iszSoundAreaType;
	DWORD m_vPos;
} CSoundAreaEntityBase;

inline struct CBeamOffsets {
	DWORD m_flFrameRate;
	DWORD m_flHDRColorScale;
	DWORD m_flFireTime;
	DWORD m_flDamage;
	DWORD m_nNumBeamEnts;
	DWORD m_hBaseMaterial;
	DWORD m_nHaloIndex;
	DWORD m_nBeamType;
	DWORD m_nBeamFlags;
	DWORD m_hAttachEntity;
	DWORD m_nAttachIndex;
	DWORD m_fWidth;
	DWORD m_fEndWidth;
	DWORD m_fFadeLength;
	DWORD m_fHaloScale;
	DWORD m_fAmplitude;
	DWORD m_fStartFrame;
	DWORD m_fSpeed;
	DWORD m_flFrame;
	DWORD m_nClipStyle;
	DWORD m_bTurnedOff;
	DWORD m_vecEndPos;
	DWORD m_hEndEntity;
	DWORD m_nDissolveType;
} CBeam;

inline struct CLogicEventListenerOffsets {
	DWORD m_strEventName;
	DWORD m_bIsEnabled;
	DWORD m_nTeam;
	DWORD m_OnEventFired;
} CLogicEventListener;

inline struct CBasePlayerPawnOffsets {
	DWORD m_pWeaponServices;
	DWORD m_pItemServices;
	DWORD m_pAutoaimServices;
	DWORD m_pObserverServices;
	DWORD m_pWaterServices;
	DWORD m_pUseServices;
	DWORD m_pFlashlightServices;
	DWORD m_pCameraServices;
	DWORD m_pMovementServices;
	DWORD m_ServerViewAngleChanges;
	DWORD v_angle;
	DWORD v_anglePrevious;
	DWORD m_iHideHUD;
	DWORD m_skybox3d;
	DWORD m_fTimeLastHurt;
	DWORD m_flDeathTime;
	DWORD m_fNextSuicideTime;
	DWORD m_fInitHUD;
	DWORD m_pExpresser;
	DWORD m_hController;
	DWORD m_hDefaultController;
	DWORD m_fHltvReplayDelay;
	DWORD m_fHltvReplayEnd;
	DWORD m_iHltvReplayEntity;
	DWORD m_sndOpvarLatchData;
} CBasePlayerPawn;

inline struct CMathColorBlendOffsets {
	DWORD m_flInMin;
	DWORD m_flInMax;
	DWORD m_OutColor1;
	DWORD m_OutColor2;
	DWORD m_OutValue;
} CMathColorBlend;

inline struct CScriptNavBlockerOffsets {
	DWORD m_vExtent;
} CScriptNavBlocker;

inline struct CTriggerActiveWeaponDetectOffsets {
	DWORD m_OnTouchedActiveWeapon;
	DWORD m_iszWeaponClassName;
} CTriggerActiveWeaponDetect;

inline struct CPlayerSprayDecalOffsets {
	DWORD m_nUniqueID;
	DWORD m_unAccountID;
	DWORD m_unTraceID;
	DWORD m_rtGcTime;
	DWORD m_vecEndPos;
	DWORD m_vecStart;
	DWORD m_vecLeft;
	DWORD m_vecNormal;
	DWORD m_nPlayer;
	DWORD m_nEntity;
	DWORD m_nHitbox;
	DWORD m_flCreationTime;
	DWORD m_nTintID;
	DWORD m_nVersion;
	DWORD m_ubSignature;
} CPlayerSprayDecal;

inline struct CEconEntityOffsets {
	DWORD m_AttributeManager;
	DWORD m_OriginalOwnerXuidLow;
	DWORD m_OriginalOwnerXuidHigh;
	DWORD m_nFallbackPaintKit;
	DWORD m_nFallbackSeed;
	DWORD m_flFallbackWear;
	DWORD m_nFallbackStatTrak;
	DWORD m_hOldProvidee;
	DWORD m_iOldOwnerClass;
} CEconEntity;

inline struct CTankTargetChangeOffsets {
	DWORD m_newTarget;
	DWORD m_newTargetName;
} CTankTargetChange;

inline struct CLogicDistanceCheckOffsets {
	DWORD m_iszEntityA;
	DWORD m_iszEntityB;
	DWORD m_flZone1Distance;
	DWORD m_flZone2Distance;
	DWORD m_InZone1;
	DWORD m_InZone2;
	DWORD m_InZone3;
} CLogicDistanceCheck;

inline struct CEnvCombinedLightProbeVolumeOffsets {
	DWORD m_Entity_Color;
	DWORD m_Entity_flBrightness;
	DWORD m_Entity_hCubemapTexture;
	DWORD m_Entity_bCustomCubemapTexture;
	DWORD m_Entity_hLightProbeTexture_AmbientCube;
	DWORD m_Entity_hLightProbeTexture_SDF;
	DWORD m_Entity_hLightProbeTexture_SH2_DC;
	DWORD m_Entity_hLightProbeTexture_SH2_R;
	DWORD m_Entity_hLightProbeTexture_SH2_G;
	DWORD m_Entity_hLightProbeTexture_SH2_B;
	DWORD m_Entity_hLightProbeDirectLightIndicesTexture;
	DWORD m_Entity_hLightProbeDirectLightScalarsTexture;
	DWORD m_Entity_hLightProbeDirectLightShadowsTexture;
	DWORD m_Entity_vBoxMins;
	DWORD m_Entity_vBoxMaxs;
	DWORD m_Entity_bMoveable;
	DWORD m_Entity_nHandshake;
	DWORD m_Entity_nEnvCubeMapArrayIndex;
	DWORD m_Entity_nPriority;
	DWORD m_Entity_bStartDisabled;
	DWORD m_Entity_flEdgeFadeDist;
	DWORD m_Entity_vEdgeFadeDists;
	DWORD m_Entity_nLightProbeSizeX;
	DWORD m_Entity_nLightProbeSizeY;
	DWORD m_Entity_nLightProbeSizeZ;
	DWORD m_Entity_nLightProbeAtlasX;
	DWORD m_Entity_nLightProbeAtlasY;
	DWORD m_Entity_nLightProbeAtlasZ;
	DWORD m_Entity_bEnabled;
} CEnvCombinedLightProbeVolume;

inline struct CLogicDistanceAutosaveOffsets {
	DWORD m_iszTargetEntity;
	DWORD m_flDistanceToPlayer;
	DWORD m_bForceNewLevelUnit;
	DWORD m_bCheckCough;
	DWORD m_bThinkDangerous;
	DWORD m_flDangerousTime;
} CLogicDistanceAutosave;

inline struct CLogicBranchOffsets {
	DWORD m_bInValue;
	DWORD m_Listeners;
	DWORD m_OnTrue;
	DWORD m_OnFalse;
} CLogicBranch;

inline struct CPulseCell_Outflow_ScriptedSequenceOffsets {
	DWORD m_szSyncGroup;
	DWORD m_nExpectedNumSequencesInSyncGroup;
	DWORD m_bEnsureOnNavmeshOnFinish;
	DWORD m_bDontTeleportAtEnd;
	DWORD m_bDisallowInterrupts;
	DWORD m_scriptedSequenceDataMain;
	DWORD m_vecAdditionalActors;
	DWORD m_OnFinished;
	DWORD m_OnCanceled;
	DWORD m_Triggers;
} CPulseCell_Outflow_ScriptedSequence;

inline struct CFuncTrackChangeOffsets {
	DWORD m_trackTop;
	DWORD m_trackBottom;
	DWORD m_train;
	DWORD m_trackTopName;
	DWORD m_trackBottomName;
	DWORD m_trainName;
	DWORD m_code;
	DWORD m_targetState;
	DWORD m_use;
} CFuncTrackChange;

inline struct CFuncTrackTrainOffsets {
	DWORD m_ppath;
	DWORD m_length;
	DWORD m_vPosPrev;
	DWORD m_angPrev;
	DWORD m_controlMins;
	DWORD m_controlMaxs;
	DWORD m_lastBlockPos;
	DWORD m_lastBlockTick;
	DWORD m_flVolume;
	DWORD m_flBank;
	DWORD m_oldSpeed;
	DWORD m_flBlockDamage;
	DWORD m_height;
	DWORD m_maxSpeed;
	DWORD m_dir;
	DWORD m_iszSoundMove;
	DWORD m_iszSoundMovePing;
	DWORD m_iszSoundStart;
	DWORD m_iszSoundStop;
	DWORD m_strPathTarget;
	DWORD m_flMoveSoundMinDuration;
	DWORD m_flMoveSoundMaxDuration;
	DWORD m_flNextMoveSoundTime;
	DWORD m_flMoveSoundMinPitch;
	DWORD m_flMoveSoundMaxPitch;
	DWORD m_eOrientationType;
	DWORD m_eVelocityType;
	DWORD m_OnStart;
	DWORD m_OnNext;
	DWORD m_OnArrivedAtDestinationNode;
	DWORD m_bManualSpeedChanges;
	DWORD m_flDesiredSpeed;
	DWORD m_flSpeedChangeTime;
	DWORD m_flAccelSpeed;
	DWORD m_flDecelSpeed;
	DWORD m_bAccelToSpeed;
	DWORD m_flNextMPSoundTime;
} CFuncTrackTrain;

inline struct CEnvInstructorHintOffsets {
	DWORD m_iszName;
	DWORD m_iszReplace_Key;
	DWORD m_iszHintTargetEntity;
	DWORD m_iTimeout;
	DWORD m_iDisplayLimit;
	DWORD m_iszIcon_Onscreen;
	DWORD m_iszIcon_Offscreen;
	DWORD m_iszCaption;
	DWORD m_iszActivatorCaption;
	DWORD m_Color;
	DWORD m_fIconOffset;
	DWORD m_fRange;
	DWORD m_iPulseOption;
	DWORD m_iAlphaOption;
	DWORD m_iShakeOption;
	DWORD m_bStatic;
	DWORD m_bNoOffscreen;
	DWORD m_bForceCaption;
	DWORD m_iInstanceType;
	DWORD m_bSuppressRest;
	DWORD m_iszBinding;
	DWORD m_bAllowNoDrawTarget;
	DWORD m_bAutoStart;
	DWORD m_bLocalPlayerOnly;
} CEnvInstructorHint;

inline struct CEnvWindOffsets {
	DWORD m_EnvWindShared;
} CEnvWind;

inline struct CSoundEventPathCornerEntityOffsets {
	DWORD m_iszPathCorner;
	DWORD m_iCountMax;
	DWORD m_flDistanceMax;
	DWORD m_flDistMaxSqr;
	DWORD m_flDotProductMax;
	DWORD m_bPlaying;
	DWORD m_vecCornerPairsNetworked;
} CSoundEventPathCornerEntity;

inline struct CDynamicNavConnectionsVolumeOffsets {
	DWORD m_iszConnectionTarget;
	DWORD m_vecConnections;
	DWORD m_sTransitionType;
	DWORD m_bConnectionsEnabled;
	DWORD m_flTargetAreaSearchRadius;
	DWORD m_flUpdateDistance;
	DWORD m_flMaxConnectionDistance;
} CDynamicNavConnectionsVolume;

inline struct CConstraintAnchorOffsets {
	DWORD m_massScale;
} CConstraintAnchor;

inline struct CCSPlayerPawnOffsets {
	DWORD m_pBulletServices;
	DWORD m_pHostageServices;
	DWORD m_pBuyServices;
	DWORD m_pActionTrackingServices;
	DWORD m_pRadioServices;
	DWORD m_pDamageReactServices;
	DWORD m_nCharacterDefIndex;
	DWORD m_bHasFemaleVoice;
	DWORD m_strVOPrefix;
	DWORD m_szLastPlaceName;
	DWORD m_bInHostageResetZone;
	DWORD m_bInBuyZone;
	DWORD m_TouchingBuyZones;
	DWORD m_bWasInBuyZone;
	DWORD m_bInHostageRescueZone;
	DWORD m_bInBombZone;
	DWORD m_bWasInHostageRescueZone;
	DWORD m_iRetakesOffering;
	DWORD m_iRetakesOfferingCard;
	DWORD m_bRetakesHasDefuseKit;
	DWORD m_bRetakesMVPLastRound;
	DWORD m_iRetakesMVPBoostItem;
	DWORD m_RetakesMVPBoostExtraUtility;
	DWORD m_flHealthShotBoostExpirationTime;
	DWORD m_flLandingTimeSeconds;
	DWORD m_aimPunchAngle;
	DWORD m_aimPunchAngleVel;
	DWORD m_aimPunchTickBase;
	DWORD m_aimPunchTickFraction;
	DWORD m_aimPunchCache;
	DWORD m_bIsBuyMenuOpen;
	DWORD m_lastLandTime;
	DWORD m_bOnGroundLastTick;
	DWORD m_iPlayerLocked;
	DWORD m_flTimeOfLastInjury;
	DWORD m_flNextSprayDecalTime;
	DWORD m_bNextSprayDecalTimeExpedited;
	DWORD m_nRagdollDamageBone;
	DWORD m_vRagdollDamageForce;
	DWORD m_vRagdollDamagePosition;
	DWORD m_szRagdollDamageWeaponName;
	DWORD m_bRagdollDamageHeadshot;
	DWORD m_vRagdollServerOrigin;
	DWORD m_EconGloves;
	DWORD m_nEconGlovesChanged;
	DWORD m_qDeathEyeAngles;
	DWORD m_bSkipOneHeadConstraintUpdate;
	DWORD m_bLeftHanded;
	DWORD m_fSwitchedHandednessTime;
	DWORD m_flViewmodelOffsetX;
	DWORD m_flViewmodelOffsetY;
	DWORD m_flViewmodelOffsetZ;
	DWORD m_flViewmodelFOV;
	DWORD m_bIsWalking;
	DWORD m_fLastGivenDefuserTime;
	DWORD m_fLastGivenBombTime;
	DWORD m_flDealtDamageToEnemyMostRecentTimestamp;
	DWORD m_iDisplayHistoryBits;
	DWORD m_flLastAttackedTeammate;
	DWORD m_allowAutoFollowTime;
	DWORD m_bResetArmorNextSpawn;
	DWORD m_nLastKillerIndex;
	DWORD m_entitySpottedState;
	DWORD m_nSpotRules;
	DWORD m_bIsScoped;
	DWORD m_bResumeZoom;
	DWORD m_bIsDefusing;
	DWORD m_bIsGrabbingHostage;
	DWORD m_iBlockingUseActionInProgress;
	DWORD m_flEmitSoundTime;
	DWORD m_bInNoDefuseArea;
	DWORD m_iBombSiteIndex;
	DWORD m_nWhichBombZone;
	DWORD m_bInBombZoneTrigger;
	DWORD m_bWasInBombZoneTrigger;
	DWORD m_iShotsFired;
	DWORD m_flFlinchStack;
	DWORD m_flVelocityModifier;
	DWORD m_flHitHeading;
	DWORD m_nHitBodyPart;
	DWORD m_vecTotalBulletForce;
	DWORD m_bWaitForNoAttack;
	DWORD m_ignoreLadderJumpTime;
	DWORD m_bKilledByHeadshot;
	DWORD m_LastHitBox;
	DWORD m_pBot;
	DWORD m_bBotAllowActive;
	DWORD m_thirdPersonHeading;
	DWORD m_flSlopeDropOffset;
	DWORD m_flSlopeDropHeight;
	DWORD m_vHeadConstraintOffset;
	DWORD m_nLastPickupPriority;
	DWORD m_flLastPickupPriorityTime;
	DWORD m_ArmorValue;
	DWORD m_unCurrentEquipmentValue;
	DWORD m_unRoundStartEquipmentValue;
	DWORD m_unFreezetimeEndEquipmentValue;
	DWORD m_iLastWeaponFireUsercmd;
	DWORD m_bIsSpawning;
	DWORD m_iDeathFlags;
	DWORD m_bHasDeathInfo;
	DWORD m_flDeathInfoTime;
	DWORD m_vecDeathInfoOrigin;
	DWORD m_vecPlayerPatchEconIndices;
	DWORD m_GunGameImmunityColor;
	DWORD m_grenadeParameterStashTime;
	DWORD m_bGrenadeParametersStashed;
	DWORD m_angStashedShootAngles;
	DWORD m_vecStashedGrenadeThrowPosition;
	DWORD m_vecStashedVelocity;
	DWORD m_angShootAngleHistory;
	DWORD m_vecThrowPositionHistory;
	DWORD m_vecVelocityHistory;
	DWORD m_PredictedDamageTags;
	DWORD m_nHighestAppliedDamageTagTick;
	DWORD m_bCommittingSuicideOnTeamChange;
	DWORD m_wasNotKilledNaturally;
	DWORD m_fImmuneToGunGameDamageTime;
	DWORD m_bGunGameImmunity;
	DWORD m_fMolotovDamageTime;
	DWORD m_angEyeAngles;
} CCSPlayerPawn;

inline struct CEnvLightProbeVolumeOffsets {
	DWORD m_Entity_hLightProbeTexture_AmbientCube;
	DWORD m_Entity_hLightProbeTexture_SDF;
	DWORD m_Entity_hLightProbeTexture_SH2_DC;
	DWORD m_Entity_hLightProbeTexture_SH2_R;
	DWORD m_Entity_hLightProbeTexture_SH2_G;
	DWORD m_Entity_hLightProbeTexture_SH2_B;
	DWORD m_Entity_hLightProbeDirectLightIndicesTexture;
	DWORD m_Entity_hLightProbeDirectLightScalarsTexture;
	DWORD m_Entity_hLightProbeDirectLightShadowsTexture;
	DWORD m_Entity_vBoxMins;
	DWORD m_Entity_vBoxMaxs;
	DWORD m_Entity_bMoveable;
	DWORD m_Entity_nHandshake;
	DWORD m_Entity_nPriority;
	DWORD m_Entity_bStartDisabled;
	DWORD m_Entity_nLightProbeSizeX;
	DWORD m_Entity_nLightProbeSizeY;
	DWORD m_Entity_nLightProbeSizeZ;
	DWORD m_Entity_nLightProbeAtlasX;
	DWORD m_Entity_nLightProbeAtlasY;
	DWORD m_Entity_nLightProbeAtlasZ;
	DWORD m_Entity_bEnabled;
} CEnvLightProbeVolume;

inline struct SpawnPointOffsets {
	DWORD m_iPriority;
	DWORD m_bEnabled;
	DWORD m_nType;
} SpawnPoint;

inline struct CPulseGraphInstance_ServerEntityOffsets {
	DWORD m_hOwner;
	DWORD m_bActivated;
	DWORD m_sNameFixupStaticPrefix;
	DWORD m_sNameFixupParent;
	DWORD m_sNameFixupLocal;
	DWORD m_sProceduralWorldNameForRelays;
} CPulseGraphInstance_ServerEntity;

inline struct CPostProcessingVolumeOffsets {
	DWORD m_hPostSettings;
	DWORD m_flFadeDuration;
	DWORD m_flMinLogExposure;
	DWORD m_flMaxLogExposure;
	DWORD m_flMinExposure;
	DWORD m_flMaxExposure;
	DWORD m_flExposureCompensation;
	DWORD m_flExposureFadeSpeedUp;
	DWORD m_flExposureFadeSpeedDown;
	DWORD m_flTonemapEVSmoothingRange;
	DWORD m_bMaster;
	DWORD m_bExposureControl;
} CPostProcessingVolume;

inline struct CPointProximitySensorOffsets {
	DWORD m_bDisabled;
	DWORD m_hTargetEntity;
	DWORD m_Distance;
} CPointProximitySensor;

inline struct CTriggerLookOffsets {
	DWORD m_hLookTarget;
	DWORD m_flFieldOfView;
	DWORD m_flLookTime;
	DWORD m_flLookTimeTotal;
	DWORD m_flLookTimeLast;
	DWORD m_flTimeoutDuration;
	DWORD m_bTimeoutFired;
	DWORD m_bIsLooking;
	DWORD m_b2DFOV;
	DWORD m_bUseVelocity;
	DWORD m_bTestOcclusion;
	DWORD m_bTestAllVisibleOcclusion;
	DWORD m_OnTimeout;
	DWORD m_OnStartLook;
	DWORD m_OnEndLook;
} CTriggerLook;

inline struct CPulseCell_Outflow_PlayVCDOffsets {
	DWORD m_hChoreoScene;
} CPulseCell_Outflow_PlayVCD;

inline struct CPhysTorqueOffsets {
	DWORD m_axis;
} CPhysTorque;

inline struct CMultiSourceOffsets {
	DWORD m_rgEntities;
	DWORD m_rgTriggered;
	DWORD m_OnTrigger;
	DWORD m_iTotal;
	DWORD m_globalstate;
} CMultiSource;

inline struct CBaseCSGrenadeOffsets {
	DWORD m_bRedraw;
	DWORD m_bIsHeldByPlayer;
	DWORD m_bPinPulled;
	DWORD m_bJumpThrow;
	DWORD m_bThrowAnimating;
	DWORD m_fThrowTime;
	DWORD m_flThrowStrength;
	DWORD m_fDropTime;
	DWORD m_fPinPullTime;
	DWORD m_bJustPulledPin;
	DWORD m_nNextHoldTick;
	DWORD m_flNextHoldFrac;
	DWORD m_hSwitchToWeaponAfterThrow;
} CBaseCSGrenade;

inline struct CLogicAutoOffsets {
	DWORD m_OnMapSpawn;
	DWORD m_OnDemoMapSpawn;
	DWORD m_OnNewGame;
	DWORD m_OnLoadGame;
	DWORD m_OnMapTransition;
	DWORD m_OnBackgroundMap;
	DWORD m_OnMultiNewMap;
	DWORD m_OnMultiNewRound;
	DWORD m_OnVREnabled;
	DWORD m_OnVRNotEnabled;
	DWORD m_globalstate;
} CLogicAuto;

inline struct CPhysicsWireOffsets {
	DWORD m_nDensity;
} CPhysicsWire;

inline struct CMarkupVolumeOffsets {
	DWORD m_bDisabled;
} CMarkupVolume;

inline struct CTriggerRemoveOffsets {
	DWORD m_OnRemove;
} CTriggerRemove;

inline struct CLogicGameEventListenerOffsets {
	DWORD m_OnEventFired;
	DWORD m_iszGameEventName;
	DWORD m_iszGameEventItem;
	DWORD m_bEnabled;
	DWORD m_bStartDisabled;
} CLogicGameEventListener;

inline struct CMarkupVolumeTagged_NavOffsets {
	DWORD m_nScopes;
} CMarkupVolumeTagged_Nav;

inline struct CLogicAutosaveOffsets {
	DWORD m_bForceNewLevelUnit;
	DWORD m_minHitPoints;
	DWORD m_minHitPointsToCommit;
} CLogicAutosave;

inline struct CSingleplayRulesOffsets {
	DWORD m_bSinglePlayerGameEnding;
} CSingleplayRules;

inline struct CEnvWindSharedOffsets {
	DWORD m_flStartTime;
	DWORD m_iWindSeed;
	DWORD m_iMinWind;
	DWORD m_iMaxWind;
	DWORD m_windRadius;
	DWORD m_iMinGust;
	DWORD m_iMaxGust;
	DWORD m_flMinGustDelay;
	DWORD m_flMaxGustDelay;
	DWORD m_flGustDuration;
	DWORD m_iGustDirChange;
	DWORD m_iInitialWindDir;
	DWORD m_flInitialWindSpeed;
	DWORD m_location;
	DWORD m_OnGustStart;
	DWORD m_OnGustEnd;
	DWORD m_hEntOwner;
} CEnvWindShared;

inline struct CPointPrefabOffsets {
	DWORD m_targetMapName;
	DWORD m_forceWorldGroupID;
	DWORD m_associatedRelayTargetName;
	DWORD m_fixupNames;
	DWORD m_bLoadDynamic;
	DWORD m_associatedRelayEntity;
} CPointPrefab;

inline struct CEnvInstructorVRHintOffsets {
	DWORD m_iszName;
	DWORD m_iszHintTargetEntity;
	DWORD m_iTimeout;
	DWORD m_iszCaption;
	DWORD m_iszStartSound;
	DWORD m_iLayoutFileType;
	DWORD m_iszCustomLayoutFile;
	DWORD m_iAttachType;
	DWORD m_flHeightOffset;
} CEnvInstructorVRHint;

inline struct CCSGameRulesProxyOffsets {
	DWORD m_pGameRules;
} CCSGameRulesProxy;

inline struct CEnvGlobalOffsets {
	DWORD m_outCounter;
	DWORD m_globalstate;
	DWORD m_triggermode;
	DWORD m_initialstate;
	DWORD m_counter;
} CEnvGlobal;

inline struct CPlatTriggerOffsets {
	DWORD m_pPlatform;
} CPlatTrigger;

inline struct CSceneEntityOffsets {
	DWORD m_iszSceneFile;
	DWORD m_iszResumeSceneFile;
	DWORD m_iszTarget1;
	DWORD m_iszTarget2;
	DWORD m_iszTarget3;
	DWORD m_iszTarget4;
	DWORD m_iszTarget5;
	DWORD m_iszTarget6;
	DWORD m_iszTarget7;
	DWORD m_iszTarget8;
	DWORD m_hTarget1;
	DWORD m_hTarget2;
	DWORD m_hTarget3;
	DWORD m_hTarget4;
	DWORD m_hTarget5;
	DWORD m_hTarget6;
	DWORD m_hTarget7;
	DWORD m_hTarget8;
	DWORD m_sTargetAttachment;
	DWORD m_bIsPlayingBack;
	DWORD m_bPaused;
	DWORD m_bMultiplayer;
	DWORD m_bAutogenerated;
	DWORD m_flForceClientTime;
	DWORD m_flCurrentTime;
	DWORD m_flFrameTime;
	DWORD m_bCancelAtNextInterrupt;
	DWORD m_fPitch;
	DWORD m_bAutomated;
	DWORD m_nAutomatedAction;
	DWORD m_flAutomationDelay;
	DWORD m_flAutomationTime;
	DWORD m_nSpeechPriority;
	DWORD m_hWaitingForThisResumeScene;
	DWORD m_bWaitingForResumeScene;
	DWORD m_bPausedViaInput;
	DWORD m_bPauseAtNextInterrupt;
	DWORD m_bWaitingForActor;
	DWORD m_bWaitingForInterrupt;
	DWORD m_bInterruptedActorsScenes;
	DWORD m_bBreakOnNonIdle;
	DWORD m_bSceneFinished;
	DWORD m_hActorList;
	DWORD m_hRemoveActorList;
	DWORD m_nSceneFlushCounter;
	DWORD m_nSceneStringIndex;
	DWORD m_OnStart;
	DWORD m_OnCompletion;
	DWORD m_OnCanceled;
	DWORD m_OnPaused;
	DWORD m_OnResumed;
	DWORD m_OnTrigger;
	DWORD m_hInterruptScene;
	DWORD m_nInterruptCount;
	DWORD m_bSceneMissing;
	DWORD m_bInterrupted;
	DWORD m_bCompletedEarly;
	DWORD m_bInterruptSceneFinished;
	DWORD m_bRestoring;
	DWORD m_hNotifySceneCompletion;
	DWORD m_hListManagers;
	DWORD m_iszSoundName;
	DWORD m_iszSequenceName;
	DWORD m_hActor;
	DWORD m_hActivator;
	DWORD m_BusyActor;
	DWORD m_iPlayerDeathBehavior;
} CSceneEntity;

inline struct CTonemapController2Offsets {
	DWORD m_flAutoExposureMin;
	DWORD m_flAutoExposureMax;
	DWORD m_flExposureAdaptationSpeedUp;
	DWORD m_flExposureAdaptationSpeedDown;
	DWORD m_flTonemapEVSmoothingRange;
} CTonemapController2;

inline struct CMapSharedEnvironmentOffsets {
	DWORD m_targetMapName;
} CMapSharedEnvironment;

inline struct CPhysMagnetOffsets {
	DWORD m_OnMagnetAttach;
	DWORD m_OnMagnetDetach;
	DWORD m_massScale;
	DWORD m_forceLimit;
	DWORD m_torqueLimit;
	DWORD m_MagnettedEntities;
	DWORD m_bActive;
	DWORD m_bHasHitSomething;
	DWORD m_flTotalMass;
	DWORD m_flRadius;
	DWORD m_flNextSuckTime;
	DWORD m_iMaxObjectsAttached;
} CPhysMagnet;

inline struct CGameGibManagerOffsets {
	DWORD m_bAllowNewGibs;
	DWORD m_iCurrentMaxPieces;
	DWORD m_iMaxPieces;
	DWORD m_iLastFrame;
} CGameGibManager;

inline struct CSkyCameraOffsets {
	DWORD m_skyboxData;
	DWORD m_skyboxSlotToken;
	DWORD m_bUseAngles;
	DWORD m_pNext;
} CSkyCamera;

inline struct CPhysPulleyOffsets {
	DWORD m_position2;
	DWORD m_offset;
	DWORD m_addLength;
	DWORD m_gearRatio;
} CPhysPulley;

inline struct CWeaponBaseItemOffsets {
	DWORD m_bSequenceInProgress;
	DWORD m_bRedraw;
} CWeaponBaseItem;

inline struct CCommentaryAutoOffsets {
	DWORD m_OnCommentaryNewGame;
	DWORD m_OnCommentaryMidGame;
	DWORD m_OnCommentaryMultiplayerSpawn;
} CCommentaryAuto;

inline struct CPulseCell_Outflow_ListenForEntityOutput__CursorState_tOffsets {
	DWORD m_entity;
} CPulseCell_Outflow_ListenForEntityOutput__CursorState_t;

inline struct CSoundStackSaveOffsets {
	DWORD m_iszStackName;
} CSoundStackSave;

inline struct CLogicMeasureMovementOffsets {
	DWORD m_strMeasureTarget;
	DWORD m_strMeasureReference;
	DWORD m_strTargetReference;
	DWORD m_hMeasureTarget;
	DWORD m_hMeasureReference;
	DWORD m_hTarget;
	DWORD m_hTargetReference;
	DWORD m_flScale;
	DWORD m_nMeasureType;
} CLogicMeasureMovement;

inline struct CC4Offsets {
	DWORD m_vecLastValidPlayerHeldPosition;
	DWORD m_vecLastValidDroppedPosition;
	DWORD m_bDoValidDroppedPositionCheck;
	DWORD m_bStartedArming;
	DWORD m_fArmedTime;
	DWORD m_bBombPlacedAnimation;
	DWORD m_bIsPlantingViaUse;
	DWORD m_entitySpottedState;
	DWORD m_nSpotRules;
	DWORD m_bPlayedArmingBeeps;
	DWORD m_bBombPlanted;
} CC4;

inline struct CEnvDetailControllerOffsets {
	DWORD m_flFadeStartDist;
	DWORD m_flFadeEndDist;
} CEnvDetailController;

inline struct CCSPlayerPawnBaseOffsets {
	DWORD m_CTouchExpansionComponent;
	DWORD m_pPingServices;
	DWORD m_blindUntilTime;
	DWORD m_blindStartTime;
	DWORD m_iPlayerState;
	DWORD m_bRespawning;
	DWORD m_bHasMovedSinceSpawn;
	DWORD m_iNumSpawns;
	DWORD m_flIdleTimeSinceLastAction;
	DWORD m_fNextRadarUpdateTime;
	DWORD m_flFlashDuration;
	DWORD m_flFlashMaxAlpha;
	DWORD m_flProgressBarStartTime;
	DWORD m_iProgressBarDuration;
	DWORD m_hOriginalController;
} CCSPlayerPawnBase;

inline struct CRuleEntityOffsets {
	DWORD m_iszMaster;
} CRuleEntity;

inline struct CPhysThrusterOffsets {
	DWORD m_localOrigin;
} CPhysThruster;

inline struct CInfoPlayerStartOffsets {
	DWORD m_bDisabled;
	DWORD m_bIsMaster;
	DWORD m_pPawnSubclass;
} CInfoPlayerStart;

inline struct CEntityFlameOffsets {
	DWORD m_hEntAttached;
	DWORD m_bCheapEffect;
	DWORD m_flSize;
	DWORD m_bUseHitboxes;
	DWORD m_iNumHitboxFires;
	DWORD m_flHitboxFireScale;
	DWORD m_flLifetime;
	DWORD m_hAttacker;
	DWORD m_flDirectDamagePerSecond;
	DWORD m_iCustomDamageType;
} CEntityFlame;

inline struct CBasePlatTrainOffsets {
	DWORD m_NoiseMoving;
	DWORD m_NoiseArrived;
	DWORD m_volume;
	DWORD m_flTWidth;
	DWORD m_flTLength;
} CBasePlatTrain;

inline struct CPointTeleportOffsets {
	DWORD m_vSaveOrigin;
	DWORD m_vSaveAngles;
	DWORD m_bTeleportParentedEntities;
	DWORD m_bTeleportUseCurrentAngle;
} CPointTeleport;

inline struct CTriggerGameEventOffsets {
	DWORD m_strStartTouchEventName;
	DWORD m_strEndTouchEventName;
	DWORD m_strTriggerID;
} CTriggerGameEvent;

inline struct CMessageEntityOffsets {
	DWORD m_radius;
	DWORD m_messageText;
	DWORD m_drawText;
	DWORD m_bDeveloperOnly;
	DWORD m_bEnabled;
} CMessageEntity;

inline struct CEnvEntityIgniterOffsets {
	DWORD m_flLifetime;
} CEnvEntityIgniter;

inline struct CMarkupVolumeTagged_NavGameOffsets {
	DWORD m_nScopes;
	DWORD m_bFloodFillAttribute;
	DWORD m_bSplitNavSpace;
} CMarkupVolumeTagged_NavGame;

inline struct CMultiLightProxyOffsets {
	DWORD m_iszLightNameFilter;
	DWORD m_iszLightClassFilter;
	DWORD m_flLightRadiusFilter;
	DWORD m_flBrightnessDelta;
	DWORD m_bPerformScreenFade;
	DWORD m_flTargetBrightnessMultiplier;
	DWORD m_flCurrentBrightnessMultiplier;
	DWORD m_vecLights;
} CMultiLightProxy;

inline struct CEconWearableOffsets {
	DWORD m_nForceSkin;
	DWORD m_bAlwaysAllow;
} CEconWearable;

inline struct CFuncLadderOffsets {
	DWORD m_vecLadderDir;
	DWORD m_Dismounts;
	DWORD m_vecLocalTop;
	DWORD m_vecPlayerMountPositionTop;
	DWORD m_vecPlayerMountPositionBottom;
	DWORD m_flAutoRideSpeed;
	DWORD m_bDisabled;
	DWORD m_bFakeLadder;
	DWORD m_bHasSlack;
	DWORD m_surfacePropName;
	DWORD m_OnPlayerGotOnLadder;
	DWORD m_OnPlayerGotOffLadder;
} CFuncLadder;

inline struct CFogControllerOffsets {
	DWORD m_fog;
	DWORD m_bUseAngles;
	DWORD m_iChangedVariables;
} CFogController;

inline struct CItemOffsets {
	DWORD m_OnPlayerTouch;
	DWORD m_OnPlayerPickup;
	DWORD m_bActivateWhenAtRest;
	DWORD m_OnCacheInteraction;
	DWORD m_OnGlovePulled;
	DWORD m_vOriginalSpawnOrigin;
	DWORD m_vOriginalSpawnAngles;
	DWORD m_bPhysStartAsleep;
} CItem;

inline struct CTriggerPushOffsets {
	DWORD m_angPushEntitySpace;
	DWORD m_vecPushDirEntitySpace;
	DWORD m_bTriggerOnStartTouch;
	DWORD m_bUsePathSimple;
	DWORD m_iszPathSimpleName;
	DWORD m_PathSimple;
	DWORD m_splinePushType;
} CTriggerPush;

inline struct CPointAngularVelocitySensorOffsets {
	DWORD m_hTargetEntity;
	DWORD m_flThreshold;
	DWORD m_nLastCompareResult;
	DWORD m_nLastFireResult;
	DWORD m_flFireTime;
	DWORD m_flFireInterval;
	DWORD m_flLastAngVelocity;
	DWORD m_lastOrientation;
	DWORD m_vecAxis;
	DWORD m_bUseHelper;
	DWORD m_AngularVelocity;
	DWORD m_OnLessThan;
	DWORD m_OnLessThanOrEqualTo;
	DWORD m_OnGreaterThan;
	DWORD m_OnGreaterThanOrEqualTo;
	DWORD m_OnEqualTo;
} CPointAngularVelocitySensor;

inline struct CPlayerVisibilityOffsets {
	DWORD m_flVisibilityStrength;
	DWORD m_flFogDistanceMultiplier;
	DWORD m_flFogMaxDensityMultiplier;
	DWORD m_flFadeTime;
	DWORD m_bStartDisabled;
	DWORD m_bIsEnabled;
} CPlayerVisibility;

inline struct CPulseCell_Step_FollowEntityOffsets {
	DWORD m_ParamBoneOrAttachName;
	DWORD m_ParamBoneOrAttachNameChild;
} CPulseCell_Step_FollowEntity;

inline struct CBasePlayerWeaponOffsets {
	DWORD m_nNextPrimaryAttackTick;
	DWORD m_flNextPrimaryAttackTickRatio;
	DWORD m_nNextSecondaryAttackTick;
	DWORD m_flNextSecondaryAttackTickRatio;
	DWORD m_iClip1;
	DWORD m_iClip2;
	DWORD m_pReserveAmmo;
	DWORD m_OnPlayerUse;
} CBasePlayerWeapon;

inline struct CPhysForceOffsets {
	DWORD m_nameAttach;
	DWORD m_force;
	DWORD m_forceTime;
	DWORD m_attachedObject;
	DWORD m_wasRestored;
	DWORD m_integrator;
} CPhysForce;

inline struct CKeepUprightOffsets {
	DWORD m_worldGoalAxis;
	DWORD m_localTestAxis;
	DWORD m_nameAttach;
	DWORD m_attachedObject;
	DWORD m_angularLimit;
	DWORD m_bActive;
	DWORD m_bDampAllRotation;
} CKeepUpright;

inline struct CEnvVolumetricFogControllerOffsets {
	DWORD m_flScattering;
	DWORD m_TintColor;
	DWORD m_flAnisotropy;
	DWORD m_flFadeSpeed;
	DWORD m_flDrawDistance;
	DWORD m_flFadeInStart;
	DWORD m_flFadeInEnd;
	DWORD m_flIndirectStrength;
	DWORD m_nVolumeDepth;
	DWORD m_fFirstVolumeSliceThickness;
	DWORD m_nIndirectTextureDimX;
	DWORD m_nIndirectTextureDimY;
	DWORD m_nIndirectTextureDimZ;
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
	DWORD m_bActive;
	DWORD m_flStartAnisoTime;
	DWORD m_flStartScatterTime;
	DWORD m_flStartDrawDistanceTime;
	DWORD m_flStartAnisotropy;
	DWORD m_flStartScattering;
	DWORD m_flStartDrawDistance;
	DWORD m_flDefaultAnisotropy;
	DWORD m_flDefaultScattering;
	DWORD m_flDefaultDrawDistance;
	DWORD m_bStartDisabled;
	DWORD m_bEnableIndirect;
	DWORD m_bIsMaster;
	DWORD m_hFogIndirectTexture;
	DWORD m_nForceRefreshCount;
	DWORD m_fNoiseSpeed;
	DWORD m_fNoiseStrength;
	DWORD m_vNoiseScale;
	DWORD m_fWindSpeed;
	DWORD m_vWindDirection;
	DWORD m_bFirstTime;
} CEnvVolumetricFogController;

inline struct CBotOffsets {
	DWORD m_pController;
	DWORD m_pPlayer;
	DWORD m_bHasSpawned;
	DWORD m_id;
	DWORD m_isRunning;
	DWORD m_isCrouching;
	DWORD m_forwardSpeed;
	DWORD m_leftSpeed;
	DWORD m_verticalSpeed;
	DWORD m_buttonFlags;
	DWORD m_jumpTimestamp;
	DWORD m_viewForward;
	DWORD m_postureStackIndex;
} CBot;

inline struct CPulseCell_Step_SetAnimGraphParamOffsets {
	DWORD m_ParamName;
} CPulseCell_Step_SetAnimGraphParam;

inline struct CPhysLengthOffsets {
	DWORD m_offset;
	DWORD m_vecAttach;
	DWORD m_addLength;
	DWORD m_minLength;
	DWORD m_totalLength;
	DWORD m_bEnableCollision;
} CPhysLength;

inline struct CTeamOffsets {
	DWORD m_aPlayerControllers;
	DWORD m_aPlayers;
	DWORD m_iScore;
	DWORD m_szTeamname;
} CTeam;

inline struct CLogicNPCCounterAABBOffsets {
	DWORD m_vDistanceOuterMins;
	DWORD m_vDistanceOuterMaxs;
	DWORD m_vOuterMins;
	DWORD m_vOuterMaxs;
} CLogicNPCCounterAABB;

inline struct CChickenOffsets {
	DWORD m_AttributeManager;
	DWORD m_updateTimer;
	DWORD m_stuckAnchor;
	DWORD m_stuckTimer;
	DWORD m_collisionStuckTimer;
	DWORD m_isOnGround;
	DWORD m_vFallVelocity;
	DWORD m_desiredActivity;
	DWORD m_currentActivity;
	DWORD m_activityTimer;
	DWORD m_turnRate;
	DWORD m_fleeFrom;
	DWORD m_moveRateThrottleTimer;
	DWORD m_startleTimer;
	DWORD m_vocalizeTimer;
	DWORD m_flWhenZombified;
	DWORD m_jumpedThisFrame;
	DWORD m_leader;
	DWORD m_reuseTimer;
	DWORD m_hasBeenUsed;
	DWORD m_jumpTimer;
	DWORD m_flLastJumpTime;
	DWORD m_bInJump;
	DWORD m_repathTimer;
	DWORD m_vecPathGoal;
	DWORD m_flActiveFollowStartTime;
	DWORD m_followMinuteTimer;
	DWORD m_BlockDirectionTimer;
} CChicken;

inline struct CPhysicsPropRespawnableOffsets {
	DWORD m_vOriginalSpawnOrigin;
	DWORD m_vOriginalSpawnAngles;
	DWORD m_vOriginalMins;
	DWORD m_vOriginalMaxs;
	DWORD m_flRespawnDuration;
} CPhysicsPropRespawnable;

inline struct CEnvBeamOffsets {
	DWORD m_active;
	DWORD m_spriteTexture;
	DWORD m_iszStartEntity;
	DWORD m_iszEndEntity;
	DWORD m_life;
	DWORD m_boltWidth;
	DWORD m_noiseAmplitude;
	DWORD m_speed;
	DWORD m_restrike;
	DWORD m_iszSpriteName;
	DWORD m_frameStart;
	DWORD m_vEndPointWorld;
	DWORD m_vEndPointRelative;
	DWORD m_radius;
	DWORD m_TouchType;
	DWORD m_iFilterName;
	DWORD m_hFilter;
	DWORD m_iszDecal;
	DWORD m_OnTouchedByEntity;
} CEnvBeam;

inline struct CTonemapTriggerOffsets {
	DWORD m_tonemapControllerName;
	DWORD m_hTonemapController;
} CTonemapTrigger;

inline struct CEnvShakeOffsets {
	DWORD m_limitToEntity;
	DWORD m_Amplitude;
	DWORD m_Frequency;
	DWORD m_Duration;
	DWORD m_Radius;
	DWORD m_stopTime;
	DWORD m_nextShake;
	DWORD m_currentAmp;
	DWORD m_maxForce;
	DWORD m_shakeCallback;
} CEnvShake;

inline struct CSoundOpvarSetAutoRoomEntityOffsets {
	DWORD m_traceResults;
	DWORD m_doorwayPairs;
	DWORD m_flSize;
	DWORD m_flHeightTolerance;
	DWORD m_flSizeSqr;
} CSoundOpvarSetAutoRoomEntity;

inline struct CPulseCell_Outflow_ListenForEntityOutputOffsets {
	DWORD m_OnFired;
	DWORD m_OnCanceled;
	DWORD m_strEntityOutput;
	DWORD m_strEntityOutputParam;
	DWORD m_bListenUntilCanceled;
} CPulseCell_Outflow_ListenForEntityOutput;

inline struct CRotatorTargetOffsets {
	DWORD m_OnArrivedAt;
	DWORD m_eSpace;
} CRotatorTarget;

inline struct CPhysicsEntitySolverOffsets {
	DWORD m_hMovingEntity;
	DWORD m_hPhysicsBlocker;
	DWORD m_separationDuration;
	DWORD m_cancelTime;
} CPhysicsEntitySolver;

inline struct CLogicCollisionPairOffsets {
	DWORD m_nameAttach1;
	DWORD m_nameAttach2;
	DWORD m_includeHierarchy;
	DWORD m_supportMultipleEntitiesWithSameName;
	DWORD m_disabled;
	DWORD m_succeeded;
} CLogicCollisionPair;

inline struct CTestEffectOffsets {
	DWORD m_iLoop;
	DWORD m_iBeam;
	DWORD m_pBeam;
	DWORD m_flBeamTime;
	DWORD m_flStartTime;
} CTestEffect;

inline struct CPulseCell_Outflow_ScriptedSequence__CursorState_tOffsets {
	DWORD m_scriptedSequence;
} CPulseCell_Outflow_ScriptedSequence__CursorState_t;

inline struct CPropDoorRotatingOffsets {
	DWORD m_vecAxis;
	DWORD m_flDistance;
	DWORD m_eSpawnPosition;
	DWORD m_eOpenDirection;
	DWORD m_eCurrentOpenDirection;
	DWORD m_eDefaultCheckDirection;
	DWORD m_flAjarAngle;
	DWORD m_angRotationAjarDeprecated;
	DWORD m_angRotationClosed;
	DWORD m_angRotationOpenForward;
	DWORD m_angRotationOpenBack;
	DWORD m_angGoal;
	DWORD m_vecForwardBoundsMin;
	DWORD m_vecForwardBoundsMax;
	DWORD m_vecBackBoundsMin;
	DWORD m_vecBackBoundsMax;
	DWORD m_bAjarDoorShouldntAlwaysOpen;
	DWORD m_hEntityBlocker;
} CPropDoorRotating;

inline struct CEnvParticleGlowOffsets {
	DWORD m_flAlphaScale;
	DWORD m_flRadiusScale;
	DWORD m_flSelfIllumScale;
	DWORD m_ColorTint;
	DWORD m_hTextureOverride;
} CEnvParticleGlow;

inline struct CMathRemapOffsets {
	DWORD m_flInMin;
	DWORD m_flInMax;
	DWORD m_flOut1;
	DWORD m_flOut2;
	DWORD m_flOldInValue;
	DWORD m_bEnabled;
	DWORD m_OutValue;
	DWORD m_OnRoseAboveMin;
	DWORD m_OnRoseAboveMax;
	DWORD m_OnFellBelowMin;
	DWORD m_OnFellBelowMax;
} CMathRemap;

inline struct CSoundOpvarSetOBBWindEntityOffsets {
	DWORD m_vMins;
	DWORD m_vMaxs;
	DWORD m_vDistanceMins;
	DWORD m_vDistanceMaxs;
	DWORD m_flWindMin;
	DWORD m_flWindMax;
	DWORD m_flWindMapMin;
	DWORD m_flWindMapMax;
} CSoundOpvarSetOBBWindEntity;

inline struct CScriptTriggerOnceOffsets {
	DWORD m_vExtent;
} CScriptTriggerOnce;

inline struct CTriggerTeleportOffsets {
	DWORD m_iLandmark;
	DWORD m_bUseLandmarkAngles;
	DWORD m_bMirrorPlayer;
	DWORD m_bCheckDestIfClearForPlayer;
} CTriggerTeleport;

inline struct CFuncWallOffsets {
	DWORD m_nState;
} CFuncWall;

inline struct CBtActionAimOffsets {
	DWORD m_szSensorInputKey;
	DWORD m_szAimReadyKey;
	DWORD m_flZoomCooldownTimestamp;
	DWORD m_bDoneAiming;
	DWORD m_flLerpStartTime;
	DWORD m_flNextLookTargetLerpTime;
	DWORD m_flPenaltyReductionRatio;
	DWORD m_NextLookTarget;
	DWORD m_AimTimer;
	DWORD m_SniperHoldTimer;
	DWORD m_FocusIntervalTimer;
	DWORD m_bAcquired;
} CBtActionAim;

inline struct CCSGO_TeamPreviewCharacterPositionOffsets {
	DWORD m_nVariant;
	DWORD m_nRandom;
	DWORD m_nOrdinal;
	DWORD m_sWeaponName;
	DWORD m_xuid;
	DWORD m_agentItem;
	DWORD m_glovesItem;
	DWORD m_weaponItem;
} CCSGO_TeamPreviewCharacterPosition;

inline struct CMessageOffsets {
	DWORD m_iszMessage;
	DWORD m_MessageVolume;
	DWORD m_MessageAttenuation;
	DWORD m_Radius;
	DWORD m_sNoise;
	DWORD m_OnShowMessage;
} CMessage;

inline struct CPointVelocitySensorOffsets {
	DWORD m_hTargetEntity;
	DWORD m_vecAxis;
	DWORD m_bEnabled;
	DWORD m_fPrevVelocity;
	DWORD m_flAvgInterval;
	DWORD m_Velocity;
} CPointVelocitySensor;

inline struct CHostageOffsets {
	DWORD m_OnHostageBeginGrab;
	DWORD m_OnFirstPickedUp;
	DWORD m_OnDroppedNotRescued;
	DWORD m_OnRescued;
	DWORD m_entitySpottedState;
	DWORD m_nSpotRules;
	DWORD m_uiHostageSpawnExclusionGroupMask;
	DWORD m_nHostageSpawnRandomFactor;
	DWORD m_bRemove;
	DWORD m_vel;
	DWORD m_isRescued;
	DWORD m_jumpedThisFrame;
	DWORD m_nHostageState;
	DWORD m_leader;
	DWORD m_lastLeader;
	DWORD m_reuseTimer;
	DWORD m_hasBeenUsed;
	DWORD m_accel;
	DWORD m_isRunning;
	DWORD m_isCrouching;
	DWORD m_jumpTimer;
	DWORD m_isWaitingForLeader;
	DWORD m_repathTimer;
	DWORD m_inhibitDoorTimer;
	DWORD m_inhibitObstacleAvoidanceTimer;
	DWORD m_wiggleTimer;
	DWORD m_isAdjusted;
	DWORD m_bHandsHaveBeenCut;
	DWORD m_hHostageGrabber;
	DWORD m_fLastGrabTime;
	DWORD m_vecPositionWhenStartedDroppingToGround;
	DWORD m_vecGrabbedPos;
	DWORD m_flRescueStartTime;
	DWORD m_flGrabSuccessTime;
	DWORD m_flDropStartTime;
	DWORD m_nApproachRewardPayouts;
	DWORD m_nPickupEventCount;
	DWORD m_vecSpawnGroundPos;
	DWORD m_vecHostageResetPosition;
} CHostage;

inline struct CScriptTriggerMultipleOffsets {
	DWORD m_vExtent;
} CScriptTriggerMultiple;

inline struct CEnvSparkOffsets {
	DWORD m_flDelay;
	DWORD m_nMagnitude;
	DWORD m_nTrailLength;
	DWORD m_nType;
	DWORD m_OnSpark;
} CEnvSpark;

inline struct CChangeLevelOffsets {
	DWORD m_sMapName;
	DWORD m_sLandmarkName;
	DWORD m_OnChangeLevel;
	DWORD m_bTouched;
	DWORD m_bNoTouch;
	DWORD m_bNewChapter;
	DWORD m_bOnChangeLevelFired;
} CChangeLevel;

inline struct CBaseButtonOffsets {
	DWORD m_angMoveEntitySpace;
	DWORD m_fStayPushed;
	DWORD m_fRotating;
	DWORD m_ls;
	DWORD m_sUseSound;
	DWORD m_sLockedSound;
	DWORD m_sUnlockedSound;
	DWORD m_sOverrideAnticipationName;
	DWORD m_bLocked;
	DWORD m_bDisabled;
	DWORD m_flUseLockedTime;
	DWORD m_bSolidBsp;
	DWORD m_OnDamaged;
	DWORD m_OnPressed;
	DWORD m_OnUseLocked;
	DWORD m_OnIn;
	DWORD m_OnOut;
	DWORD m_nState;
	DWORD m_hConstraint;
	DWORD m_hConstraintParent;
	DWORD m_bForceNpcExclude;
	DWORD m_sGlowEntity;
	DWORD m_glowEntity;
	DWORD m_usable;
	DWORD m_szDisplayText;
} CBaseButton;

inline struct CPulseCell_SoundEventStartOffsets {
	DWORD m_Type;
} CPulseCell_SoundEventStart;

inline struct CBaseGrenadeOffsets {
	DWORD m_OnPlayerPickup;
	DWORD m_OnExplode;
	DWORD m_bHasWarnedAI;
	DWORD m_bIsSmokeGrenade;
	DWORD m_bIsLive;
	DWORD m_DmgRadius;
	DWORD m_flDetonateTime;
	DWORD m_flWarnAITime;
	DWORD m_flDamage;
	DWORD m_iszBounceSound;
	DWORD m_ExplosionSound;
	DWORD m_hThrower;
	DWORD m_flNextAttack;
	DWORD m_hOriginalThrower;
} CBaseGrenade;

inline struct CColorCorrectionVolumeOffsets {
	DWORD m_MaxWeight;
	DWORD m_FadeDuration;
	DWORD m_Weight;
	DWORD m_lookupFilename;
	DWORD m_LastEnterWeight;
	DWORD m_LastEnterTime;
	DWORD m_LastExitWeight;
	DWORD m_LastExitTime;
} CColorCorrectionVolume;

inline struct CFogVolumeOffsets {
	DWORD m_fogName;
	DWORD m_postProcessName;
	DWORD m_colorCorrectionName;
	DWORD m_bDisabled;
	DWORD m_bInFogVolumesList;
} CFogVolume;

inline struct CFuncRotatingOffsets {
	DWORD m_OnStopped;
	DWORD m_OnStarted;
	DWORD m_OnReachedStart;
	DWORD m_localRotationVector;
	DWORD m_flFanFriction;
	DWORD m_flAttenuation;
	DWORD m_flVolume;
	DWORD m_flTargetSpeed;
	DWORD m_flMaxSpeed;
	DWORD m_flBlockDamage;
	DWORD m_NoiseRunning;
	DWORD m_bReversed;
	DWORD m_bAccelDecel;
	DWORD m_prevLocalAngles;
	DWORD m_angStart;
	DWORD m_bStopAtStartPos;
	DWORD m_vecClientOrigin;
	DWORD m_vecClientAngles;
} CFuncRotating;

inline struct CTimerEntityOffsets {
	DWORD m_OnTimer;
	DWORD m_OnTimerHigh;
	DWORD m_OnTimerLow;
	DWORD m_iDisabled;
	DWORD m_flInitialDelay;
	DWORD m_flRefireTime;
	DWORD m_bUpDownState;
	DWORD m_iUseRandomTime;
	DWORD m_bPauseAfterFiring;
	DWORD m_flLowerRandomBound;
	DWORD m_flUpperRandomBound;
	DWORD m_flRemainingTime;
	DWORD m_bPaused;
} CTimerEntity;

inline struct CBtActionMoveToOffsets {
	DWORD m_szDestinationInputKey;
	DWORD m_szHidingSpotInputKey;
	DWORD m_szThreatInputKey;
	DWORD m_vecDestination;
	DWORD m_bAutoLookAdjust;
	DWORD m_bComputePath;
	DWORD m_flDamagingAreasPenaltyCost;
	DWORD m_CheckApproximateCornersTimer;
	DWORD m_CheckHighPriorityItem;
	DWORD m_RepathTimer;
	DWORD m_flArrivalEpsilon;
	DWORD m_flAdditionalArrivalEpsilon2D;
	DWORD m_flHidingSpotCheckDistanceThreshold;
	DWORD m_flNearestAreaDistanceThreshold;
} CBtActionMoveTo;

inline struct CFuncMonitorOffsets {
	DWORD m_targetCamera;
	DWORD m_nResolutionEnum;
	DWORD m_bRenderShadows;
	DWORD m_bUseUniqueColorTarget;
	DWORD m_brushModelName;
	DWORD m_hTargetCamera;
	DWORD m_bEnabled;
	DWORD m_bDraw3DSkybox;
	DWORD m_bStartEnabled;
} CFuncMonitor;

inline struct CInfoVisibilityBoxOffsets {
	DWORD m_nMode;
	DWORD m_vBoxSize;
	DWORD m_bEnabled;
} CInfoVisibilityBox;

inline struct CGunTargetOffsets {
	DWORD m_on;
	DWORD m_hTargetEnt;
	DWORD m_OnDeath;
} CGunTarget;

inline struct CDecoyProjectileOffsets {
	DWORD m_nDecoyShotTick;
	DWORD m_shotsRemaining;
	DWORD m_fExpireTime;
	DWORD m_decoyWeaponDefIndex;
} CDecoyProjectile;

inline struct CSoundOpvarSetPathCornerEntityOffsets {
	DWORD m_flDistMinSqr;
	DWORD m_flDistMaxSqr;
	DWORD m_iszPathCornerEntityName;
} CSoundOpvarSetPathCornerEntity;

inline struct CCSWeaponBaseGunOffsets {
	DWORD m_zoomLevel;
	DWORD m_iBurstShotsRemaining;
	DWORD m_silencedModelIndex;
	DWORD m_inPrecache;
	DWORD m_bNeedsBoltAction;
	DWORD m_nRevolverCylinderIdx;
	DWORD m_bSkillReloadAvailable;
	DWORD m_bSkillReloadLiftedReloadKey;
	DWORD m_bSkillBoltInterruptAvailable;
	DWORD m_bSkillBoltLiftedFireKey;
} CCSWeaponBaseGun;

inline struct CLogicActiveAutosaveOffsets {
	DWORD m_TriggerHitPoints;
	DWORD m_flTimeToTrigger;
	DWORD m_flStartTime;
	DWORD m_flDangerousTime;
} CLogicActiveAutosave;

inline struct CMathCounterOffsets {
	DWORD m_flMin;
	DWORD m_flMax;
	DWORD m_bHitMin;
	DWORD m_bHitMax;
	DWORD m_bDisabled;
	DWORD m_OutValue;
	DWORD m_OnGetValue;
	DWORD m_OnHitMin;
	DWORD m_OnHitMax;
	DWORD m_OnChangedFromMin;
	DWORD m_OnChangedFromMax;
} CMathCounter;

inline struct CNavLinkAreaEntityOffsets {
	DWORD m_flWidth;
	DWORD m_vLocatorOffset;
	DWORD m_qLocatorAnglesOffset;
	DWORD m_strMovementForward;
	DWORD m_strMovementReverse;
	DWORD m_bEnabled;
	DWORD m_bAllowCrossMovableConnections;
	DWORD m_strFilterName;
	DWORD m_hFilter;
	DWORD m_OnNavLinkStart;
	DWORD m_OnNavLinkFinish;
	DWORD m_bIsTerminus;
	DWORD m_nSplits;
} CNavLinkAreaEntity;

inline struct CAttributeContainerOffsets {
	DWORD m_Item;
} CAttributeContainer;

inline struct CCSPlaceOffsets {
	DWORD m_name;
} CCSPlace;

inline struct CFilterContextOffsets {
	DWORD m_iFilterContext;
} CFilterContext;

inline struct CEnvDecalOffsets {
	DWORD m_hDecalMaterial;
	DWORD m_flWidth;
	DWORD m_flHeight;
	DWORD m_flDepth;
	DWORD m_nRenderOrder;
	DWORD m_bProjectOnWorld;
	DWORD m_bProjectOnCharacters;
	DWORD m_bProjectOnWater;
	DWORD m_flDepthSortBias;
} CEnvDecal;

inline struct CEnvVolumetricFogVolumeOffsets {
	DWORD m_bActive;
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
	DWORD m_bStartDisabled;
	DWORD m_bIndirectUseLPVs;
	DWORD m_flStrength;
	DWORD m_nFalloffShape;
	DWORD m_flFalloffExponent;
	DWORD m_flHeightFogDepth;
	DWORD m_fHeightFogEdgeWidth;
	DWORD m_fIndirectLightStrength;
	DWORD m_fSunLightStrength;
	DWORD m_fNoiseStrength;
	DWORD m_TintColor;
	DWORD m_bOverrideTintColor;
	DWORD m_bOverrideIndirectLightStrength;
	DWORD m_bOverrideSunLightStrength;
	DWORD m_bOverrideNoiseStrength;
} CEnvVolumetricFogVolume;

inline struct CItemGenericOffsets {
	DWORD m_bHasTriggerRadius;
	DWORD m_bHasPickupRadius;
	DWORD m_flPickupRadiusSqr;
	DWORD m_flTriggerRadiusSqr;
	DWORD m_flLastPickupCheck;
	DWORD m_bPlayerCounterListenerAdded;
	DWORD m_bPlayerInTriggerRadius;
	DWORD m_hSpawnParticleEffect;
	DWORD m_pAmbientSoundEffect;
	DWORD m_bAutoStartAmbientSound;
	DWORD m_pSpawnScriptFunction;
	DWORD m_hPickupParticleEffect;
	DWORD m_pPickupSoundEffect;
	DWORD m_pPickupScriptFunction;
	DWORD m_hTimeoutParticleEffect;
	DWORD m_pTimeoutSoundEffect;
	DWORD m_pTimeoutScriptFunction;
	DWORD m_pPickupFilterName;
	DWORD m_hPickupFilter;
	DWORD m_OnPickup;
	DWORD m_OnTimeout;
	DWORD m_OnTriggerStartTouch;
	DWORD m_OnTriggerTouch;
	DWORD m_OnTriggerEndTouch;
	DWORD m_pAllowPickupScriptFunction;
	DWORD m_flPickupRadius;
	DWORD m_flTriggerRadius;
	DWORD m_pTriggerSoundEffect;
	DWORD m_bGlowWhenInTrigger;
	DWORD m_glowColor;
	DWORD m_bUseable;
	DWORD m_hTriggerHelper;
} CItemGeneric;

inline struct CPointValueRemapperOffsets {
	DWORD m_bDisabled;
	DWORD m_bUpdateOnClient;
	DWORD m_nInputType;
	DWORD m_iszRemapLineStartName;
	DWORD m_iszRemapLineEndName;
	DWORD m_hRemapLineStart;
	DWORD m_hRemapLineEnd;
	DWORD m_flMaximumChangePerSecond;
	DWORD m_flDisengageDistance;
	DWORD m_flEngageDistance;
	DWORD m_bRequiresUseKey;
	DWORD m_nOutputType;
	DWORD m_iszOutputEntityName;
	DWORD m_iszOutputEntity2Name;
	DWORD m_iszOutputEntity3Name;
	DWORD m_iszOutputEntity4Name;
	DWORD m_hOutputEntities;
	DWORD m_nHapticsType;
	DWORD m_nMomentumType;
	DWORD m_flMomentumModifier;
	DWORD m_flSnapValue;
	DWORD m_flCurrentMomentum;
	DWORD m_nRatchetType;
	DWORD m_flRatchetOffset;
	DWORD m_flInputOffset;
	DWORD m_bEngaged;
	DWORD m_bFirstUpdate;
	DWORD m_flPreviousValue;
	DWORD m_flPreviousUpdateTickTime;
	DWORD m_vecPreviousTestPoint;
	DWORD m_hUsingPlayer;
	DWORD m_flCustomOutputValue;
	DWORD m_iszSoundEngage;
	DWORD m_iszSoundDisengage;
	DWORD m_iszSoundReachedValueZero;
	DWORD m_iszSoundReachedValueOne;
	DWORD m_iszSoundMovingLoop;
	DWORD m_Position;
	DWORD m_PositionDelta;
	DWORD m_OnReachedValueZero;
	DWORD m_OnReachedValueOne;
	DWORD m_OnReachedValueCustom;
	DWORD m_OnEngage;
	DWORD m_OnDisengage;
} CPointValueRemapper;

inline struct CBtNodeConditionInactiveOffsets {
	DWORD m_flRoundStartThresholdSeconds;
	DWORD m_flSensorInactivityThresholdSeconds;
	DWORD m_SensorInactivityTimer;
} CBtNodeConditionInactive;

inline struct CRagdollPropOffsets {
	DWORD m_ragdoll;
	DWORD m_bStartDisabled;
	DWORD m_ragEnabled;
	DWORD m_ragPos;
	DWORD m_ragAngles;
	DWORD m_lastUpdateTickCount;
	DWORD m_allAsleep;
	DWORD m_bFirstCollisionAfterLaunch;
	DWORD m_hDamageEntity;
	DWORD m_hKiller;
	DWORD m_hPhysicsAttacker;
	DWORD m_flLastPhysicsInfluenceTime;
	DWORD m_flFadeOutStartTime;
	DWORD m_flFadeTime;
	DWORD m_vecLastOrigin;
	DWORD m_flAwakeTime;
	DWORD m_flLastOriginChangeTime;
	DWORD m_strOriginClassName;
	DWORD m_strSourceClassName;
	DWORD m_bHasBeenPhysgunned;
	DWORD m_bAllowStretch;
	DWORD m_flBlendWeight;
	DWORD m_flDefaultFadeScale;
	DWORD m_ragdollMins;
	DWORD m_ragdollMaxs;
	DWORD m_bShouldDeleteActivationRecord;
} CRagdollProp;

inline struct CFuncTrainOffsets {
	DWORD m_hCurrentTarget;
	DWORD m_activated;
	DWORD m_hEnemy;
	DWORD m_flBlockDamage;
	DWORD m_flNextBlockTime;
	DWORD m_iszLastTarget;
} CFuncTrain;

inline struct CAI_ChangeHintGroupOffsets {
	DWORD m_iSearchType;
	DWORD m_strSearchName;
	DWORD m_strNewHintGroup;
	DWORD m_flRadius;
} CAI_ChangeHintGroup;

inline struct CPhysHingeOffsets {
	DWORD m_soundInfo;
	DWORD m_NotifyMinLimitReached;
	DWORD m_NotifyMaxLimitReached;
	DWORD m_bAtMinLimit;
	DWORD m_bAtMaxLimit;
	DWORD m_hinge;
	DWORD m_hingeFriction;
	DWORD m_systemLoadScale;
	DWORD m_bIsAxisLocal;
	DWORD m_flMinRotation;
	DWORD m_flMaxRotation;
	DWORD m_flInitialRotation;
	DWORD m_flMotorFrequency;
	DWORD m_flMotorDampingRatio;
	DWORD m_flAngleSpeed;
	DWORD m_flAngleSpeedThreshold;
	DWORD m_OnStartMoving;
	DWORD m_OnStopMoving;
} CPhysHinge;

inline struct CBuyZoneOffsets {
	DWORD m_LegacyTeamNum;
} CBuyZone;

inline struct CPointGiveAmmoOffsets {
	DWORD m_pActivator;
} CPointGiveAmmo;

inline struct CPointCameraOffsets {
	DWORD m_FOV;
	DWORD m_Resolution;
	DWORD m_bFogEnable;
	DWORD m_FogColor;
	DWORD m_flFogStart;
	DWORD m_flFogEnd;
	DWORD m_flFogMaxDensity;
	DWORD m_bActive;
	DWORD m_bUseScreenAspectRatio;
	DWORD m_flAspectRatio;
	DWORD m_bNoSky;
	DWORD m_fBrightness;
	DWORD m_flZFar;
	DWORD m_flZNear;
	DWORD m_bCanHLTVUse;
	DWORD m_bAlignWithParent;
	DWORD m_bDofEnabled;
	DWORD m_flDofNearBlurry;
	DWORD m_flDofNearCrisp;
	DWORD m_flDofFarCrisp;
	DWORD m_flDofFarBlurry;
	DWORD m_flDofTiltToGround;
	DWORD m_TargetFOV;
	DWORD m_DegreesPerSecond;
	DWORD m_bIsOn;
	DWORD m_pNext;
} CPointCamera;

inline struct CEntityDissolveOffsets {
	DWORD m_flFadeInStart;
	DWORD m_flFadeInLength;
	DWORD m_flFadeOutModelStart;
	DWORD m_flFadeOutModelLength;
	DWORD m_flFadeOutStart;
	DWORD m_flFadeOutLength;
	DWORD m_flStartTime;
	DWORD m_nDissolveType;
	DWORD m_vDissolverOrigin;
	DWORD m_nMagnitude;
} CEntityDissolve;

inline struct CCSGameRulesOffsets {
	DWORD m_bFreezePeriod;
	DWORD m_bWarmupPeriod;
	DWORD m_fWarmupPeriodEnd;
	DWORD m_fWarmupPeriodStart;
	DWORD m_bTerroristTimeOutActive;
	DWORD m_bCTTimeOutActive;
	DWORD m_flTerroristTimeOutRemaining;
	DWORD m_flCTTimeOutRemaining;
	DWORD m_nTerroristTimeOuts;
	DWORD m_nCTTimeOuts;
	DWORD m_bTechnicalTimeOut;
	DWORD m_bMatchWaitingForResume;
	DWORD m_iFreezeTime;
	DWORD m_iRoundTime;
	DWORD m_fMatchStartTime;
	DWORD m_fRoundStartTime;
	DWORD m_flRestartRoundTime;
	DWORD m_bGameRestart;
	DWORD m_flGameStartTime;
	DWORD m_timeUntilNextPhaseStarts;
	DWORD m_gamePhase;
	DWORD m_totalRoundsPlayed;
	DWORD m_nRoundsPlayedThisPhase;
	DWORD m_nOvertimePlaying;
	DWORD m_iHostagesRemaining;
	DWORD m_bAnyHostageReached;
	DWORD m_bMapHasBombTarget;
	DWORD m_bMapHasRescueZone;
	DWORD m_bMapHasBuyZone;
	DWORD m_bIsQueuedMatchmaking;
	DWORD m_nQueuedMatchmakingMode;
	DWORD m_bIsValveDS;
	DWORD m_bLogoMap;
	DWORD m_bPlayAllStepSoundsOnServer;
	DWORD m_iSpectatorSlotCount;
	DWORD m_MatchDevice;
	DWORD m_bHasMatchStarted;
	DWORD m_nNextMapInMapgroup;
	DWORD m_szTournamentEventName;
	DWORD m_szTournamentEventStage;
	DWORD m_szMatchStatTxt;
	DWORD m_szTournamentPredictionsTxt;
	DWORD m_nTournamentPredictionsPct;
	DWORD m_flCMMItemDropRevealStartTime;
	DWORD m_flCMMItemDropRevealEndTime;
	DWORD m_bIsDroppingItems;
	DWORD m_bIsQuestEligible;
	DWORD m_bIsHltvActive;
	DWORD m_arrProhibitedItemIndices;
	DWORD m_arrTournamentActiveCasterAccounts;
	DWORD m_numBestOfMaps;
	DWORD m_nHalloweenMaskListSeed;
	DWORD m_bBombDropped;
	DWORD m_bBombPlanted;
	DWORD m_iRoundWinStatus;
	DWORD m_eRoundWinReason;
	DWORD m_bTCantBuy;
	DWORD m_bCTCantBuy;
	DWORD m_iMatchStats_RoundResults;
	DWORD m_iMatchStats_PlayersAlive_CT;
	DWORD m_iMatchStats_PlayersAlive_T;
	DWORD m_TeamRespawnWaveTimes;
	DWORD m_flNextRespawnWave;
	DWORD m_vMinimapMins;
	DWORD m_vMinimapMaxs;
	DWORD m_MinimapVerticalSectionHeights;
	DWORD m_ullLocalMatchID;
	DWORD m_nEndMatchMapGroupVoteTypes;
	DWORD m_nEndMatchMapGroupVoteOptions;
	DWORD m_nEndMatchMapVoteWinner;
	DWORD m_iNumConsecutiveCTLoses;
	DWORD m_iNumConsecutiveTerroristLoses;
	DWORD m_bHasHostageBeenTouched;
	DWORD m_flIntermissionStartTime;
	DWORD m_flIntermissionEndTime;
	DWORD m_bLevelInitialized;
	DWORD m_iTotalRoundsPlayed;
	DWORD m_iUnBalancedRounds;
	DWORD m_endMatchOnRoundReset;
	DWORD m_endMatchOnThink;
	DWORD m_iNumTerrorist;
	DWORD m_iNumCT;
	DWORD m_iNumSpawnableTerrorist;
	DWORD m_iNumSpawnableCT;
	DWORD m_arrSelectedHostageSpawnIndices;
	DWORD m_nSpawnPointsRandomSeed;
	DWORD m_bFirstConnected;
	DWORD m_bCompleteReset;
	DWORD m_bPickNewTeamsOnReset;
	DWORD m_bScrambleTeamsOnRestart;
	DWORD m_bSwapTeamsOnRestart;
	DWORD m_nEndMatchTiedVotes;
	DWORD m_bNeedToAskPlayersForContinueVote;
	DWORD m_numQueuedMatchmakingAccounts;
	DWORD m_fAvgPlayerRank;
	DWORD m_pQueuedMatchmakingReservationString;
	DWORD m_numTotalTournamentDrops;
	DWORD m_numSpectatorsCountMax;
	DWORD m_numSpectatorsCountMaxTV;
	DWORD m_numSpectatorsCountMaxLnk;
	DWORD m_nCTsAliveAtFreezetimeEnd;
	DWORD m_nTerroristsAliveAtFreezetimeEnd;
	DWORD m_bForceTeamChangeSilent;
	DWORD m_bLoadingRoundBackupData;
	DWORD m_nMatchInfoShowType;
	DWORD m_flMatchInfoDecidedTime;
	DWORD mTeamDMLastWinningTeamNumber;
	DWORD mTeamDMLastThinkTime;
	DWORD m_flTeamDMLastAnnouncementTime;
	DWORD m_iAccountTerrorist;
	DWORD m_iAccountCT;
	DWORD m_iSpawnPointCount_Terrorist;
	DWORD m_iSpawnPointCount_CT;
	DWORD m_iMaxNumTerrorists;
	DWORD m_iMaxNumCTs;
	DWORD m_iLoserBonusMostRecentTeam;
	DWORD m_tmNextPeriodicThink;
	DWORD m_bVoiceWonMatchBragFired;
	DWORD m_fWarmupNextChatNoticeTime;
	DWORD m_iHostagesRescued;
	DWORD m_iHostagesTouched;
	DWORD m_flNextHostageAnnouncement;
	DWORD m_bNoTerroristsKilled;
	DWORD m_bNoCTsKilled;
	DWORD m_bNoEnemiesKilled;
	DWORD m_bCanDonateWeapons;
	DWORD m_firstKillTime;
	DWORD m_firstBloodTime;
	DWORD m_hostageWasInjured;
	DWORD m_hostageWasKilled;
	DWORD m_bVoteCalled;
	DWORD m_bServerVoteOnReset;
	DWORD m_flVoteCheckThrottle;
	DWORD m_bBuyTimeEnded;
	DWORD m_nLastFreezeEndBeep;
	DWORD m_bTargetBombed;
	DWORD m_bBombDefused;
	DWORD m_bMapHasBombZone;
	DWORD m_vecMainCTSpawnPos;
	DWORD m_CTSpawnPointsMasterList;
	DWORD m_TerroristSpawnPointsMasterList;
	DWORD m_bRespawningAllRespawnablePlayers;
	DWORD m_iNextCTSpawnPoint;
	DWORD m_flCTSpawnPointUsedTime;
	DWORD m_iNextTerroristSpawnPoint;
	DWORD m_flTerroristSpawnPointUsedTime;
	DWORD m_CTSpawnPoints;
	DWORD m_TerroristSpawnPoints;
	DWORD m_bIsUnreservedGameServer;
	DWORD m_fAutobalanceDisplayTime;
	DWORD m_bAllowWeaponSwitch;
	DWORD m_bRoundTimeWarningTriggered;
	DWORD m_phaseChangeAnnouncementTime;
	DWORD m_fNextUpdateTeamClanNamesTime;
	DWORD m_flLastThinkTime;
	DWORD m_fAccumulatedRoundOffDamage;
	DWORD m_nShorthandedBonusLastEvalRound;
	DWORD m_nMatchAbortedEarlyReason;
	DWORD m_bHasTriggeredRoundStartMusic;
	DWORD m_bSwitchingTeamsAtRoundReset;
	DWORD m_pGameModeRules;
	DWORD m_BtGlobalBlackboard;
	DWORD m_hPlayerResource;
	DWORD m_RetakeRules;
	DWORD m_arrTeamUniqueKillWeaponsMatch;
	DWORD m_bTeamLastKillUsedUniqueWeaponMatch;
	DWORD m_nMatchEndCount;
	DWORD m_nTTeamIntroVariant;
	DWORD m_nCTTeamIntroVariant;
	DWORD m_bTeamIntroPeriod;
	DWORD m_fTeamIntroPeriodEnd;
	DWORD m_bPlayedTeamIntroVO;
	DWORD m_iRoundEndWinnerTeam;
	DWORD m_eRoundEndReason;
	DWORD m_bRoundEndShowTimerDefend;
	DWORD m_iRoundEndTimerTime;
	DWORD m_sRoundEndFunFactToken;
	DWORD m_iRoundEndFunFactPlayerSlot;
	DWORD m_iRoundEndFunFactData1;
	DWORD m_iRoundEndFunFactData2;
	DWORD m_iRoundEndFunFactData3;
	DWORD m_sRoundEndMessage;
	DWORD m_iRoundEndPlayerCount;
	DWORD m_bRoundEndNoMusic;
	DWORD m_iRoundEndLegacy;
	DWORD m_nRoundEndCount;
	DWORD m_iRoundStartRoundNumber;
	DWORD m_nRoundStartCount;
	DWORD m_flLastPerfSampleTime;
} CCSGameRules;

inline struct CBaseCSGrenadeProjectileOffsets {
	DWORD m_vInitialPosition;
	DWORD m_vInitialVelocity;
	DWORD m_nBounces;
	DWORD m_nExplodeEffectIndex;
	DWORD m_nExplodeEffectTickBegin;
	DWORD m_vecExplodeEffectOrigin;
	DWORD m_flSpawnTime;
	DWORD m_unOGSExtraFlags;
	DWORD m_bDetonationRecorded;
	DWORD m_nItemIndex;
	DWORD m_vecOriginalSpawnLocation;
	DWORD m_flLastBounceSoundTime;
	DWORD m_vecGrenadeSpin;
	DWORD m_vecLastHitSurfaceNormal;
	DWORD m_nTicksAtZeroVelocity;
	DWORD m_bHasEverHitEnemy;
} CBaseCSGrenadeProjectile;

inline struct CPhysConstraintOffsets {
	DWORD m_nameAttach1;
	DWORD m_nameAttach2;
	DWORD m_hAttach1;
	DWORD m_hAttach2;
	DWORD m_nameAttachment1;
	DWORD m_nameAttachment2;
	DWORD m_breakSound;
	DWORD m_forceLimit;
	DWORD m_torqueLimit;
	DWORD m_minTeleportDistance;
	DWORD m_bSnapObjectPositions;
	DWORD m_bTreatEntity1AsInfiniteMass;
	DWORD m_OnBreak;
} CPhysConstraint;

inline struct CLogicAchievementOffsets {
	DWORD m_bDisabled;
	DWORD m_iszAchievementEventID;
	DWORD m_OnFired;
} CLogicAchievement;

inline struct CCSWeaponBaseOffsets {
	DWORD m_bRemoveable;
	DWORD m_bPlayerAmmoStockOnPickup;
	DWORD m_bRequireUseToTouch;
	DWORD m_iWeaponGameplayAnimState;
	DWORD m_flWeaponGameplayAnimStateTimestamp;
	DWORD m_flInspectCancelCompleteTime;
	DWORD m_bInspectPending;
	DWORD m_bInspectShouldLoop;
	DWORD m_nLastEmptySoundCmdNum;
	DWORD m_bFireOnEmpty;
	DWORD m_OnPlayerPickup;
	DWORD m_weaponMode;
	DWORD m_flTurningInaccuracyDelta;
	DWORD m_vecTurningInaccuracyEyeDirLast;
	DWORD m_flTurningInaccuracy;
	DWORD m_fAccuracyPenalty;
	DWORD m_flLastAccuracyUpdateTime;
	DWORD m_fAccuracySmoothedForZoom;
	DWORD m_iRecoilIndex;
	DWORD m_flRecoilIndex;
	DWORD m_bBurstMode;
	DWORD m_nPostponeFireReadyTicks;
	DWORD m_flPostponeFireReadyFrac;
	DWORD m_bInReload;
	DWORD m_flDroppedAtTime;
	DWORD m_bIsHauledBack;
	DWORD m_bSilencerOn;
	DWORD m_flTimeSilencerSwitchComplete;
	DWORD m_iOriginalTeamNumber;
	DWORD m_iMostRecentTeamNumber;
	DWORD m_bDroppedNearBuyZone;
	DWORD m_flNextAttackRenderTimeOffset;
	DWORD m_bCanBePickedUp;
	DWORD m_bUseCanOverrideNextOwnerTouchTime;
	DWORD m_nextOwnerTouchTime;
	DWORD m_nextPrevOwnerTouchTime;
	DWORD m_nextPrevOwnerUseTime;
	DWORD m_hPrevOwner;
	DWORD m_nDropTick;
	DWORD m_bWasActiveWeaponWhenDropped;
	DWORD m_donated;
	DWORD m_fLastShotTime;
	DWORD m_bWasOwnedByCT;
	DWORD m_bWasOwnedByTerrorist;
	DWORD m_numRemoveUnownedWeaponThink;
	DWORD m_IronSightController;
	DWORD m_iIronSightMode;
	DWORD m_flLastLOSTraceFailureTime;
	DWORD m_flWatTickOffset;
	DWORD m_flLastShakeTime;
} CCSWeaponBase;

inline struct CPointClientUIDialogOffsets {
	DWORD m_hActivator;
	DWORD m_bStartEnabled;
} CPointClientUIDialog;

inline struct CLogicLineToEntityOffsets {
	DWORD m_Line;
	DWORD m_SourceName;
	DWORD m_StartEntity;
	DWORD m_EndEntity;
} CLogicLineToEntity;

inline struct CSoundAreaEntitySphereOffsets {
	DWORD m_flRadius;
} CSoundAreaEntitySphere;

inline struct CInfoSpawnGroupLoadUnloadOffsets {
	DWORD m_OnSpawnGroupLoadStarted;
	DWORD m_OnSpawnGroupLoadFinished;
	DWORD m_OnSpawnGroupUnloadStarted;
	DWORD m_OnSpawnGroupUnloadFinished;
	DWORD m_iszSpawnGroupName;
	DWORD m_iszSpawnGroupFilterName;
	DWORD m_iszLandmarkName;
	DWORD m_sFixedSpawnGroupName;
	DWORD m_flTimeoutInterval;
	DWORD m_bAutoActivate;
	DWORD m_bUnloadingStarted;
	DWORD m_bQueueActiveSpawnGroupChange;
	DWORD m_bQueueFinishLoading;
} CInfoSpawnGroupLoadUnload;

inline struct CSoundAreaEntityOrientedBoxOffsets {
	DWORD m_vMin;
	DWORD m_vMax;
} CSoundAreaEntityOrientedBox;

inline struct CPulseCell_Outflow_ListenForAnimgraphTagOffsets {
	DWORD m_OnStart;
	DWORD m_OnEnd;
	DWORD m_OnCanceled;
	DWORD m_TagName;
} CPulseCell_Outflow_ListenForAnimgraphTag;

inline struct CEconItemViewOffsets {
	DWORD m_iItemDefinitionIndex;
	DWORD m_iEntityQuality;
	DWORD m_iEntityLevel;
	DWORD m_iItemID;
	DWORD m_iItemIDHigh;
	DWORD m_iItemIDLow;
	DWORD m_iAccountID;
	DWORD m_iInventoryPosition;
	DWORD m_bInitialized;
	DWORD m_AttributeList;
	DWORD m_NetworkedDynamicAttributes;
	DWORD m_szCustomName;
	DWORD m_szCustomNameOverride;
} CEconItemView;

inline struct CBaseDMStartOffsets {
	DWORD m_Master;
} CBaseDMStart;

inline struct CBaseModelEntityOffsets {
	DWORD m_CRenderComponent;
	DWORD m_CHitboxComponent;
	DWORD m_nDestructiblePartInitialStateDestructed0;
	DWORD m_nDestructiblePartInitialStateDestructed1;
	DWORD m_nDestructiblePartInitialStateDestructed2;
	DWORD m_nDestructiblePartInitialStateDestructed3;
	DWORD m_nDestructiblePartInitialStateDestructed4;
	DWORD m_nDestructiblePartInitialStateDestructed0_PartIndex;
	DWORD m_nDestructiblePartInitialStateDestructed1_PartIndex;
	DWORD m_nDestructiblePartInitialStateDestructed2_PartIndex;
	DWORD m_nDestructiblePartInitialStateDestructed3_PartIndex;
	DWORD m_nDestructiblePartInitialStateDestructed4_PartIndex;
	DWORD m_pDestructiblePartsSystemComponent;
	DWORD m_LastHitGroup;
	DWORD m_sLastDamageSourceName;
	DWORD m_vLastDamagePosition;
	DWORD m_flDissolveStartTime;
	DWORD m_OnIgnite;
	DWORD m_nRenderMode;
	DWORD m_nRenderFX;
	DWORD m_bAllowFadeInView;
	DWORD m_clrRender;
	DWORD m_vecRenderAttributes;
	DWORD m_bRenderToCubemaps;
	DWORD m_bNoInterpolate;
	DWORD m_Collision;
	DWORD m_Glow;
	DWORD m_flGlowBackfaceMult;
	DWORD m_fadeMinDist;
	DWORD m_fadeMaxDist;
	DWORD m_flFadeScale;
	DWORD m_flShadowStrength;
	DWORD m_nObjectCulling;
	DWORD m_nAddDecal;
	DWORD m_vDecalPosition;
	DWORD m_vDecalForwardAxis;
	DWORD m_nDecalMode;
	DWORD m_nRequiredDecalMode;
	DWORD m_ConfigEntitiesToPropagateMaterialDecalsTo;
	DWORD m_vecViewOffset;
	DWORD m_bvDisabledHitGroups;
} CBaseModelEntity;

inline struct fogplayerparams_tOffsets {
	DWORD m_hCtrl;
	DWORD m_flTransitionTime;
	DWORD m_OldColor;
	DWORD m_flOldStart;
	DWORD m_flOldEnd;
	DWORD m_flOldMaxDensity;
	DWORD m_flOldHDRColorScale;
	DWORD m_flOldFarZ;
	DWORD m_NewColor;
	DWORD m_flNewStart;
	DWORD m_flNewEnd;
	DWORD m_flNewMaxDensity;
	DWORD m_flNewHDRColorScale;
	DWORD m_flNewFarZ;
} fogplayerparams_t;

inline struct CInstancedSceneEntityOffsets {
	DWORD m_hOwner;
	DWORD m_bHadOwner;
	DWORD m_flPostSpeakDelay;
	DWORD m_flPreDelay;
	DWORD m_bIsBackground;
	DWORD m_bRemoveOnCompletion;
	DWORD m_hTarget;
} CInstancedSceneEntity;

inline struct CSoundEventParameterOffsets {
	DWORD m_iszParamName;
	DWORD m_flFloatValue;
} CSoundEventParameter;

inline struct CEnvViewPunchOffsets {
	DWORD m_flRadius;
	DWORD m_angViewPunch;
} CEnvViewPunch;

inline struct CFuncShatterglassOffsets {
	DWORD m_matPanelTransform;
	DWORD m_matPanelTransformWsTemp;
	DWORD m_vecShatterGlassShards;
	DWORD m_PanelSize;
	DWORD m_flLastShatterSoundEmitTime;
	DWORD m_flLastCleanupTime;
	DWORD m_flInitAtTime;
	DWORD m_flGlassThickness;
	DWORD m_flSpawnInvulnerability;
	DWORD m_bBreakSilent;
	DWORD m_bBreakShardless;
	DWORD m_bBroken;
	DWORD m_bGlassNavIgnore;
	DWORD m_bGlassInFrame;
	DWORD m_bStartBroken;
	DWORD m_iInitialDamageType;
	DWORD m_szDamagePositioningEntityName01;
	DWORD m_szDamagePositioningEntityName02;
	DWORD m_szDamagePositioningEntityName03;
	DWORD m_szDamagePositioningEntityName04;
	DWORD m_vInitialDamagePositions;
	DWORD m_vExtraDamagePositions;
	DWORD m_vInitialPanelVertices;
	DWORD m_OnBroken;
	DWORD m_iSurfaceType;
	DWORD m_hMaterialDamageBase;
} CFuncShatterglass;

inline struct CPlantedC4Offsets {
	DWORD m_bBombTicking;
	DWORD m_flC4Blow;
	DWORD m_nBombSite;
	DWORD m_nSourceSoundscapeHash;
	DWORD m_bAbortDetonationBecauseWorldIsFrozen;
	DWORD m_AttributeManager;
	DWORD m_OnBombDefused;
	DWORD m_OnBombBeginDefuse;
	DWORD m_OnBombDefuseAborted;
	DWORD m_bCannotBeDefused;
	DWORD m_entitySpottedState;
	DWORD m_nSpotRules;
	DWORD m_bTrainingPlacedByPlayer;
	DWORD m_bHasExploded;
	DWORD m_flTimerLength;
	DWORD m_bBeingDefused;
	DWORD m_fLastDefuseTime;
	DWORD m_flDefuseLength;
	DWORD m_flDefuseCountDown;
	DWORD m_bBombDefused;
	DWORD m_hBombDefuser;
	DWORD m_iProgressBarTime;
	DWORD m_bVoiceAlertFired;
	DWORD m_bVoiceAlertPlayed;
	DWORD m_flNextBotBeepTime;
	DWORD m_angCatchUpToPlayerEye;
	DWORD m_flLastSpinDetectionTime;
} CPlantedC4;

inline struct CVoteControllerOffsets {
	DWORD m_iActiveIssueIndex;
	DWORD m_iOnlyTeamToVote;
	DWORD m_nVoteOptionCount;
	DWORD m_nPotentialVotes;
	DWORD m_bIsYesNoVote;
	DWORD m_acceptingVotesTimer;
	DWORD m_executeCommandTimer;
	DWORD m_resetVoteTimer;
	DWORD m_nVotesCast;
	DWORD m_playerHoldingVote;
	DWORD m_playerOverrideForVote;
	DWORD m_nHighestCountIndex;
	DWORD m_potentialIssues;
	DWORD m_VoteOptions;
} CVoteController;

inline struct CPhysImpactOffsets {
	DWORD m_damage;
	DWORD m_distance;
	DWORD m_directionEntityName;
} CPhysImpact;

inline struct CBaseEntityOffsets {
	DWORD m_CBodyComponent;
	DWORD m_NetworkTransmitComponent;
	DWORD m_aThinkFunctions;
	DWORD m_iCurrentThinkContext;
	DWORD m_nLastThinkTick;
	DWORD m_bDisabledContextThinks;
	DWORD m_isSteadyState;
	DWORD m_lastNetworkChange;
	DWORD m_ResponseContexts;
	DWORD m_iszResponseContext;
	DWORD m_iHealth;
	DWORD m_iMaxHealth;
	DWORD m_lifeState;
	DWORD m_flDamageAccumulator;
	DWORD m_bTakesDamage;
	DWORD m_nTakeDamageFlags;
	DWORD m_nPlatformType;
	DWORD m_MoveCollide;
	DWORD m_MoveType;
	DWORD m_nActualMoveType;
	DWORD m_nWaterTouch;
	DWORD m_nSlimeTouch;
	DWORD m_bRestoreInHierarchy;
	DWORD m_target;
	DWORD m_hDamageFilter;
	DWORD m_iszDamageFilterName;
	DWORD m_flMoveDoneTime;
	DWORD m_nSubclassID;
	DWORD m_flAnimTime;
	DWORD m_flSimulationTime;
	DWORD m_flCreateTime;
	DWORD m_bClientSideRagdoll;
	DWORD m_ubInterpolationFrame;
	DWORD m_vPrevVPhysicsUpdatePos;
	DWORD m_iTeamNum;
	DWORD m_iGlobalname;
	DWORD m_iSentToClients;
	DWORD m_flSpeed;
	DWORD m_sUniqueHammerID;
	DWORD m_spawnflags;
	DWORD m_nNextThinkTick;
	DWORD m_nSimulationTick;
	DWORD m_OnKilled;
	DWORD m_fFlags;
	DWORD m_vecAbsVelocity;
	DWORD m_vecVelocity;
	DWORD m_vecBaseVelocity;
	DWORD m_nPushEnumCount;
	DWORD m_pCollision;
	DWORD m_hEffectEntity;
	DWORD m_hOwnerEntity;
	DWORD m_fEffects;
	DWORD m_hGroundEntity;
	DWORD m_nGroundBodyIndex;
	DWORD m_flFriction;
	DWORD m_flElasticity;
	DWORD m_flGravityScale;
	DWORD m_flTimeScale;
	DWORD m_flWaterLevel;
	DWORD m_bGravityDisabled;
	DWORD m_bAnimatedEveryTick;
	DWORD m_flActualGravityScale;
	DWORD m_bGravityActuallyDisabled;
	DWORD m_bDisableLowViolence;
	DWORD m_nWaterType;
	DWORD m_iEFlags;
	DWORD m_OnUser1;
	DWORD m_OnUser2;
	DWORD m_OnUser3;
	DWORD m_OnUser4;
	DWORD m_iInitialTeamNum;
	DWORD m_flNavIgnoreUntilTime;
	DWORD m_vecAngVelocity;
	DWORD m_bNetworkQuantizeOriginAndAngles;
	DWORD m_bLagCompensate;
	DWORD m_pBlocker;
	DWORD m_flLocalTime;
	DWORD m_flVPhysicsUpdateLocalTime;
	DWORD m_nBloodType;
	DWORD m_pPulseGraphInstance;
} CBaseEntity;

inline struct CMarkupVolumeWithRefOffsets {
	DWORD m_bUseRef;
	DWORD m_vRefPosEntitySpace;
	DWORD m_vRefPosWorldSpace;
	DWORD m_flRefDot;
} CMarkupVolumeWithRef;

inline struct CFuncPlatRotOffsets {
	DWORD m_end;
	DWORD m_start;
} CFuncPlatRot;

inline struct CRagdollMagnetOffsets {
	DWORD m_bDisabled;
	DWORD m_radius;
	DWORD m_force;
	DWORD m_axis;
} CRagdollMagnet;

inline struct CSpotlightEndOffsets {
	DWORD m_flLightScale;
	DWORD m_Radius;
	DWORD m_vSpotlightDir;
	DWORD m_vSpotlightOrg;
} CSpotlightEnd;

inline struct CEnvSkyOffsets {
	DWORD m_hSkyMaterial;
	DWORD m_hSkyMaterialLightingOnly;
	DWORD m_bStartDisabled;
	DWORD m_vTintColor;
	DWORD m_vTintColorLightingOnly;
	DWORD m_flBrightnessScale;
	DWORD m_nFogType;
	DWORD m_flFogMinStart;
	DWORD m_flFogMinEnd;
	DWORD m_flFogMaxStart;
	DWORD m_flFogMaxEnd;
	DWORD m_bEnabled;
} CEnvSky;

inline struct CPointAngleSensorOffsets {
	DWORD m_bDisabled;
	DWORD m_nLookAtName;
	DWORD m_hTargetEntity;
	DWORD m_hLookAtEntity;
	DWORD m_flDuration;
	DWORD m_flDotTolerance;
	DWORD m_flFacingTime;
	DWORD m_bFired;
	DWORD m_OnFacingLookat;
	DWORD m_OnNotFacingLookat;
	DWORD m_TargetDir;
	DWORD m_FacingPercentage;
} CPointAngleSensor;

inline struct CEnvWindControllerOffsets {
	DWORD m_EnvWindShared;
	DWORD m_fDirectionVariation;
	DWORD m_fSpeedVariation;
	DWORD m_fTurbulence;
	DWORD m_fVolumeHalfExtentXY;
	DWORD m_fVolumeHalfExtentZ;
	DWORD m_nVolumeResolutionXY;
	DWORD m_nVolumeResolutionZ;
	DWORD m_nClipmapLevels;
	DWORD m_bIsMaster;
	DWORD m_bFirstTime;
} CEnvWindController;

inline struct CGenericConstraintOffsets {
	DWORD m_nLinearMotionX;
	DWORD m_nLinearMotionY;
	DWORD m_nLinearMotionZ;
	DWORD m_flLinearFrequencyX;
	DWORD m_flLinearFrequencyY;
	DWORD m_flLinearFrequencyZ;
	DWORD m_flLinearDampingRatioX;
	DWORD m_flLinearDampingRatioY;
	DWORD m_flLinearDampingRatioZ;
	DWORD m_flMaxLinearImpulseX;
	DWORD m_flMaxLinearImpulseY;
	DWORD m_flMaxLinearImpulseZ;
	DWORD m_flBreakAfterTimeX;
	DWORD m_flBreakAfterTimeY;
	DWORD m_flBreakAfterTimeZ;
	DWORD m_flBreakAfterTimeStartTimeX;
	DWORD m_flBreakAfterTimeStartTimeY;
	DWORD m_flBreakAfterTimeStartTimeZ;
	DWORD m_flBreakAfterTimeThresholdX;
	DWORD m_flBreakAfterTimeThresholdY;
	DWORD m_flBreakAfterTimeThresholdZ;
	DWORD m_flNotifyForceX;
	DWORD m_flNotifyForceY;
	DWORD m_flNotifyForceZ;
	DWORD m_flNotifyForceMinTimeX;
	DWORD m_flNotifyForceMinTimeY;
	DWORD m_flNotifyForceMinTimeZ;
	DWORD m_flNotifyForceLastTimeX;
	DWORD m_flNotifyForceLastTimeY;
	DWORD m_flNotifyForceLastTimeZ;
	DWORD m_bAxisNotifiedX;
	DWORD m_bAxisNotifiedY;
	DWORD m_bAxisNotifiedZ;
	DWORD m_nAngularMotionX;
	DWORD m_nAngularMotionY;
	DWORD m_nAngularMotionZ;
	DWORD m_flAngularFrequencyX;
	DWORD m_flAngularFrequencyY;
	DWORD m_flAngularFrequencyZ;
	DWORD m_flAngularDampingRatioX;
	DWORD m_flAngularDampingRatioY;
	DWORD m_flAngularDampingRatioZ;
	DWORD m_flMaxAngularImpulseX;
	DWORD m_flMaxAngularImpulseY;
	DWORD m_flMaxAngularImpulseZ;
	DWORD m_NotifyForceReachedX;
	DWORD m_NotifyForceReachedY;
	DWORD m_NotifyForceReachedZ;
} CGenericConstraint;

inline struct CEnvLaserOffsets {
	DWORD m_iszLaserTarget;
	DWORD m_pSprite;
	DWORD m_iszSpriteName;
	DWORD m_firePosition;
	DWORD m_flStartFrame;
} CEnvLaser;

inline struct CSoundOpvarSetEntityOffsets {
	DWORD m_iszStackName;
	DWORD m_iszOperatorName;
	DWORD m_iszOpvarName;
	DWORD m_nOpvarType;
	DWORD m_nOpvarIndex;
	DWORD m_flOpvarValue;
	DWORD m_OpvarValueString;
	DWORD m_bSetOnSpawn;
} CSoundOpvarSetEntity;

inline struct CEnvBeverageOffsets {
	DWORD m_CanInDispenser;
	DWORD m_nBeverageType;
} CEnvBeverage;

inline struct CPhysMotorOffsets {
	DWORD m_nameAttach;
	DWORD m_nameAnchor;
	DWORD m_hAttachedObject;
	DWORD m_hAnchorObject;
	DWORD m_spinUp;
	DWORD m_spinDown;
	DWORD m_flMotorFriction;
	DWORD m_additionalAcceleration;
	DWORD m_angularAcceleration;
	DWORD m_flTorqueScale;
	DWORD m_flTargetSpeed;
	DWORD m_flSpeedWhenSpinUpOrSpinDownStarted;
	DWORD m_motor;
} CPhysMotor;

inline struct CLogicGameEventOffsets {
	DWORD m_iszEventName;
} CLogicGameEvent;

inline struct CPhysExplosionOffsets {
	DWORD m_bExplodeOnSpawn;
	DWORD m_flMagnitude;
	DWORD m_flDamage;
	DWORD m_radius;
	DWORD m_targetEntityName;
	DWORD m_flInnerRadius;
	DWORD m_flPushScale;
	DWORD m_bConvertToDebrisWhenPossible;
	DWORD m_bAffectInvulnerableEnts;
	DWORD m_OnPushedPlayer;
} CPhysExplosion;

inline struct CSplineConstraintOffsets {
	DWORD m_vAnchorOffsetRestore;
	DWORD m_hSplineEntity;
	DWORD m_bEnableLateralConstraint;
	DWORD m_bEnableVerticalConstraint;
	DWORD m_bEnableAngularConstraint;
	DWORD m_bEnableLimit;
	DWORD m_bFireEventsOnPath;
	DWORD m_flLinearFrequency;
	DWORD m_flLinarDampingRatio;
	DWORD m_flJointFriction;
	DWORD m_flTransitionTime;
	DWORD m_vPreSolveAnchorPos;
	DWORD m_StartTransitionTime;
	DWORD m_vTangentSpaceAnchorAtTransitionStart;
} CSplineConstraint;

inline struct CLogicCompareOffsets {
	DWORD m_flInValue;
	DWORD m_flCompareValue;
	DWORD m_OnLessThan;
	DWORD m_OnEqualTo;
	DWORD m_OnNotEqualTo;
	DWORD m_OnGreaterThan;
} CLogicCompare;

inline struct CFuncTankTrainOffsets {
	DWORD m_OnDeath;
} CFuncTankTrain;

inline struct CPointClientUIWorldPanelOffsets {
	DWORD m_bIgnoreInput;
	DWORD m_bLit;
	DWORD m_bFollowPlayerAcrossTeleport;
	DWORD m_flWidth;
	DWORD m_flHeight;
	DWORD m_flDPI;
	DWORD m_flInteractDistance;
	DWORD m_flDepthOffset;
	DWORD m_unOwnerContext;
	DWORD m_unHorizontalAlign;
	DWORD m_unVerticalAlign;
	DWORD m_unOrientation;
	DWORD m_bAllowInteractionFromAllSceneWorlds;
	DWORD m_vecCSSClasses;
	DWORD m_bOpaque;
	DWORD m_bNoDepth;
	DWORD m_bVisibleWhenParentNoDraw;
	DWORD m_bRenderBackface;
	DWORD m_bUseOffScreenIndicator;
	DWORD m_bExcludeFromSaveGames;
	DWORD m_bGrabbable;
	DWORD m_bOnlyRenderToTexture;
	DWORD m_bDisableMipGen;
	DWORD m_nExplicitImageLayout;
} CPointClientUIWorldPanel;

inline struct CSoundEventSphereEntityOffsets {
	DWORD m_flRadius;
} CSoundEventSphereEntity;

inline struct CMapVetoPickControllerOffsets {
	DWORD m_bPlayedIntroVcd;
	DWORD m_bNeedToPlayFiveSecondsRemaining;
	DWORD m_dblPreMatchDraftSequenceTime;
	DWORD m_bPreMatchDraftStateChanged;
	DWORD m_nDraftType;
	DWORD m_nTeamWinningCoinToss;
	DWORD m_nTeamWithFirstChoice;
	DWORD m_nVoteMapIdsList;
	DWORD m_nAccountIDs;
	DWORD m_nMapId0;
	DWORD m_nMapId1;
	DWORD m_nMapId2;
	DWORD m_nMapId3;
	DWORD m_nMapId4;
	DWORD m_nMapId5;
	DWORD m_nStartingSide0;
	DWORD m_nCurrentPhase;
	DWORD m_nPhaseStartTick;
	DWORD m_nPhaseDurationTicks;
	DWORD m_OnMapVetoed;
	DWORD m_OnMapPicked;
	DWORD m_OnSidesPicked;
	DWORD m_OnNewPhaseStarted;
	DWORD m_OnLevelTransition;
} CMapVetoPickController;

inline struct CPhysSlideConstraintOffsets {
	DWORD m_axisEnd;
	DWORD m_slideFriction;
	DWORD m_systemLoadScale;
	DWORD m_initialOffset;
	DWORD m_bEnableLinearConstraint;
	DWORD m_bEnableAngularConstraint;
	DWORD m_flMotorFrequency;
	DWORD m_flMotorDampingRatio;
	DWORD m_bUseEntityPivot;
	DWORD m_soundInfo;
} CPhysSlideConstraint;

inline struct CPointGamestatsCounterOffsets {
	DWORD m_strStatisticName;
	DWORD m_bDisabled;
} CPointGamestatsCounter;

inline struct CTextureBasedAnimatableOffsets {
	DWORD m_bLoop;
	DWORD m_flFPS;
	DWORD m_hPositionKeys;
	DWORD m_hRotationKeys;
	DWORD m_vAnimationBoundsMin;
	DWORD m_vAnimationBoundsMax;
	DWORD m_flStartTime;
	DWORD m_flStartFrame;
} CTextureBasedAnimatable;

inline struct CSpriteOffsets {
	DWORD m_hSpriteMaterial;
	DWORD m_hAttachedToEntity;
	DWORD m_nAttachment;
	DWORD m_flSpriteFramerate;
	DWORD m_flFrame;
	DWORD m_flDieTime;
	DWORD m_nBrightness;
	DWORD m_flBrightnessDuration;
	DWORD m_flSpriteScale;
	DWORD m_flScaleDuration;
	DWORD m_bWorldSpaceScale;
	DWORD m_flGlowProxySize;
	DWORD m_flHDRColorScale;
	DWORD m_flLastTime;
	DWORD m_flMaxFrame;
	DWORD m_flStartScale;
	DWORD m_flDestScale;
	DWORD m_flScaleTimeStart;
	DWORD m_nStartBrightness;
	DWORD m_nDestBrightness;
	DWORD m_flBrightnessTimeStart;
	DWORD m_nSpriteWidth;
	DWORD m_nSpriteHeight;
} CSprite;

inline struct CBaseMoveBehaviorOffsets {
	DWORD m_iPositionInterpolator;
	DWORD m_iRotationInterpolator;
	DWORD m_flAnimStartTime;
	DWORD m_flAnimEndTime;
	DWORD m_flAverageSpeedAcrossFrame;
	DWORD m_pCurrentKeyFrame;
	DWORD m_pTargetKeyFrame;
	DWORD m_pPreKeyFrame;
	DWORD m_pPostKeyFrame;
	DWORD m_flTimeIntoFrame;
	DWORD m_iDirection;
} CBaseMoveBehavior;

inline struct CDynamicLightOffsets {
	DWORD m_ActualFlags;
	DWORD m_Flags;
	DWORD m_LightStyle;
	DWORD m_On;
	DWORD m_Radius;
	DWORD m_Exponent;
	DWORD m_InnerAngle;
	DWORD m_OuterAngle;
	DWORD m_SpotRadius;
} CDynamicLight;

inline struct CWeaponTaserOffsets {
	DWORD m_fFireTime;
	DWORD m_nLastAttackTick;
} CWeaponTaser;

inline struct CRotDoorOffsets {
	DWORD m_bSolidBsp;
} CRotDoor;

inline struct CPathMoverOffsets {
	DWORD m_vecPathNodes;
	DWORD m_vecMovers;
	DWORD m_xInitialPathWorldToLocal;
} CPathMover;

inline struct CFuncVPhysicsClipOffsets {
	DWORD m_bDisabled;
} CFuncVPhysicsClip;

inline struct CPhysFixedOffsets {
	DWORD m_flLinearFrequency;
	DWORD m_flLinearDampingRatio;
	DWORD m_flAngularFrequency;
	DWORD m_flAngularDampingRatio;
	DWORD m_bEnableLinearConstraint;
	DWORD m_bEnableAngularConstraint;
	DWORD m_sBoneName1;
	DWORD m_sBoneName2;
} CPhysFixed;

inline struct CLogicNavigationOffsets {
	DWORD m_isOn;
	DWORD m_navProperty;
} CLogicNavigation;

inline struct CEnvWindVolumeOffsets {
	DWORD m_bActive;
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
	DWORD m_bStartDisabled;
	DWORD m_nShape;
	DWORD m_fWindSpeedMultiplier;
	DWORD m_fWindTurbulenceMultiplier;
	DWORD m_fWindSpeedVariationMultiplier;
	DWORD m_fWindDirectionVariationMultiplier;
} CEnvWindVolume;

inline struct CFuncElectrifiedVolumeOffsets {
	DWORD m_EffectName;
	DWORD m_EffectInterpenetrateName;
	DWORD m_EffectZapName;
	DWORD m_iszEffectSource;
} CFuncElectrifiedVolume;

inline struct CSoundEventOBBEntityOffsets {
	DWORD m_vMins;
	DWORD m_vMaxs;
} CSoundEventOBBEntity;

inline struct CFlashbangProjectileOffsets {
	DWORD m_flTimeToDetonate;
	DWORD m_numOpponentsHit;
	DWORD m_numTeammatesHit;
} CFlashbangProjectile;

inline struct CTriggerMultipleOffsets {
	DWORD m_OnTrigger;
} CTriggerMultiple;

inline struct CPhysBallSocketOffsets {
	DWORD m_flJointFriction;
	DWORD m_bEnableSwingLimit;
	DWORD m_flSwingLimit;
	DWORD m_bEnableTwistLimit;
	DWORD m_flMinTwistAngle;
	DWORD m_flMaxTwistAngle;
} CPhysBallSocket;

inline struct CDebugHistoryOffsets {
	DWORD m_nNpcEvents;
} CDebugHistory;

inline struct CSoundOpvarSetPointBaseOffsets {
	DWORD m_bDisabled;
	DWORD m_hSource;
	DWORD m_iszSourceEntityName;
	DWORD m_vLastPosition;
	DWORD m_iszStackName;
	DWORD m_iszOperatorName;
	DWORD m_iszOpvarName;
	DWORD m_iOpvarIndex;
	DWORD m_bUseAutoCompare;
} CSoundOpvarSetPointBase;

inline struct CPathKeyFrameOffsets {
	DWORD m_Origin;
	DWORD m_Angles;
	DWORD m_qAngle;
	DWORD m_iNextKey;
	DWORD m_flNextTime;
	DWORD m_pNextKey;
	DWORD m_pPrevKey;
	DWORD m_flMoveSpeed;
} CPathKeyFrame;

inline struct CWeaponCZ75aOffsets {
	DWORD m_bMagazineRemoved;
} CWeaponCZ75a;

inline struct CScriptTriggerPushOffsets {
	DWORD m_vExtent;
} CScriptTriggerPush;

inline struct CRevertSavedOffsets {
	DWORD m_loadTime;
	DWORD m_Duration;
	DWORD m_HoldTime;
} CRevertSaved;

inline struct CTriggerHurtOffsets {
	DWORD m_flOriginalDamage;
	DWORD m_flDamage;
	DWORD m_flDamageCap;
	DWORD m_flLastDmgTime;
	DWORD m_flForgivenessDelay;
	DWORD m_bitsDamageInflict;
	DWORD m_damageModel;
	DWORD m_bNoDmgForce;
	DWORD m_vDamageForce;
	DWORD m_thinkAlways;
	DWORD m_hurtThinkPeriod;
	DWORD m_OnHurt;
	DWORD m_OnHurtPlayer;
	DWORD m_hurtEntities;
} CTriggerHurt;

inline struct CRetakeGameRulesOffsets {
	DWORD m_nMatchSeed;
	DWORD m_bBlockersPresent;
	DWORD m_bRoundInProgress;
	DWORD m_iFirstSecondHalfRound;
	DWORD m_iBombSite;
	DWORD m_hBombPlanter;
} CRetakeGameRules;

inline struct CScriptTriggerHurtOffsets {
	DWORD m_vExtent;
} CScriptTriggerHurt;

inline struct CTriggerDetectExplosionOffsets {
	DWORD m_OnDetectedExplosion;
} CTriggerDetectExplosion;

inline struct CSmokeGrenadeProjectileOffsets {
	DWORD m_nSmokeEffectTickBegin;
	DWORD m_bDidSmokeEffect;
	DWORD m_nRandomSeed;
	DWORD m_vSmokeColor;
	DWORD m_vSmokeDetonationPos;
	DWORD m_VoxelFrameData;
	DWORD m_nVoxelFrameDataSize;
	DWORD m_nVoxelUpdate;
	DWORD m_flLastBounce;
	DWORD m_fllastSimulationTime;
	DWORD m_bExplodeFromInferno;
	DWORD m_bDidGroundScorch;
} CSmokeGrenadeProjectile;

inline struct CBloodOffsets {
	DWORD m_vecSprayAngles;
	DWORD m_vecSprayDir;
	DWORD m_flAmount;
	DWORD m_Color;
} CBlood;

inline struct CCSTeamOffsets {
	DWORD m_nLastRecievedShorthandedRoundBonus;
	DWORD m_nShorthandedRoundBonusStartRound;
	DWORD m_bSurrendered;
	DWORD m_szTeamMatchStat;
	DWORD m_numMapVictories;
	DWORD m_scoreFirstHalf;
	DWORD m_scoreSecondHalf;
	DWORD m_scoreOvertime;
	DWORD m_szClanTeamname;
	DWORD m_iClanID;
	DWORD m_szTeamFlagImage;
	DWORD m_szTeamLogoImage;
	DWORD m_flNextResourceTime;
	DWORD m_iLastUpdateSentAt;
} CCSTeam;

inline struct CRulePointEntityOffsets {
	DWORD m_Score;
} CRulePointEntity;

inline struct CEnvCubemapFogOffsets {
	DWORD m_flEndDistance;
	DWORD m_flStartDistance;
	DWORD m_flFogFalloffExponent;
	DWORD m_bHeightFogEnabled;
	DWORD m_flFogHeightWidth;
	DWORD m_flFogHeightEnd;
	DWORD m_flFogHeightStart;
	DWORD m_flFogHeightExponent;
	DWORD m_flLODBias;
	DWORD m_bActive;
	DWORD m_bStartDisabled;
	DWORD m_flFogMaxOpacity;
	DWORD m_nCubemapSourceType;
	DWORD m_hSkyMaterial;
	DWORD m_iszSkyEntity;
	DWORD m_hFogCubemapTexture;
	DWORD m_bHasHeightFogEnd;
	DWORD m_bFirstTime;
} CEnvCubemapFog;

inline struct CBaseDoorOffsets {
	DWORD m_angMoveEntitySpace;
	DWORD m_vecMoveDirParentSpace;
	DWORD m_ls;
	DWORD m_bForceClosed;
	DWORD m_bDoorGroup;
	DWORD m_bLocked;
	DWORD m_bIgnoreDebris;
	DWORD m_bNoNPCs;
	DWORD m_eSpawnPosition;
	DWORD m_flBlockDamage;
	DWORD m_NoiseMoving;
	DWORD m_NoiseArrived;
	DWORD m_NoiseMovingClosed;
	DWORD m_NoiseArrivedClosed;
	DWORD m_ChainTarget;
	DWORD m_OnBlockedClosing;
	DWORD m_OnBlockedOpening;
	DWORD m_OnUnblockedClosing;
	DWORD m_OnUnblockedOpening;
	DWORD m_OnFullyClosed;
	DWORD m_OnFullyOpen;
	DWORD m_OnClose;
	DWORD m_OnOpen;
	DWORD m_OnLockedUse;
	DWORD m_bLoopMoveSound;
	DWORD m_bCreateNavObstacle;
	DWORD m_isChaining;
	DWORD m_bIsUsable;
} CBaseDoor;

inline struct CGameMoneyOffsets {
	DWORD m_OnMoneySpent;
	DWORD m_OnMoneySpentFail;
	DWORD m_nMoney;
	DWORD m_strAwardText;
} CGameMoney;

inline struct CEnvHudHintOffsets {
	DWORD m_iszMessage;
} CEnvHudHint;

inline struct CItemDefuserOffsets {
	DWORD m_entitySpottedState;
	DWORD m_nSpotRules;
} CItemDefuser;

inline struct CItemGenericTriggerHelperOffsets {
	DWORD m_hParentItem;
} CItemGenericTriggerHelper;

inline struct CRagdollPropAttachedOffsets {
	DWORD m_boneIndexAttached;
	DWORD m_ragdollAttachedObjectIndex;
	DWORD m_attachmentPointBoneSpace;
	DWORD m_attachmentPointRagdollSpace;
	DWORD m_bShouldDetach;
	DWORD m_bShouldDeleteAttachedActivationRecord;
} CRagdollPropAttached;

inline struct CItemDogtagsOffsets {
	DWORD m_OwningPlayer;
	DWORD m_KillingPlayer;
} CItemDogtags;

inline struct CFuncPlatOffsets {
	DWORD m_sNoise;
} CFuncPlat;

inline struct CBarnLightOffsets {
	DWORD m_bEnabled;
	DWORD m_nColorMode;
	DWORD m_Color;
	DWORD m_flColorTemperature;
	DWORD m_flBrightness;
	DWORD m_flBrightnessScale;
	DWORD m_nDirectLight;
	DWORD m_nBakedShadowIndex;
	DWORD m_nLightPathUniqueId;
	DWORD m_nLightMapUniqueId;
	DWORD m_nLuminaireShape;
	DWORD m_flLuminaireSize;
	DWORD m_flLuminaireAnisotropy;
	DWORD m_LightStyleString;
	DWORD m_flLightStyleStartTime;
	DWORD m_QueuedLightStyleStrings;
	DWORD m_LightStyleEvents;
	DWORD m_LightStyleTargets;
	DWORD m_StyleEvent;
	DWORD m_hLightCookie;
	DWORD m_flShape;
	DWORD m_flSoftX;
	DWORD m_flSoftY;
	DWORD m_flSkirt;
	DWORD m_flSkirtNear;
	DWORD m_vSizeParams;
	DWORD m_flRange;
	DWORD m_vShear;
	DWORD m_nBakeSpecularToCubemaps;
	DWORD m_vBakeSpecularToCubemapsSize;
	DWORD m_nCastShadows;
	DWORD m_nShadowMapSize;
	DWORD m_nShadowPriority;
	DWORD m_bContactShadow;
	DWORD m_bForceShadowsEnabled;
	DWORD m_nBounceLight;
	DWORD m_flBounceScale;
	DWORD m_flMinRoughness;
	DWORD m_vAlternateColor;
	DWORD m_fAlternateColorBrightness;
	DWORD m_nFog;
	DWORD m_flFogStrength;
	DWORD m_nFogShadows;
	DWORD m_flFogScale;
	DWORD m_bFogMixedShadows;
	DWORD m_flFadeSizeStart;
	DWORD m_flFadeSizeEnd;
	DWORD m_flShadowFadeSizeStart;
	DWORD m_flShadowFadeSizeEnd;
	DWORD m_bPrecomputedFieldsValid;
	DWORD m_vPrecomputedBoundsMins;
	DWORD m_vPrecomputedBoundsMaxs;
	DWORD m_vPrecomputedOBBOrigin;
	DWORD m_vPrecomputedOBBAngles;
	DWORD m_vPrecomputedOBBExtent;
	DWORD m_nPrecomputedSubFrusta;
	DWORD m_vPrecomputedOBBOrigin0;
	DWORD m_vPrecomputedOBBAngles0;
	DWORD m_vPrecomputedOBBExtent0;
	DWORD m_vPrecomputedOBBOrigin1;
	DWORD m_vPrecomputedOBBAngles1;
	DWORD m_vPrecomputedOBBExtent1;
	DWORD m_vPrecomputedOBBOrigin2;
	DWORD m_vPrecomputedOBBAngles2;
	DWORD m_vPrecomputedOBBExtent2;
	DWORD m_vPrecomputedOBBOrigin3;
	DWORD m_vPrecomputedOBBAngles3;
	DWORD m_vPrecomputedOBBExtent3;
	DWORD m_vPrecomputedOBBOrigin4;
	DWORD m_vPrecomputedOBBAngles4;
	DWORD m_vPrecomputedOBBExtent4;
	DWORD m_vPrecomputedOBBOrigin5;
	DWORD m_vPrecomputedOBBAngles5;
	DWORD m_vPrecomputedOBBExtent5;
	DWORD m_bPvsModifyEntity;
	DWORD m_VisClusters;
} CBarnLight;

inline struct CInstructorEventEntityOffsets {
	DWORD m_iszName;
	DWORD m_iszHintTargetEntity;
	DWORD m_hTargetPlayer;
} CInstructorEventEntity;

inline struct CPathCornerOffsets {
	DWORD m_flWait;
	DWORD m_flRadius;
	DWORD m_OnPass;
} CPathCorner;

inline struct CTriggerSndSosOpvarOffsets {
	DWORD m_hTouchingPlayers;
	DWORD m_flPosition;
	DWORD m_flCenterSize;
	DWORD m_flMinVal;
	DWORD m_flMaxVal;
	DWORD m_opvarName;
	DWORD m_stackName;
	DWORD m_operatorName;
	DWORD m_bVolIs2D;
	DWORD m_opvarNameChar;
	DWORD m_stackNameChar;
	DWORD m_operatorNameChar;
	DWORD m_VecNormPos;
	DWORD m_flNormCenterSize;
} CTriggerSndSosOpvar;

inline struct CPointCommentaryNodeOffsets {
	DWORD m_iszPreCommands;
	DWORD m_iszPostCommands;
	DWORD m_iszCommentaryFile;
	DWORD m_iszViewTarget;
	DWORD m_hViewTarget;
	DWORD m_hViewTargetAngles;
	DWORD m_iszViewPosition;
	DWORD m_hViewPosition;
	DWORD m_hViewPositionMover;
	DWORD m_bPreventMovement;
	DWORD m_bUnderCrosshair;
	DWORD m_bUnstoppable;
	DWORD m_flFinishedTime;
	DWORD m_vecFinishOrigin;
	DWORD m_vecOriginalAngles;
	DWORD m_vecFinishAngles;
	DWORD m_bPreventChangesWhileMoving;
	DWORD m_bDisabled;
	DWORD m_vecTeleportOrigin;
	DWORD m_flAbortedPlaybackAt;
	DWORD m_pOnCommentaryStarted;
	DWORD m_pOnCommentaryStopped;
	DWORD m_bActive;
	DWORD m_flStartTime;
	DWORD m_flStartTimeInCommentary;
	DWORD m_iszTitle;
	DWORD m_iszSpeakers;
	DWORD m_iNodeNumber;
	DWORD m_iNodeNumberMax;
	DWORD m_bListenedTo;
} CPointCommentaryNode;

inline struct CMomentaryRotButtonOffsets {
	DWORD m_Position;
	DWORD m_OnUnpressed;
	DWORD m_OnFullyOpen;
	DWORD m_OnFullyClosed;
	DWORD m_OnReachedPosition;
	DWORD m_lastUsed;
	DWORD m_start;
	DWORD m_end;
	DWORD m_IdealYaw;
	DWORD m_sNoise;
	DWORD m_bUpdateTarget;
	DWORD m_direction;
	DWORD m_returnSpeed;
	DWORD m_flStartPosition;
} CMomentaryRotButton;

inline struct CSceneListManagerOffsets {
	DWORD m_hListManagers;
	DWORD m_iszScenes;
	DWORD m_hScenes;
} CSceneListManager;

inline struct CEnvTiltOffsets {
	DWORD m_Duration;
	DWORD m_Radius;
	DWORD m_TiltTime;
	DWORD m_stopTime;
} CEnvTilt;

inline struct CFuncMoverOffsets {
	DWORD m_iszPathName;
	DWORD m_hPathMover;
	DWORD m_hPrevPathMover;
	DWORD m_iszPathNodeStart;
	DWORD m_iszPathNodeEnd;
	DWORD m_eMoveType;
	DWORD m_bIsReversing;
	DWORD m_vTarget;
	DWORD m_flStartSpeed;
	DWORD m_flPathLocation;
	DWORD m_flT;
	DWORD m_nCurrentNodeIndex;
	DWORD m_nPreviousNodeIndex;
	DWORD m_eSolidType;
	DWORD m_bIsMoving;
	DWORD m_flTimeToReachMaxSpeed;
	DWORD m_flDistanceToReachMaxSpeed;
	DWORD m_flTimeToReachZeroSpeed;
	DWORD m_flDistanceToReachZeroSpeed;
	DWORD m_flTimeMovementStart;
	DWORD m_flTimeMovementStop;
	DWORD m_hStopAtNode;
	DWORD m_flPathLocationToBeginStop;
	DWORD m_iszStartForwardSound;
	DWORD m_iszLoopForwardSound;
	DWORD m_iszStopForwardSound;
	DWORD m_iszStartReverseSound;
	DWORD m_iszLoopReverseSound;
	DWORD m_iszStopReverseSound;
	DWORD m_iszArriveAtDestinationSound;
	DWORD m_OnMovementEnd;
	DWORD m_bStartAtClosestPoint;
	DWORD m_bStartAtEnd;
	DWORD m_eOrientationUpdate;
	DWORD m_flTimeStartOrientationChange;
	DWORD m_flTimeToBlendToNewOrientation;
	DWORD m_flDurationBlendToNewOrientationRan;
	DWORD m_nOriginalOrientationIndex;
	DWORD m_bCreateMovableNavMesh;
	DWORD m_bAllowMovableNavMeshDockingOnEntireEntity;
	DWORD m_OnNodePassed;
	DWORD m_iszOrientationMatchEntityName;
	DWORD m_hOrientationMatchEntity;
	DWORD m_flTimeToTraverseToNextNode;
	DWORD m_vLerpToNewPosStartInPathEntitySpace;
	DWORD m_vLerpToNewPosEndInPathEntitySpace;
	DWORD m_flLerpToPositionT;
	DWORD m_flLerpToPositionDeltaT;
	DWORD m_OnLerpToPositionComplete;
	DWORD m_bIsPaused;
	DWORD m_eTransitionedToPathNodeAction;
	DWORD m_nDelayedTeleportToNode;
	DWORD m_bIsVerboseLogging;
	DWORD m_hFollowEntity;
	DWORD m_flFollowDistance;
	DWORD m_flFollowMinimumSpeed;
	DWORD m_flCurFollowEntityT;
	DWORD m_flCurFollowSpeed;
	DWORD m_strOrientationFaceEntityName;
	DWORD m_hOrientationFaceEntity;
	DWORD m_OnStart;
	DWORD m_OnStartForward;
	DWORD m_OnStartReverse;
	DWORD m_OnStop;
	DWORD m_OnStopped;
	DWORD m_bNextNodeReturnsCurrent;
	DWORD m_bStartedMoving;
	DWORD m_eFollowEntityDirection;
} CFuncMover;

inline struct CPhysicsPropOffsets {
	DWORD m_MotionEnabled;
	DWORD m_OnAwakened;
	DWORD m_OnAwake;
	DWORD m_OnAsleep;
	DWORD m_OnPlayerUse;
	DWORD m_OnOutOfWorld;
	DWORD m_OnPlayerPickup;
	DWORD m_bForceNavIgnore;
	DWORD m_bNoNavmeshBlocker;
	DWORD m_bForceNpcExclude;
	DWORD m_massScale;
	DWORD m_buoyancyScale;
	DWORD m_damageType;
	DWORD m_damageToEnableMotion;
	DWORD m_flForceToEnableMotion;
	DWORD m_bThrownByPlayer;
	DWORD m_bDroppedByPlayer;
	DWORD m_bTouchedByPlayer;
	DWORD m_bFirstCollisionAfterLaunch;
	DWORD m_bHasBeenAwakened;
	DWORD m_bIsOverrideProp;
	DWORD m_flLastBurn;
	DWORD m_nDynamicContinuousContactBehavior;
	DWORD m_fNextCheckDisableMotionContactsTime;
	DWORD m_iInitialGlowState;
	DWORD m_nGlowRange;
	DWORD m_nGlowRangeMin;
	DWORD m_glowColor;
	DWORD m_bShouldAutoConvertBackFromDebris;
	DWORD m_bMuteImpactEffects;
	DWORD m_bAcceptDamageFromHeldObjects;
	DWORD m_bEnableUseOutput;
	DWORD m_CrateType;
	DWORD m_strItemClass;
	DWORD m_nItemCount;
	DWORD m_bRemovableForAmmoBalancing;
	DWORD m_bAwake;
	DWORD m_bAttachedToReferenceFrame;
} CPhysicsProp;

inline struct CFuncNavObstructionOffsets {
	DWORD m_bDisabled;
	DWORD m_bUseAsyncObstacleUpdate;
} CFuncNavObstruction;

inline struct CPhysWheelConstraintOffsets {
	DWORD m_flSuspensionFrequency;
	DWORD m_flSuspensionDampingRatio;
	DWORD m_flSuspensionHeightOffset;
	DWORD m_bEnableSuspensionLimit;
	DWORD m_flMinSuspensionOffset;
	DWORD m_flMaxSuspensionOffset;
	DWORD m_bEnableSteeringLimit;
	DWORD m_flMinSteeringAngle;
	DWORD m_flMaxSteeringAngle;
	DWORD m_flSteeringAxisFriction;
	DWORD m_flSpinAxisFriction;
	DWORD m_hSteeringMimicsEntity;
} CPhysWheelConstraint;

inline struct CMolotovProjectileOffsets {
	DWORD m_bIsIncGrenade;
	DWORD m_bDetonated;
	DWORD m_stillTimer;
	DWORD m_bHasBouncedOffPlayer;
} CMolotovProjectile;

inline struct CColorCorrectionOffsets {
	DWORD m_flFadeInDuration;
	DWORD m_flFadeOutDuration;
	DWORD m_flStartFadeInWeight;
	DWORD m_flStartFadeOutWeight;
	DWORD m_flTimeStartFadeIn;
	DWORD m_flTimeStartFadeOut;
	DWORD m_flMaxWeight;
	DWORD m_bStartDisabled;
	DWORD m_bEnabled;
	DWORD m_bMaster;
	DWORD m_bClientSide;
	DWORD m_bExclusive;
	DWORD m_MinFalloff;
	DWORD m_MaxFalloff;
	DWORD m_flCurWeight;
	DWORD m_netlookupFilename;
	DWORD m_lookupFilename;
} CColorCorrection;

inline struct CPropDoorRotatingBreakableOffsets {
	DWORD m_bBreakable;
	DWORD m_isAbleToCloseAreaPortals;
	DWORD m_currentDamageState;
	DWORD m_damageStates;
} CPropDoorRotatingBreakable;

inline struct CBaseClientUIEntityOffsets {
	DWORD m_bEnabled;
	DWORD m_DialogXMLName;
	DWORD m_PanelClassName;
	DWORD m_PanelID;
	DWORD m_CustomOutput0;
	DWORD m_CustomOutput1;
	DWORD m_CustomOutput2;
	DWORD m_CustomOutput3;
	DWORD m_CustomOutput4;
	DWORD m_CustomOutput5;
	DWORD m_CustomOutput6;
	DWORD m_CustomOutput7;
	DWORD m_CustomOutput8;
	DWORD m_CustomOutput9;
} CBaseClientUIEntity;

inline struct CBreakableOffsets {
	DWORD m_CPropDataComponent;
	DWORD m_Material;
	DWORD m_hBreaker;
	DWORD m_Explosion;
	DWORD m_iszSpawnObject;
	DWORD m_flPressureDelay;
	DWORD m_iMinHealthDmg;
	DWORD m_iszPropData;
	DWORD m_impactEnergyScale;
	DWORD m_nOverrideBlockLOS;
	DWORD m_OnBreak;
	DWORD m_OnHealthChanged;
	DWORD m_PerformanceMode;
	DWORD m_hPhysicsAttacker;
	DWORD m_flLastPhysicsInfluenceTime;
} CBreakable;

inline struct CPulseCell_Outflow_PlaySceneBase__CursorState_tOffsets {
	DWORD m_sceneInstance;
	DWORD m_mainActor;
} CPulseCell_Outflow_PlaySceneBase__CursorState_t;

inline struct CGradientFogOffsets {
	DWORD m_hGradientFogTexture;
	DWORD m_flFogStartDistance;
	DWORD m_flFogEndDistance;
	DWORD m_bHeightFogEnabled;
	DWORD m_flFogStartHeight;
	DWORD m_flFogEndHeight;
	DWORD m_flFarZ;
	DWORD m_flFogMaxOpacity;
	DWORD m_flFogFalloffExponent;
	DWORD m_flFogVerticalExponent;
	DWORD m_fogColor;
	DWORD m_flFogStrength;
	DWORD m_flFadeTime;
	DWORD m_bStartDisabled;
	DWORD m_bIsEnabled;
	DWORD m_bGradientFogNeedsTextures;
} CGradientFog;

inline struct CSoundOpvarSetAABBEntityOffsets {
	DWORD m_vDistanceInnerMins;
	DWORD m_vDistanceInnerMaxs;
	DWORD m_vDistanceOuterMins;
	DWORD m_vDistanceOuterMaxs;
	DWORD m_nAABBDirection;
	DWORD m_vInnerMins;
	DWORD m_vInnerMaxs;
	DWORD m_vOuterMins;
	DWORD m_vOuterMaxs;
} CSoundOpvarSetAABBEntity;

inline struct CPulseCell_Outflow_PlaySequenceOffsets {
	DWORD m_ParamSequenceName;
} CPulseCell_Outflow_PlaySequence;

inline struct CPointClientUIWorldTextPanelOffsets {
	DWORD m_messageText;
} CPointClientUIWorldTextPanel;

inline struct CFuncRotatorOffsets {
	DWORD m_hRotatorTarget;
	DWORD m_bIsRotating;
	DWORD m_bIsReversing;
	DWORD m_flTimeToReachMaxSpeed;
	DWORD m_flTimeToReachZeroSpeed;
	DWORD m_flDistanceAlongArcTraveled;
	DWORD m_flTimeToWaitOscillate;
	DWORD m_flTimeRotationStart;
	DWORD m_qLSPrevChange;
	DWORD m_qWSPrev;
	DWORD m_qWSInit;
	DWORD m_qLSInit;
	DWORD m_qLSOrientation;
	DWORD m_OnRotationStarted;
	DWORD m_OnRotationCompleted;
	DWORD m_OnOscillate;
	DWORD m_OnOscillateStartArrive;
	DWORD m_OnOscillateStartDepart;
	DWORD m_OnOscillateEndArrive;
	DWORD m_OnOscillateEndDepart;
	DWORD m_bOscillateDepart;
	DWORD m_nOscillateCount;
	DWORD m_eRotateType;
	DWORD m_ePrevRotateType;
	DWORD m_bHasTargetOverride;
	DWORD m_qOrientationOverride;
	DWORD m_eSpaceOverride;
	DWORD m_qAngularVelocity;
	DWORD m_vLookAtForcedUp;
	DWORD m_strRotatorTarget;
	DWORD m_bRecordHistory;
	DWORD m_vecRotatorHistory;
	DWORD m_bReturningToPreviousOrientation;
	DWORD m_vecRotatorQueue;
	DWORD m_vecRotatorQueueHistory;
} CFuncRotator;

inline struct CSoundEventEntityOffsets {
	DWORD m_bStartOnSpawn;
	DWORD m_bToLocalPlayer;
	DWORD m_bStopOnNew;
	DWORD m_bSaveRestore;
	DWORD m_bSavedIsPlaying;
	DWORD m_flSavedElapsedTime;
	DWORD m_iszSourceEntityName;
	DWORD m_iszAttachmentName;
	DWORD m_onGUIDChanged;
	DWORD m_onSoundFinished;
	DWORD m_flClientCullRadius;
	DWORD m_iszSoundName;
	DWORD m_hSource;
	DWORD m_nEntityIndexSelection;
} CSoundEventEntity;

inline struct CEnvFadeOffsets {
	DWORD m_fadeColor;
	DWORD m_Duration;
	DWORD m_HoldDuration;
	DWORD m_OnBeginFade;
} CEnvFade;

inline struct CTriggerImpactOffsets {
	DWORD m_flMagnitude;
	DWORD m_flNoise;
	DWORD m_flViewkick;
	DWORD m_pOutputForce;
} CTriggerImpact;

inline struct CBasePropDoorOffsets {
	DWORD m_flAutoReturnDelay;
	DWORD m_hDoorList;
	DWORD m_nHardwareType;
	DWORD m_bNeedsHardware;
	DWORD m_eDoorState;
	DWORD m_bLocked;
	DWORD m_bNoNPCs;
	DWORD m_closedPosition;
	DWORD m_closedAngles;
	DWORD m_hBlocker;
	DWORD m_bFirstBlocked;
	DWORD m_ls;
	DWORD m_bForceClosed;
	DWORD m_vecLatchWorldPosition;
	DWORD m_hActivator;
	DWORD m_SoundMoving;
	DWORD m_SoundOpen;
	DWORD m_SoundClose;
	DWORD m_SoundLock;
	DWORD m_SoundUnlock;
	DWORD m_SoundLatch;
	DWORD m_SoundPound;
	DWORD m_SoundJiggle;
	DWORD m_SoundLockedAnim;
	DWORD m_numCloseAttempts;
	DWORD m_nPhysicsMaterial;
	DWORD m_SlaveName;
	DWORD m_hMaster;
	DWORD m_OnBlockedClosing;
	DWORD m_OnBlockedOpening;
	DWORD m_OnUnblockedClosing;
	DWORD m_OnUnblockedOpening;
	DWORD m_OnFullyClosed;
	DWORD m_OnFullyOpen;
	DWORD m_OnClose;
	DWORD m_OnOpen;
	DWORD m_OnLockedUse;
	DWORD m_OnAjarOpen;
} CBasePropDoor;

inline struct CLogicBranchListOffsets {
	DWORD m_nLogicBranchNames;
	DWORD m_LogicBranchList;
	DWORD m_eLastState;
	DWORD m_OnAllTrue;
	DWORD m_OnAllFalse;
	DWORD m_OnMixed;
} CLogicBranchList;

inline struct CBtActionParachutePositioningOffsets {
	DWORD m_ActionTimer;
} CBtActionParachutePositioning;

inline struct CDynamicPropOffsets {
	DWORD m_bCreateNavObstacle;
	DWORD m_bNavObstacleUpdatesOverridden;
	DWORD m_bUseHitboxesForRenderBox;
	DWORD m_bUseAnimGraph;
	DWORD m_pOutputAnimBegun;
	DWORD m_pOutputAnimOver;
	DWORD m_pOutputAnimLoopCycleOver;
	DWORD m_OnAnimReachedStart;
	DWORD m_OnAnimReachedEnd;
	DWORD m_iszIdleAnim;
	DWORD m_nIdleAnimLoopMode;
	DWORD m_bRandomizeCycle;
	DWORD m_bStartDisabled;
	DWORD m_bFiredStartEndOutput;
	DWORD m_bForceNpcExclude;
	DWORD m_bCreateNonSolid;
	DWORD m_bIsOverrideProp;
	DWORD m_iInitialGlowState;
	DWORD m_nGlowRange;
	DWORD m_nGlowRangeMin;
	DWORD m_glowColor;
	DWORD m_nGlowTeam;
} CDynamicProp;

inline struct CFuncConveyorOffsets {
	DWORD m_szConveyorModels;
	DWORD m_flTransitionDurationSeconds;
	DWORD m_angMoveEntitySpace;
	DWORD m_vecMoveDirEntitySpace;
	DWORD m_flTargetSpeed;
	DWORD m_nTransitionStartTick;
	DWORD m_nTransitionDurationTicks;
	DWORD m_flTransitionStartSpeed;
	DWORD m_hConveyorModels;
} CFuncConveyor;

inline struct CTriggerPhysicsOffsets {
	DWORD m_gravityScale;
	DWORD m_linearLimit;
	DWORD m_linearDamping;
	DWORD m_angularLimit;
	DWORD m_angularDamping;
	DWORD m_linearForce;
	DWORD m_flFrequency;
	DWORD m_flDampingRatio;
	DWORD m_vecLinearForcePointAt;
	DWORD m_bCollapseToForcePoint;
	DWORD m_vecLinearForcePointAtWorld;
	DWORD m_vecLinearForceDirection;
	DWORD m_bConvertToDebrisWhenPossible;
} CTriggerPhysics;

inline struct CFuncTimescaleOffsets {
	DWORD m_flDesiredTimescale;
	DWORD m_flAcceleration;
	DWORD m_flMinBlendRate;
	DWORD m_flBlendDeltaMultiplier;
	DWORD m_isStarted;
} CFuncTimescale;

inline struct CSoundOpvarSetPointEntityOffsets {
	DWORD m_OnEnter;
	DWORD m_OnExit;
	DWORD m_bAutoDisable;
	DWORD m_flDistanceMin;
	DWORD m_flDistanceMax;
	DWORD m_flDistanceMapMin;
	DWORD m_flDistanceMapMax;
	DWORD m_flOcclusionRadius;
	DWORD m_flOcclusionMin;
	DWORD m_flOcclusionMax;
	DWORD m_flValSetOnDisable;
	DWORD m_bSetValueOnDisable;
	DWORD m_bReloading;
	DWORD m_nSimulationMode;
	DWORD m_nVisibilitySamples;
	DWORD m_vDynamicProxyPoint;
	DWORD m_flDynamicMaximumOcclusion;
	DWORD m_hDynamicEntity;
	DWORD m_iszDynamicEntityName;
	DWORD m_flPathingDistanceNormFactor;
	DWORD m_vPathingSourcePos;
	DWORD m_vPathingListenerPos;
	DWORD m_vPathingDirection;
	DWORD m_nPathingSourceIndex;
} CSoundOpvarSetPointEntity;

inline struct CMarkupVolumeTaggedOffsets {
	DWORD m_GroupNames;
	DWORD m_Tags;
	DWORD m_bIsGroup;
	DWORD m_bGroupByPrefab;
	DWORD m_bGroupByVolume;
	DWORD m_bGroupOtherGroups;
	DWORD m_bIsInGroup;
} CMarkupVolumeTagged;

inline struct CEnvCubemapOffsets {
	DWORD m_Entity_hCubemapTexture;
	DWORD m_Entity_bCustomCubemapTexture;
	DWORD m_Entity_flInfluenceRadius;
	DWORD m_Entity_vBoxProjectMins;
	DWORD m_Entity_vBoxProjectMaxs;
	DWORD m_Entity_bMoveable;
	DWORD m_Entity_nHandshake;
	DWORD m_Entity_nEnvCubeMapArrayIndex;
	DWORD m_Entity_nPriority;
	DWORD m_Entity_flEdgeFadeDist;
	DWORD m_Entity_vEdgeFadeDists;
	DWORD m_Entity_flDiffuseScale;
	DWORD m_Entity_bStartDisabled;
	DWORD m_Entity_bDefaultEnvMap;
	DWORD m_Entity_bDefaultSpecEnvMap;
	DWORD m_Entity_bIndoorCubeMap;
	DWORD m_Entity_bCopyDiffuseFromDefaultCubemap;
	DWORD m_Entity_bEnabled;
} CEnvCubemap;

inline struct CTriggerLerpObjectOffsets {
	DWORD m_iszLerpTarget;
	DWORD m_hLerpTarget;
	DWORD m_iszLerpTargetAttachment;
	DWORD m_hLerpTargetAttachment;
	DWORD m_flLerpDuration;
	DWORD m_bLerpRestoreMoveType;
	DWORD m_bSingleLerpObject;
	DWORD m_vecLerpingObjects;
	DWORD m_iszLerpEffect;
	DWORD m_iszLerpSound;
	DWORD m_bAttachTouchingObject;
	DWORD m_hEntityToWaitForDisconnect;
	DWORD m_OnLerpStarted;
	DWORD m_OnLerpFinished;
	DWORD m_OnDetached;
} CTriggerLerpObject;

inline struct CTriggerSaveOffsets {
	DWORD m_bForceNewLevelUnit;
	DWORD m_fDangerousTimer;
	DWORD m_minHitPoints;
} CTriggerSave;

inline struct CPointHurtOffsets {
	DWORD m_nDamage;
	DWORD m_bitsDamageType;
	DWORD m_flRadius;
	DWORD m_flDelay;
	DWORD m_strTarget;
	DWORD m_pActivator;
} CPointHurt;

inline struct CVoiceContainerBlenderOffsets {
	DWORD m_firstSound;
	DWORD m_secondSound;
	DWORD m_flBlendFactor;
} CVoiceContainerBlender;

inline struct VMixFreeverbDesc_tOffsets {
	DWORD m_flRoomSize;
	DWORD m_flDamp;
	DWORD m_flWidth;
	DWORD m_flLateReflections;
} VMixFreeverbDesc_t;

inline struct CVoiceContainerStaticAdditiveSynth__CHarmonicOffsets {
	DWORD m_nWaveform;
	DWORD m_nFundamental;
	DWORD m_nOctave;
	DWORD m_flCents;
	DWORD m_flPhase;
	DWORD m_curve;
	DWORD m_volumeScaling;
} CVoiceContainerStaticAdditiveSynth__CHarmonic;

inline struct CVoiceContainerStaticAdditiveSynth__CToneOffsets {
	DWORD m_harmonics;
	DWORD m_curve;
	DWORD m_bSyncInstances;
} CVoiceContainerStaticAdditiveSynth__CTone;

inline struct CVoiceContainerRandomSamplerOffsets {
	DWORD m_flAmplitude;
	DWORD m_flAmplitudeJitter;
	DWORD m_flTimeJitter;
	DWORD m_flMaxLength;
	DWORD m_nNumDelayVariations;
	DWORD m_grainResources;
} CVoiceContainerRandomSampler;

inline struct CVSoundOffsets {
	DWORD m_nRate;
	DWORD m_nFormat;
	DWORD m_nChannels;
	DWORD m_nLoopStart;
	DWORD m_nSampleCount;
	DWORD m_flDuration;
	DWORD m_Sentences;
	DWORD m_nStreamingSize;
	DWORD m_nSeekTable;
	DWORD m_nLoopEnd;
	DWORD m_encodedHeader;
} CVSound;

inline struct CDSPPresetMixgroupModifierTableOffsets {
	DWORD m_table;
} CDSPPresetMixgroupModifierTable;

inline struct CSosGroupActionSoundeventClusterSchemaOffsets {
	DWORD m_nMinNearby;
	DWORD m_flClusterEpsilon;
	DWORD m_shouldPlayOpvar;
	DWORD m_shouldPlayClusterChild;
	DWORD m_clusterSizeOpvar;
	DWORD m_groupBoundingBoxMinsOpvar;
	DWORD m_groupBoundingBoxMaxsOpvar;
} CSosGroupActionSoundeventClusterSchema;

inline struct CSosGroupActionSetSoundeventParameterSchemaOffsets {
	DWORD m_nMaxCount;
	DWORD m_flMinValue;
	DWORD m_flMaxValue;
	DWORD m_opvarName;
	DWORD m_nSortType;
} CSosGroupActionSetSoundeventParameterSchema;

inline struct CSoundContainerReferenceOffsets {
	DWORD m_bUseReference;
	DWORD m_sound;
	DWORD m_pSound;
} CSoundContainerReference;

inline struct VMixBoxverb2Desc_tOffsets {
	DWORD m_flSizeMax;
	DWORD m_flSizeMin;
	DWORD m_flComplexity;
	DWORD m_flDiffusion;
	DWORD m_flModDepth;
	DWORD m_flModRate;
	DWORD m_bParallel;
	DWORD m_filterType;
	DWORD m_flWidth;
	DWORD m_flHeight;
	DWORD m_flDepth;
	DWORD m_flFeedbackScale;
	DWORD m_flFeedbackWidth;
	DWORD m_flFeedbackHeight;
	DWORD m_flFeedbackDepth;
	DWORD m_flOutputGain;
	DWORD m_flTaps;
} VMixBoxverb2Desc_t;

inline struct VMixSubgraphSwitchDesc_tOffsets {
	DWORD m_interpolationMode;
	DWORD m_bOnlyTailsOnFadeOut;
	DWORD m_flInterpolationTime;
} VMixSubgraphSwitchDesc_t;

inline struct CVoiceContainerAnalysisBaseOffsets {
	DWORD m_bRegenerateCurveOnCompile;
	DWORD m_curve;
} CVoiceContainerAnalysisBase;

inline struct CSosGroupActionSoundeventMinMaxValuesSchemaOffsets {
	DWORD m_strQueryPublicFieldName;
	DWORD m_strDelayPublicFieldName;
	DWORD m_bExcludeStoppedSounds;
	DWORD m_bExcludeDelayedSounds;
	DWORD m_bExcludeSoundsBelowThreshold;
	DWORD m_flExcludeSoundsMinThresholdValue;
	DWORD m_bExcludSoundsAboveThreshold;
	DWORD m_flExcludeSoundsMaxThresholdValue;
	DWORD m_strMinValueName;
	DWORD m_strMaxValueName;
} CSosGroupActionSoundeventMinMaxValuesSchema;

inline struct VMixPannerDesc_tOffsets {
	DWORD m_type;
	DWORD m_flStrength;
} VMixPannerDesc_t;

inline struct CSosGroupActionSoundeventPrioritySchemaOffsets {
	DWORD m_priorityValue;
	DWORD m_priorityVolumeScalar;
	DWORD m_priorityContributeButDontRead;
	DWORD m_bPriorityReadButDontContribute;
} CSosGroupActionSoundeventPrioritySchema;

inline struct CVoiceContainerRealtimeFMSineWaveOffsets {
	DWORD m_flCarrierFrequency;
	DWORD m_flModulatorFrequency;
	DWORD m_flModulatorAmount;
} CVoiceContainerRealtimeFMSineWave;

inline struct SelectedEditItemInfo_tOffsets {
	DWORD m_EditItems;
} SelectedEditItemInfo_t;

inline struct VMixModDelayDesc_tOffsets {
	DWORD m_feedbackFilter;
	DWORD m_bPhaseInvert;
	DWORD m_flGlideTime;
	DWORD m_flDelay;
	DWORD m_flOutputGain;
	DWORD m_flFeedbackGain;
	DWORD m_flModRate;
	DWORD m_flModDepth;
	DWORD m_bApplyAntialiasing;
} VMixModDelayDesc_t;

inline struct VMixBoxverbDesc_tOffsets {
	DWORD m_flSizeMax;
	DWORD m_flSizeMin;
	DWORD m_flComplexity;
	DWORD m_flDiffusion;
	DWORD m_flModDepth;
	DWORD m_flModRate;
	DWORD m_bParallel;
	DWORD m_filterType;
	DWORD m_flWidth;
	DWORD m_flHeight;
	DWORD m_flDepth;
	DWORD m_flFeedbackScale;
	DWORD m_flFeedbackWidth;
	DWORD m_flFeedbackHeight;
	DWORD m_flFeedbackDepth;
	DWORD m_flOutputGain;
	DWORD m_flTaps;
} VMixBoxverbDesc_t;

inline struct CSosSoundEventGroupSchemaOffsets {
	DWORD m_nGroupType;
	DWORD m_bBlocksEvents;
	DWORD m_nBlockMaxCount;
	DWORD m_flMemberLifespanTime;
	DWORD m_bInvertMatch;
	DWORD m_Behavior_EventName;
	DWORD m_matchSoundEventName;
	DWORD m_bMatchEventSubString;
	DWORD m_matchSoundEventSubString;
	DWORD m_Behavior_EntIndex;
	DWORD m_flEntIndex;
	DWORD m_Behavior_Opvar;
	DWORD m_flOpvar;
	DWORD m_Behavior_String;
	DWORD m_opvarString;
	DWORD m_vActions;
} CSosSoundEventGroupSchema;

inline struct VMixDynamics3BandDesc_tOffsets {
	DWORD m_fldbGainOutput;
	DWORD m_flRMSTimeMS;
	DWORD m_fldbKneeWidth;
	DWORD m_flDepth;
	DWORD m_flWetMix;
	DWORD m_flTimeScale;
	DWORD m_flLowCutoffFreq;
	DWORD m_flHighCutoffFreq;
	DWORD m_bPeakMode;
	DWORD m_bandDesc;
} VMixDynamics3BandDesc_t;

inline struct CDSPMixgroupModifierOffsets {
	DWORD m_mixgroup;
	DWORD m_flModifier;
	DWORD m_flModifierMin;
	DWORD m_flSourceModifier;
	DWORD m_flSourceModifierMin;
	DWORD m_flListenerReverbModifierWhenSourceReverbIsActive;
} CDSPMixgroupModifier;

inline struct CAudioMorphDataOffsets {
	DWORD m_times;
	DWORD m_nameHashCodes;
	DWORD m_nameStrings;
	DWORD m_samples;
	DWORD m_flEaseIn;
	DWORD m_flEaseOut;
} CAudioMorphData;

inline struct VMixDualCompressorDesc_tOffsets {
	DWORD m_flRMSTimeMS;
	DWORD m_fldbKneeWidth;
	DWORD m_flWetMix;
	DWORD m_bPeakMode;
	DWORD m_bandDesc;
} VMixDualCompressorDesc_t;

inline struct CVoiceContainerStaticAdditiveSynthOffsets {
	DWORD m_tones;
} CVoiceContainerStaticAdditiveSynth;

inline struct CVoiceContainerShapedNoiseOffsets {
	DWORD m_bUseCurveForFrequency;
	DWORD m_flFrequency;
	DWORD m_frequencySweep;
	DWORD m_bUseCurveForResonance;
	DWORD m_flResonance;
	DWORD m_resonanceSweep;
	DWORD m_bUseCurveForAmplitude;
	DWORD m_flGainInDecibels;
	DWORD m_gainSweep;
} CVoiceContainerShapedNoise;

inline struct CDspPresetModifierListOffsets {
	DWORD m_dspName;
	DWORD m_modifiers;
} CDspPresetModifierList;

inline struct CVoiceContainerBaseOffsets {
	DWORD m_vSound;
	DWORD m_pEnvelopeAnalyzer;
} CVoiceContainerBase;

inline struct CVoiceContainerGranulatorOffsets {
	DWORD m_flGrainLength;
	DWORD m_flGrainCrossfadeAmount;
	DWORD m_flStartJitter;
	DWORD m_flPlaybackJitter;
	DWORD m_bShouldWraparound;
	DWORD m_sourceAudio;
} CVoiceContainerGranulator;

inline struct VMixDelayDesc_tOffsets {
	DWORD m_feedbackFilter;
	DWORD m_bEnableFilter;
	DWORD m_flDelay;
	DWORD m_flDirectGain;
	DWORD m_flDelayGain;
	DWORD m_flFeedbackGain;
	DWORD m_flWidth;
} VMixDelayDesc_t;

inline struct VMixEQ8Desc_tOffsets {
	DWORD m_stages;
} VMixEQ8Desc_t;

inline struct CAudioPhonemeTagOffsets {
	DWORD m_flStartTime;
	DWORD m_flEndTime;
	DWORD m_nPhonemeCode;
} CAudioPhonemeTag;

inline struct CSosGroupActionSoundeventCountSchemaOffsets {
	DWORD m_bExcludeStoppedSounds;
	DWORD m_strCountKeyName;
} CSosGroupActionSoundeventCountSchema;

inline struct CVoiceContainerEnvelopeAnalyzerOffsets {
	DWORD m_mode;
	DWORD m_fAnalysisWindowMs;
	DWORD m_flThreshold;
} CVoiceContainerEnvelopeAnalyzer;

inline struct CSoundEventMetaDataOffsets {
	DWORD m_soundEventVMix;
} CSoundEventMetaData;

inline struct VMixPitchShiftDesc_tOffsets {
	DWORD m_nGrainSampleCount;
	DWORD m_flPitchShift;
	DWORD m_nQuality;
	DWORD m_nProcType;
} VMixPitchShiftDesc_t;

inline struct CAudioEmphasisSampleOffsets {
	DWORD m_flTime;
	DWORD m_flValue;
} CAudioEmphasisSample;

inline struct CVoiceContainerSetOffsets {
	DWORD m_soundsToPlay;
} CVoiceContainerSet;

inline struct VMixConvolutionDesc_tOffsets {
	DWORD m_fldbGain;
	DWORD m_flPreDelayMS;
	DWORD m_flWetMix;
	DWORD m_fldbLow;
	DWORD m_fldbMid;
	DWORD m_fldbHigh;
	DWORD m_flLowCutoffFreq;
	DWORD m_flHighCutoffFreq;
} VMixConvolutionDesc_t;

inline struct CVoiceContainerSetElementOffsets {
	DWORD m_sound;
	DWORD m_flVolumeDB;
} CVoiceContainerSetElement;

inline struct SosEditItemInfo_tOffsets {
	DWORD itemType;
	DWORD itemName;
	DWORD itemTypeName;
	DWORD itemKVString;
	DWORD itemPos;
} SosEditItemInfo_t;

inline struct VMixPlateverbDesc_tOffsets {
	DWORD m_flPrefilter;
	DWORD m_flInputDiffusion1;
	DWORD m_flInputDiffusion2;
	DWORD m_flDecay;
	DWORD m_flDamp;
	DWORD m_flFeedbackDiffusion1;
	DWORD m_flFeedbackDiffusion2;
} VMixPlateverbDesc_t;

inline struct CSoundContainerReferenceArrayOffsets {
	DWORD m_bUseReference;
	DWORD m_sounds;
	DWORD m_pSounds;
} CSoundContainerReferenceArray;

inline struct VMixDiffusorDesc_tOffsets {
	DWORD m_flSize;
	DWORD m_flComplexity;
	DWORD m_flFeedback;
	DWORD m_flOutputGain;
} VMixDiffusorDesc_t;

inline struct VMixDynamicsCompressorDesc_tOffsets {
	DWORD m_fldbOutputGain;
	DWORD m_fldbCompressionThreshold;
	DWORD m_fldbKneeWidth;
	DWORD m_flCompressionRatio;
	DWORD m_flAttackTimeMS;
	DWORD m_flReleaseTimeMS;
	DWORD m_flRMSTimeMS;
	DWORD m_flWetMix;
	DWORD m_bPeakMode;
} VMixDynamicsCompressorDesc_t;

inline struct VMixShaperDesc_tOffsets {
	DWORD m_nShape;
	DWORD m_fldbDrive;
	DWORD m_fldbOutputGain;
	DWORD m_flWetMix;
	DWORD m_nOversampleFactor;
} VMixShaperDesc_t;

inline struct VMixEnvelopeDesc_tOffsets {
	DWORD m_flAttackTimeMS;
	DWORD m_flHoldTimeMS;
	DWORD m_flReleaseTimeMS;
} VMixEnvelopeDesc_t;

inline struct CAudioSentenceOffsets {
	DWORD m_bShouldVoiceDuck;
	DWORD m_RunTimePhonemes;
	DWORD m_EmphasisSamples;
	DWORD m_morphData;
} CAudioSentence;

inline struct CVoiceContainerParameterBlenderOffsets {
	DWORD m_firstSound;
	DWORD m_secondSound;
	DWORD m_bEnableOcclusionBlend;
	DWORD m_curve1;
	DWORD m_curve2;
	DWORD m_bEnableDistanceBlend;
	DWORD m_curve3;
	DWORD m_curve4;
} CVoiceContainerParameterBlender;

inline struct CSosGroupActionLimitSchemaOffsets {
	DWORD m_nMaxCount;
	DWORD m_nStopType;
	DWORD m_nSortType;
	DWORD m_bStopImmediate;
	DWORD m_bCountStopped;
} CSosGroupActionLimitSchema;

inline struct CVoiceContainerAmpedDecayingSineWaveOffsets {
	DWORD m_flGainAmount;
} CVoiceContainerAmpedDecayingSineWave;

inline struct CVoiceContainerEnvelopeOffsets {
	DWORD m_sound;
	DWORD m_analysisContainer;
} CVoiceContainerEnvelope;

inline struct VMixAutoFilterDesc_tOffsets {
	DWORD m_flEnvelopeAmount;
	DWORD m_flAttackTimeMS;
	DWORD m_flReleaseTimeMS;
	DWORD m_filter;
	DWORD m_flLFOAmount;
	DWORD m_flLFORate;
	DWORD m_flPhase;
	DWORD m_nLFOShape;
} VMixAutoFilterDesc_t;

inline struct VMixDynamicsBand_tOffsets {
	DWORD m_fldbGainInput;
	DWORD m_fldbGainOutput;
	DWORD m_fldbThresholdBelow;
	DWORD m_fldbThresholdAbove;
	DWORD m_flRatioBelow;
	DWORD m_flRatioAbove;
	DWORD m_flAttackTimeMS;
	DWORD m_flReleaseTimeMS;
	DWORD m_bEnable;
	DWORD m_bSolo;
} VMixDynamicsBand_t;

inline struct VMixEffectChainDesc_tOffsets {
	DWORD m_flCrossfadeTime;
} VMixEffectChainDesc_t;

inline struct CVoiceContainerStaticAdditiveSynth__CGainScalePerInstanceOffsets {
	DWORD m_flMinVolume;
	DWORD m_nInstancesAtMinVolume;
	DWORD m_flMaxVolume;
	DWORD m_nInstancesAtMaxVolume;
} CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance;

inline struct CVoiceContainerSelectorOffsets {
	DWORD m_mode;
	DWORD m_soundsToPlay;
	DWORD m_fProbabilityWeights;
} CVoiceContainerSelector;

inline struct CSosGroupActionTimeBlockLimitSchemaOffsets {
	DWORD m_nMaxCount;
	DWORD m_flMaxDuration;
} CSosGroupActionTimeBlockLimitSchema;

inline struct CTestBlendContainerOffsets {
	DWORD m_firstSound;
	DWORD m_secondSound;
} CTestBlendContainer;

inline struct CSosGroupActionMemberCountEnvelopeSchemaOffsets {
	DWORD m_nBaseCount;
	DWORD m_nTargetCount;
	DWORD m_flBaseValue;
	DWORD m_flTargetValue;
	DWORD m_flAttack;
	DWORD m_flDecay;
	DWORD m_resultVarName;
	DWORD m_bSaveToGroup;
} CSosGroupActionMemberCountEnvelopeSchema;

inline struct CVoiceContainerSwitchOffsets {
	DWORD m_soundsToPlay;
} CVoiceContainerSwitch;

inline struct CSosGroupActionTimeLimitSchemaOffsets {
	DWORD m_flMaxDuration;
} CSosGroupActionTimeLimitSchema;

inline struct VMixVocoderDesc_tOffsets {
	DWORD m_nBandCount;
	DWORD m_flBandwidth;
	DWORD m_fldBModGain;
	DWORD m_flFreqRangeStart;
	DWORD m_flFreqRangeEnd;
	DWORD m_fldBUnvoicedGain;
	DWORD m_flAttackTimeMS;
	DWORD m_flReleaseTimeMS;
	DWORD m_nDebugBand;
	DWORD m_bPeakMode;
} VMixVocoderDesc_t;

inline struct VMixUtilityDesc_tOffsets {
	DWORD m_nOp;
	DWORD m_flInputPan;
	DWORD m_flOutputBalance;
	DWORD m_fldbOutputGain;
	DWORD m_bBassMono;
	DWORD m_flBassFreq;
} VMixUtilityDesc_t;

inline struct CVoiceContainerLoopTriggerOffsets {
	DWORD m_sound;
	DWORD m_flRetriggerTimeMin;
	DWORD m_flRetriggerTimeMax;
	DWORD m_flFadeTime;
	DWORD m_bCrossFade;
} CVoiceContainerLoopTrigger;

inline struct CVoiceContainerDecayingSineWaveOffsets {
	DWORD m_flFrequency;
	DWORD m_flDecayTime;
} CVoiceContainerDecayingSineWave;

inline struct VMixFilterDesc_tOffsets {
	DWORD m_nFilterType;
	DWORD m_nFilterSlope;
	DWORD m_bEnabled;
	DWORD m_fldbGain;
	DWORD m_flCutoffFreq;
	DWORD m_flQ;
} VMixFilterDesc_t;

inline struct VMixOscDesc_tOffsets {
	DWORD oscType;
	DWORD m_freq;
	DWORD m_flPhase;
} VMixOscDesc_t;

inline struct VMixDynamicsDesc_tOffsets {
	DWORD m_fldbGain;
	DWORD m_fldbNoiseGateThreshold;
	DWORD m_fldbCompressionThreshold;
	DWORD m_fldbLimiterThreshold;
	DWORD m_fldbKneeWidth;
	DWORD m_flRatio;
	DWORD m_flLimiterRatio;
	DWORD m_flAttackTimeMS;
	DWORD m_flReleaseTimeMS;
	DWORD m_flRMSTimeMS;
	DWORD m_flWetMix;
	DWORD m_bPeakMode;
} VMixDynamicsDesc_t;

inline struct SteamAudioReverbClusteringSettings_tOffsets {
	DWORD m_bEnableClustering;
	DWORD m_nCubeMapResolution;
	DWORD m_flDepthThreshold;
} SteamAudioReverbClusteringSettings_t;

inline struct SteamAudioCustomDataDimensionsSettings_tOffsets {
	DWORD m_nAmbisonicsOrderOutsideField;
	DWORD m_nAmbisonicsOrderInsideSizeField;
	DWORD m_flOutsideThreshold;
	DWORD m_flSizeThreshold;
	DWORD m_flInsideThreshold;
} SteamAudioCustomDataDimensionsSettings_t;

inline struct SteamAudioPathSettings_tOffsets {
	DWORD m_nNumVisSamples;
	DWORD m_flProbeVisRadius;
	DWORD m_flProbeVisThreshold;
	DWORD m_flProbePathRange;
} SteamAudioPathSettings_t;

inline struct CSteamAudioAmbisonicsFieldOffsets {
	DWORD m_field;
} CSteamAudioAmbisonicsField;

inline struct CSteamAudioBakedPathingDataOffsets {
	DWORD m_nBands;
	DWORD m_probes;
} CSteamAudioBakedPathingData;

inline struct SteamAudioReverbSettings_tOffsets {
	DWORD m_nNumRays;
	DWORD m_nNumBounces;
	DWORD m_flIRDuration;
	DWORD m_nAmbisonicsOrder;
} SteamAudioReverbSettings_t;

inline struct CSteamAudioProbeDataOffsets {
	DWORD m_pProbeBatch;
} CSteamAudioProbeData;

inline struct SteamAudioReverbCompressionSettings_tOffsets {
	DWORD m_bEnableCompression;
} SteamAudioReverbCompressionSettings_t;

inline struct CSteamAudioBakedMaterialsDataOffsets {
	DWORD m_probes;
	DWORD m_vecMaterialTokens;
	DWORD m_vecMaterialWeights;
} CSteamAudioBakedMaterialsData;

inline struct CSteamAudioBakedOcclusionDataOffsets {
	DWORD m_settings;
	DWORD m_probes;
	DWORD m_vecPathingRatio;
	DWORD m_vecPathingDeviation;
	DWORD m_vecReflectionRatio;
} CSteamAudioBakedOcclusionData;

inline struct CSteamAudioBakedReverbDataOffsets {
	DWORD m_nBands;
	DWORD m_probes;
	DWORD m_grid;
	DWORD m_reverbSettings;
	DWORD m_reverbClusteringSettings;
	DWORD m_reverbCompressionSettings;
	DWORD m_clusteredProbes;
	DWORD m_vecClusterForProbe;
	DWORD m_compressedData;
	DWORD m_compressedClusteredData;
	DWORD m_vecMovableReverbs;
	DWORD m_vecMovableReverbInitialTransforms;
	DWORD m_vecMovableReverbAABBs;
	DWORD m_vecMovableReverbKeys;
	DWORD m_vecMovableReverbKeyTokens;
	DWORD m_vecMovableReverbTransforms;
	DWORD m_vecMovableReverbOBBs;
} CSteamAudioBakedReverbData;

inline struct CSteamAudioProbeLineSegmentOffsets {
	DWORD m_vStart;
	DWORD m_vEnd;
	DWORD m_vecIntervals;
	DWORD m_vecProbeIndices;
} CSteamAudioProbeLineSegment;

inline struct SteamAudioCustomDataOcclusionSettings_tOffsets {
	DWORD m_bEnablePathing;
	DWORD m_bEnableReflections;
	DWORD m_nReflectionRays;
	DWORD m_nReflectionBounces;
} SteamAudioCustomDataOcclusionSettings_t;

inline struct CSteamAudioBakedDimensionsDataOffsets {
	DWORD m_settings;
	DWORD m_probes;
	DWORD m_vecInOut;
	DWORD m_vecSize;
	DWORD m_vecOutsideField;
	DWORD m_vecInsideSmallSizeField;
} CSteamAudioBakedDimensionsData;

inline struct CSteamAudioProbeGridOffsets {
	DWORD m_aabb;
	DWORD m_flSpacing;
	DWORD m_nx;
	DWORD m_ny;
	DWORD m_nz;
	DWORD m_vecLineSegments;
	DWORD m_vecProbes;
} CSteamAudioProbeGrid;

inline struct CSteamAudioCompressedReverbOffsets {
	DWORD m_nChannels;
	DWORD m_nBands;
	DWORD m_nBins;
	DWORD m_nProbes;
	DWORD m_vecNumSingularValues;
	DWORD m_vecDictionary;
	DWORD m_vecCompressedData;
	DWORD m_pCompressedData;
} CSteamAudioCompressedReverb;

inline struct RnSphereDesc_tOffsets {
	DWORD m_Sphere;
} RnSphereDesc_t;

inline struct RnSoftbodyParticle_tOffsets {
	DWORD m_flMassInv;
} RnSoftbodyParticle_t;

inline struct RnHullDesc_tOffsets {
	DWORD m_Hull;
} RnHullDesc_t;

inline struct RnCapsuleDesc_tOffsets {
	DWORD m_Capsule;
} RnCapsuleDesc_t;

inline struct PhysFeModelDesc_tOffsets {
	DWORD m_CtrlHash;
	DWORD m_CtrlName;
	DWORD m_nStaticNodeFlags;
	DWORD m_nDynamicNodeFlags;
	DWORD m_flLocalForce;
	DWORD m_flLocalRotation;
	DWORD m_nNodeCount;
	DWORD m_nStaticNodes;
	DWORD m_nRotLockStaticNodes;
	DWORD m_nFirstPositionDrivenNode;
	DWORD m_nSimdTriCount1;
	DWORD m_nSimdTriCount2;
	DWORD m_nSimdQuadCount1;
	DWORD m_nSimdQuadCount2;
	DWORD m_nQuadCount1;
	DWORD m_nQuadCount2;
	DWORD m_nTreeDepth;
	DWORD m_nNodeBaseJiggleboneDependsCount;
	DWORD m_nRopeCount;
	DWORD m_Ropes;
	DWORD m_NodeBases;
	DWORD m_SimdNodeBases;
	DWORD m_Quads;
	DWORD m_SimdQuads;
	DWORD m_SimdTris;
	DWORD m_SimdRods;
	DWORD m_SimdRodsAnim;
	DWORD m_InitPose;
	DWORD m_Rods;
	DWORD m_Twists;
	DWORD m_HingeLimits;
	DWORD m_AntiTunnelBytecode;
	DWORD m_DynKinLinks;
	DWORD m_AntiTunnelProbes;
	DWORD m_AntiTunnelTargetNodes;
	DWORD m_AxialEdges;
	DWORD m_NodeInvMasses;
	DWORD m_CtrlOffsets;
	DWORD m_CtrlOsOffsets;
	DWORD m_FollowNodes;
	DWORD m_CollisionPlanes;
	DWORD m_NodeIntegrator;
	DWORD m_SpringIntegrator;
	DWORD m_SimdSpringIntegrator;
	DWORD m_WorldCollisionParams;
	DWORD m_LegacyStretchForce;
	DWORD m_NodeCollisionRadii;
	DWORD m_DynNodeFriction;
	DWORD m_LocalRotation;
	DWORD m_LocalForce;
	DWORD m_TaperedCapsuleStretches;
	DWORD m_TaperedCapsuleRigids;
	DWORD m_SphereRigids;
	DWORD m_WorldCollisionNodes;
	DWORD m_TreeParents;
	DWORD m_TreeCollisionMasks;
	DWORD m_TreeChildren;
	DWORD m_FreeNodes;
	DWORD m_FitMatrices;
	DWORD m_FitWeights;
	DWORD m_ReverseOffsets;
	DWORD m_AnimStrayRadii;
	DWORD m_SimdAnimStrayRadii;
	DWORD m_KelagerBends;
	DWORD m_CtrlSoftOffsets;
	DWORD m_JiggleBones;
	DWORD m_SourceElems;
	DWORD m_GoalDampedSpringIntegrators;
	DWORD m_Tris;
	DWORD m_nTriCount1;
	DWORD m_nTriCount2;
	DWORD m_nReservedUint8;
	DWORD m_nExtraPressureIterations;
	DWORD m_nExtraGoalIterations;
	DWORD m_nExtraIterations;
	DWORD m_SDFRigids;
	DWORD m_BoxRigids;
	DWORD m_DynNodeVertexSet;
	DWORD m_VertexSetNames;
	DWORD m_RigidColliderPriorities;
	DWORD m_MorphLayers;
	DWORD m_MorphSetData;
	DWORD m_VertexMaps;
	DWORD m_VertexMapValues;
	DWORD m_Effects;
	DWORD m_LockToParent;
	DWORD m_LockToGoal;
	DWORD m_SkelParents;
	DWORD m_DynNodeWindBases;
	DWORD m_flInternalPressure;
	DWORD m_flDefaultTimeDilation;
	DWORD m_flWindage;
	DWORD m_flWindDrag;
	DWORD m_flDefaultSurfaceStretch;
	DWORD m_flDefaultThreadStretch;
	DWORD m_flDefaultGravityScale;
	DWORD m_flDefaultVelAirDrag;
	DWORD m_flDefaultExpAirDrag;
	DWORD m_flDefaultVelQuadAirDrag;
	DWORD m_flDefaultExpQuadAirDrag;
	DWORD m_flRodVelocitySmoothRate;
	DWORD m_flQuadVelocitySmoothRate;
	DWORD m_flAddWorldCollisionRadius;
	DWORD m_flDefaultVolumetricSolveAmount;
	DWORD m_flMotionSmoothCDT;
	DWORD m_flLocalDrag1;
	DWORD m_nRodVelocitySmoothIterations;
	DWORD m_nQuadVelocitySmoothIterations;
} PhysFeModelDesc_t;

inline struct RnMeshDesc_tOffsets {
	DWORD m_Mesh;
} RnMeshDesc_t;

inline struct RnSoftbodySpring_tOffsets {
	DWORD m_nParticle;
	DWORD m_flLength;
} RnSoftbodySpring_t;

inline struct RnSoftbodyCapsule_tOffsets {
	DWORD m_vCenter;
	DWORD m_flRadius;
	DWORD m_nParticle;
} RnSoftbodyCapsule_t;

inline struct vphysics_save_cphysicsbody_tOffsets {
	DWORD m_nOldPointer;
} vphysics_save_cphysicsbody_t;

inline struct FeBuildBoxRigid_tOffsets {
	DWORD m_nPriority;
	DWORD m_nVertexMapHash;
	DWORD m_nAntitunnelGroupBits;
} FeBuildBoxRigid_t;

inline struct CFeIndexedJiggleBoneOffsets {
	DWORD m_nNode;
	DWORD m_nJiggleParent;
	DWORD m_jiggleBone;
} CFeIndexedJiggleBone;

inline struct FeBandBendLimit_tOffsets {
	DWORD flDistMin;
	DWORD flDistMax;
	DWORD nNode;
} FeBandBendLimit_t;

inline struct FeTaperedCapsuleStretch_tOffsets {
	DWORD nNode;
	DWORD nCollisionMask;
	DWORD nDummy;
	DWORD flRadius;
} FeTaperedCapsuleStretch_t;

inline struct constraint_axislimit_tOffsets {
	DWORD flMinRotation;
	DWORD flMaxRotation;
	DWORD flMotorTargetAngSpeed;
	DWORD flMotorMaxTorque;
} constraint_axislimit_t;

inline struct FeSimdRodConstraintAnim_tOffsets {
	DWORD nNode;
	DWORD f4Weight0;
	DWORD f4RelaxationFactor;
} FeSimdRodConstraintAnim_t;

inline struct FeSimdRodConstraint_tOffsets {
	DWORD nNode;
	DWORD f4MaxDist;
	DWORD f4MinDist;
	DWORD f4Weight0;
	DWORD f4RelaxationFactor;
} FeSimdRodConstraint_t;

inline struct constraint_hingeparams_tOffsets {
	DWORD worldPosition;
	DWORD worldAxisDirection;
	DWORD hingeAxis;
	DWORD constraint;
} constraint_hingeparams_t;

inline struct FeBuildSphereRigid_tOffsets {
	DWORD m_nPriority;
	DWORD m_nVertexMapHash;
	DWORD m_nAntitunnelGroupBits;
} FeBuildSphereRigid_t;

inline struct FeSimdAnimStrayRadius_tOffsets {
	DWORD nNode;
	DWORD flMaxDist;
	DWORD flRelaxationFactor;
} FeSimdAnimStrayRadius_t;

inline struct RnTriangle_tOffsets {
	DWORD m_nIndex;
} RnTriangle_t;

inline struct FeProxyVertexMap_tOffsets {
	DWORD m_Name;
	DWORD m_flWeight;
} FeProxyVertexMap_t;

inline struct FeNodeIntegrator_tOffsets {
	DWORD flPointDamping;
	DWORD flAnimationForceAttraction;
	DWORD flAnimationVertexAttraction;
	DWORD flGravity;
} FeNodeIntegrator_t;

inline struct RnCapsule_tOffsets {
	DWORD m_vCenter;
	DWORD m_flRadius;
} RnCapsule_t;

inline struct CFeNamedJiggleBoneOffsets {
	DWORD m_strParentBone;
	DWORD m_transform;
	DWORD m_nJiggleParent;
	DWORD m_jiggleBone;
} CFeNamedJiggleBone;

inline struct FeAntiTunnelProbeBuild_tOffsets {
	DWORD flWeight;
	DWORD flActivationDistance;
	DWORD flBias;
	DWORD flCurvature;
	DWORD nFlags;
	DWORD nProbeNode;
	DWORD targetNodes;
} FeAntiTunnelProbeBuild_t;

inline struct RnBodyDesc_tOffsets {
	DWORD m_sDebugName;
	DWORD m_vPosition;
	DWORD m_qOrientation;
	DWORD m_vLinearVelocity;
	DWORD m_vAngularVelocity;
	DWORD m_vLocalMassCenter;
	DWORD m_LocalInertiaInv;
	DWORD m_flMassInv;
	DWORD m_flGameMass;
	DWORD m_flMassScaleInv;
	DWORD m_flInertiaScaleInv;
	DWORD m_flLinearDamping;
	DWORD m_flAngularDamping;
	DWORD m_flLinearDrag;
	DWORD m_flAngularDrag;
	DWORD m_flLinearBuoyancyDrag;
	DWORD m_flAngularBuoyancyDrag;
	DWORD m_vLastAwakeForceAccum;
	DWORD m_vLastAwakeTorqueAccum;
	DWORD m_flBuoyancyFactor;
	DWORD m_flGravityScale;
	DWORD m_flTimeScale;
	DWORD m_nBodyType;
	DWORD m_nGameIndex;
	DWORD m_nGameFlags;
	DWORD m_nMinVelocityIterations;
	DWORD m_nMinPositionIterations;
	DWORD m_nMassPriority;
	DWORD m_bEnabled;
	DWORD m_bSleeping;
	DWORD m_bIsContinuousEnabled;
	DWORD m_bDragEnabled;
	DWORD m_bBuoyancyDragEnabled;
	DWORD m_vGravity;
	DWORD m_bSpeculativeEnabled;
	DWORD m_bHasShadowController;
	DWORD m_nDynamicContinuousContactBehavior;
} RnBodyDesc_t;

inline struct OldFeEdge_tOffsets {
	DWORD m_flK;
	DWORD invA;
	DWORD t;
	DWORD flThetaRelaxed;
	DWORD flThetaFactor;
	DWORD c01;
	DWORD c02;
	DWORD c03;
	DWORD c04;
	DWORD flAxialModelDist;
	DWORD flAxialModelWeights;
	DWORD m_nNode;
} OldFeEdge_t;

inline struct FeFollowNode_tOffsets {
	DWORD nParentNode;
	DWORD nChildNode;
	DWORD flWeight;
} FeFollowNode_t;

inline struct RnMesh_tOffsets {
	DWORD m_vMin;
	DWORD m_vMax;
	DWORD m_Nodes;
	DWORD m_Vertices;
	DWORD m_Triangles;
	DWORD m_Wings;
	DWORD m_TriangleEdgeFlags;
	DWORD m_Materials;
	DWORD m_vOrthographicAreas;
	DWORD m_nFlags;
	DWORD m_nDebugFlags;
} RnMesh_t;

inline struct VertexPositionNormal_tOffsets {
	DWORD m_vPosition;
	DWORD m_vNormal;
} VertexPositionNormal_t;

inline struct FeBuildSDFRigid_tOffsets {
	DWORD m_nPriority;
	DWORD m_nVertexMapHash;
	DWORD m_nAntitunnelGroupBits;
} FeBuildSDFRigid_t;

inline struct RnBlendVertex_tOffsets {
	DWORD m_nWeight0;
	DWORD m_nIndex0;
	DWORD m_nWeight1;
	DWORD m_nIndex1;
	DWORD m_nWeight2;
	DWORD m_nIndex2;
	DWORD m_nFlags;
	DWORD m_nTargetIndex;
} RnBlendVertex_t;

inline struct CFeMorphLayerOffsets {
	DWORD m_Name;
	DWORD m_nNameHash;
	DWORD m_Nodes;
	DWORD m_InitPos;
	DWORD m_Gravity;
	DWORD m_GoalStrength;
	DWORD m_GoalDamping;
} CFeMorphLayer;

inline struct FeCtrlSoftOffset_tOffsets {
	DWORD nCtrlParent;
	DWORD nCtrlChild;
	DWORD vOffset;
	DWORD flAlpha;
} FeCtrlSoftOffset_t;

inline struct FeVertexMapDesc_tOffsets {
	DWORD sName;
	DWORD nNameHash;
	DWORD nColor;
	DWORD nFlags;
	DWORD nVertexBase;
	DWORD nVertexCount;
	DWORD nMapOffset;
	DWORD nNodeListOffset;
	DWORD vCenterOfMass;
	DWORD flVolumetricSolveStrength;
	DWORD nScaleSourceNode;
	DWORD nNodeListCount;
} FeVertexMapDesc_t;

inline struct FeTaperedCapsuleRigid_tOffsets {
	DWORD vSphere;
	DWORD nNode;
	DWORD nCollisionMask;
	DWORD nVertexMapIndex;
	DWORD nFlags;
} FeTaperedCapsuleRigid_t;

inline struct FeAnimStrayRadius_tOffsets {
	DWORD nNode;
	DWORD flMaxDist;
	DWORD flRelaxationFactor;
} FeAnimStrayRadius_t;

inline struct FeEdgeDesc_tOffsets {
	DWORD nEdge;
	DWORD nSide;
	DWORD nVirtElem;
} FeEdgeDesc_t;

inline struct FeNodeReverseOffset_tOffsets {
	DWORD vOffset;
	DWORD nBoneCtrl;
	DWORD nTargetNode;
} FeNodeReverseOffset_t;

inline struct RnPlane_tOffsets {
	DWORD m_vNormal;
	DWORD m_flOffset;
} RnPlane_t;

inline struct FeSDFRigid_tOffsets {
	DWORD vLocalMin;
	DWORD vLocalMax;
	DWORD flBounciness;
	DWORD nNode;
	DWORD nCollisionMask;
	DWORD nVertexMapIndex;
	DWORD nFlags;
	DWORD m_Distances;
	DWORD m_nWidth;
	DWORD m_nHeight;
	DWORD m_nDepth;
} FeSDFRigid_t;

inline struct CFeJiggleBoneOffsets {
	DWORD m_nFlags;
	DWORD m_flLength;
	DWORD m_flTipMass;
	DWORD m_flYawStiffness;
	DWORD m_flYawDamping;
	DWORD m_flPitchStiffness;
	DWORD m_flPitchDamping;
	DWORD m_flAlongStiffness;
	DWORD m_flAlongDamping;
	DWORD m_flAngleLimit;
	DWORD m_flMinYaw;
	DWORD m_flMaxYaw;
	DWORD m_flYawFriction;
	DWORD m_flYawBounce;
	DWORD m_flMinPitch;
	DWORD m_flMaxPitch;
	DWORD m_flPitchFriction;
	DWORD m_flPitchBounce;
	DWORD m_flBaseMass;
	DWORD m_flBaseStiffness;
	DWORD m_flBaseDamping;
	DWORD m_flBaseMinLeft;
	DWORD m_flBaseMaxLeft;
	DWORD m_flBaseLeftFriction;
	DWORD m_flBaseMinUp;
	DWORD m_flBaseMaxUp;
	DWORD m_flBaseUpFriction;
	DWORD m_flBaseMinForward;
	DWORD m_flBaseMaxForward;
	DWORD m_flBaseForwardFriction;
	DWORD m_flRadius0;
	DWORD m_flRadius1;
	DWORD m_vPoint0;
	DWORD m_vPoint1;
	DWORD m_nCollisionMask;
} CFeJiggleBone;

inline struct CRegionSVMOffsets {
	DWORD m_Planes;
	DWORD m_Nodes;
} CRegionSVM;

inline struct FeWorldCollisionParams_tOffsets {
	DWORD flWorldFriction;
	DWORD flGroundFriction;
	DWORD nListBegin;
	DWORD nListEnd;
} FeWorldCollisionParams_t;

inline struct RnNode_tOffsets {
	DWORD m_vMin;
	DWORD m_nChildren;
	DWORD m_vMax;
	DWORD m_nTriangleOffset;
} RnNode_t;

inline struct FeFitMatrix_tOffsets {
	DWORD bone;
	DWORD vCenter;
	DWORD nEnd;
	DWORD nNode;
	DWORD nBeginDynamic;
} FeFitMatrix_t;

inline struct FeSimdQuad_tOffsets {
	DWORD nNode;
	DWORD f4Slack;
	DWORD vShape;
	DWORD f4Weights;
} FeSimdQuad_t;

inline struct FeSimdSpringIntegrator_tOffsets {
	DWORD nNode;
	DWORD flSpringRestLength;
	DWORD flSpringConstant;
	DWORD flSpringDamping;
	DWORD flNodeWeight0;
} FeSimdSpringIntegrator_t;

inline struct FeSimdNodeBase_tOffsets {
	DWORD nNode;
	DWORD nNodeX0;
	DWORD nNodeX1;
	DWORD nNodeY0;
	DWORD nNodeY1;
	DWORD nDummy;
	DWORD qAdjust;
} FeSimdNodeBase_t;

inline struct FeQuad_tOffsets {
	DWORD nNode;
	DWORD flSlack;
	DWORD vShape;
} FeQuad_t;

inline struct FeHingeLimit_tOffsets {
	DWORD nNode;
	DWORD nFlags;
	DWORD flWeight4;
	DWORD flWeight5;
	DWORD flAngleCenter;
	DWORD flAngleExtents;
} FeHingeLimit_t;

inline struct RnWing_tOffsets {
	DWORD m_nIndex;
} RnWing_t;

inline struct FeWeightedNode_tOffsets {
	DWORD nNode;
	DWORD nWeight;
} FeWeightedNode_t;

inline struct FeEffectDesc_tOffsets {
	DWORD sName;
	DWORD nNameHash;
	DWORD nType;
	DWORD m_Params;
} FeEffectDesc_t;

inline struct FeSpringIntegrator_tOffsets {
	DWORD nNode;
	DWORD flSpringRestLength;
	DWORD flSpringConstant;
	DWORD flSpringDamping;
	DWORD flNodeWeight0;
} FeSpringIntegrator_t;

inline struct FourVectors2DOffsets {
	DWORD x;
	DWORD y;
} FourVectors2D;

inline struct FeKelagerBend2_tOffsets {
	DWORD flWeight;
	DWORD flHeight0;
	DWORD nNode;
	DWORD nReserved;
} FeKelagerBend2_t;

inline struct CastSphereSATParams_tOffsets {
	DWORD m_vRayStart;
	DWORD m_vRayDelta;
	DWORD m_flRadius;
	DWORD m_flMaxFraction;
	DWORD m_flScale;
	DWORD m_pHull;
} CastSphereSATParams_t;

inline struct FeRigidColliderIndices_tOffsets {
	DWORD m_nTaperedCapsuleRigidIndex;
	DWORD m_nSphereRigidIndex;
	DWORD m_nBoxRigidIndex;
	DWORD m_nSDFRigidIndex;
	DWORD m_nCollisionPlaneIndex;
} FeRigidColliderIndices_t;

inline struct FeCollisionPlane_tOffsets {
	DWORD nCtrlParent;
	DWORD nChildNode;
	DWORD m_Plane;
	DWORD flStrength;
} FeCollisionPlane_t;

inline struct FeStiffHingeBuild_tOffsets {
	DWORD flMaxAngle;
	DWORD flStrength;
	DWORD flMotionBias;
	DWORD nNode;
} FeStiffHingeBuild_t;

inline struct FeBoxRigid_tOffsets {
	DWORD tmFrame2;
	DWORD nNode;
	DWORD nCollisionMask;
	DWORD vSize;
	DWORD nVertexMapIndex;
	DWORD nFlags;
} FeBoxRigid_t;

inline struct FeMorphLayerDepr_tOffsets {
	DWORD m_Name;
	DWORD m_nNameHash;
	DWORD m_Nodes;
	DWORD m_InitPos;
	DWORD m_Gravity;
	DWORD m_GoalStrength;
	DWORD m_GoalDamping;
	DWORD m_nFlags;
} FeMorphLayerDepr_t;

inline struct FeCtrlOffset_tOffsets {
	DWORD vOffset;
	DWORD nCtrlParent;
	DWORD nCtrlChild;
} FeCtrlOffset_t;

inline struct FeNodeBase_tOffsets {
	DWORD nNode;
	DWORD nDummy;
	DWORD nNodeX0;
	DWORD nNodeX1;
	DWORD nNodeY0;
	DWORD nNodeY1;
	DWORD qAdjust;
} FeNodeBase_t;

inline struct FeVertexMapBuild_tOffsets {
	DWORD m_VertexMapName;
	DWORD m_nNameHash;
	DWORD m_Color;
	DWORD m_flVolumetricSolveStrength;
	DWORD m_nScaleSourceNode;
	DWORD m_Weights;
} FeVertexMapBuild_t;

inline struct CFeVertexMapBuildArrayOffsets {
	DWORD m_Array;
} CFeVertexMapBuildArray;

inline struct FeTri_tOffsets {
	DWORD nNode;
	DWORD w1;
	DWORD w2;
	DWORD v1x;
	DWORD v2;
} FeTri_t;

inline struct RnHull_tOffsets {
	DWORD m_vCentroid;
	DWORD m_flMaxAngularRadius;
	DWORD m_Bounds;
	DWORD m_vOrthographicAreas;
	DWORD m_MassProperties;
	DWORD m_flVolume;
	DWORD m_flSurfaceArea;
	DWORD m_Vertices;
	DWORD m_VertexPositions;
	DWORD m_Edges;
	DWORD m_Faces;
	DWORD m_FacePlanes;
	DWORD m_nFlags;
	DWORD m_pRegionSVM;
} RnHull_t;

inline struct FeAntiTunnelGroupBuild_tOffsets {
	DWORD m_nVertexMapHash;
	DWORD m_nCollisionMask;
} FeAntiTunnelGroupBuild_t;

inline struct CovMatrix3Offsets {
	DWORD m_vDiag;
	DWORD m_flXY;
	DWORD m_flXZ;
	DWORD m_flYZ;
} CovMatrix3;

inline struct PhysicsParticleId_tOffsets {
	DWORD m_Value;
} PhysicsParticleId_t;

inline struct RnVertex_tOffsets {
	DWORD m_nEdge;
} RnVertex_t;

inline struct Dop26_tOffsets {
	DWORD m_flSupport;
} Dop26_t;

inline struct FeDynKinLink_tOffsets {
	DWORD m_nParent;
	DWORD m_nChild;
} FeDynKinLink_t;

inline struct RnFace_tOffsets {
	DWORD m_nEdge;
} RnFace_t;

inline struct FeCtrlOsOffset_tOffsets {
	DWORD nCtrlParent;
	DWORD nCtrlChild;
} FeCtrlOsOffset_t;

inline struct FeAntiTunnelProbe_tOffsets {
	DWORD flWeight;
	DWORD nFlags;
	DWORD nProbeNode;
	DWORD nCount;
	DWORD nBegin;
	DWORD flActivationDistance;
	DWORD flCurvatureRadius;
	DWORD flBias;
} FeAntiTunnelProbe_t;

inline struct FeSourceEdge_tOffsets {
	DWORD nNode;
} FeSourceEdge_t;

inline struct FeTwistConstraint_tOffsets {
	DWORD nNodeOrient;
	DWORD nNodeEnd;
	DWORD flTwistRelax;
	DWORD flSwingRelax;
} FeTwistConstraint_t;

inline struct FeNodeWindBase_tOffsets {
	DWORD nNodeX0;
	DWORD nNodeX1;
	DWORD nNodeY0;
	DWORD nNodeY1;
} FeNodeWindBase_t;

inline struct FeAxialEdgeBend_tOffsets {
	DWORD te;
	DWORD tv;
	DWORD flDist;
	DWORD flWeight;
	DWORD nNode;
} FeAxialEdgeBend_t;

inline struct FourCovMatrices3Offsets {
	DWORD m_vDiag;
	DWORD m_flXY;
	DWORD m_flXZ;
	DWORD m_flYZ;
} FourCovMatrices3;

inline struct constraint_breakableparams_tOffsets {
	DWORD strength;
	DWORD forceLimit;
	DWORD torqueLimit;
	DWORD bodyMassScale;
	DWORD isActive;
} constraint_breakableparams_t;

inline struct FeSphereRigid_tOffsets {
	DWORD vSphere;
	DWORD nNode;
	DWORD nCollisionMask;
	DWORD nVertexMapIndex;
	DWORD nFlags;
} FeSphereRigid_t;

inline struct FeBuildTaperedCapsuleRigid_tOffsets {
	DWORD m_nPriority;
	DWORD m_nVertexMapHash;
	DWORD m_nAntitunnelGroupBits;
} FeBuildTaperedCapsuleRigid_t;

inline struct FeSoftParent_tOffsets {
	DWORD nParent;
	DWORD flAlpha;
} FeSoftParent_t;

inline struct RnShapeDesc_tOffsets {
	DWORD m_nCollisionAttributeIndex;
	DWORD m_nSurfacePropertyIndex;
	DWORD m_UserFriendlyName;
	DWORD m_bUserFriendlyNameSealed;
	DWORD m_bUserFriendlyNameLong;
	DWORD m_nToolMaterialHash;
} RnShapeDesc_t;

inline struct FeTreeChildren_tOffsets {
	DWORD nChild;
} FeTreeChildren_t;

inline struct FeRodConstraint_tOffsets {
	DWORD nNode;
	DWORD flMaxDist;
	DWORD flMinDist;
	DWORD flWeight0;
	DWORD flRelaxationFactor;
} FeRodConstraint_t;

inline struct FeFitWeight_tOffsets {
	DWORD flWeight;
	DWORD nNode;
	DWORD nDummy;
} FeFitWeight_t;

inline struct RnHalfEdge_tOffsets {
	DWORD m_nNext;
	DWORD m_nTwin;
	DWORD m_nOrigin;
	DWORD m_nFace;
} RnHalfEdge_t;

inline struct FeSimdTri_tOffsets {
	DWORD nNode;
	DWORD w1;
	DWORD w2;
	DWORD v1x;
	DWORD v2;
} FeSimdTri_t;

inline struct VertexPositionColor_tOffsets {
	DWORD m_vPosition;
} VertexPositionColor_t;

inline struct FeFitInfluence_tOffsets {
	DWORD nVertexNode;
	DWORD flWeight;
	DWORD nMatrixNode;
} FeFitInfluence_t;

inline struct FeHingeLimitBuild_tOffsets {
	DWORD nNode;
	DWORD nFlags;
	DWORD flLimitCW;
	DWORD flLimitCCW;
} FeHingeLimitBuild_t;

inline struct AggregateVertexAlbedoStreamOnDiskData_tOffsets {
	DWORD m_BufferData;
} AggregateVertexAlbedoStreamOnDiskData_t;

inline struct SceneObject_tOffsets {
	DWORD m_nObjectID;
	DWORD m_vTransform;
	DWORD m_flFadeStartDistance;
	DWORD m_flFadeEndDistance;
	DWORD m_vTintColor;
	DWORD m_skin;
	DWORD m_nObjectTypeFlags;
	DWORD m_vLightingOrigin;
	DWORD m_nOverlayRenderOrder;
	DWORD m_nLODOverride;
	DWORD m_nCubeMapPrecomputedHandshake;
	DWORD m_nLightProbeVolumePrecomputedHandshake;
	DWORD m_renderableModel;
	DWORD m_renderable;
} SceneObject_t;

inline struct AggregateLODSetup_tOffsets {
	DWORD m_vLODOrigin;
	DWORD m_fMaxObjectScale;
	DWORD m_fSwitchDistances;
} AggregateLODSetup_t;

inline struct ExtraVertexStreamOverride_tOffsets {
	DWORD m_nSubSceneObject;
	DWORD m_nDrawCallIndex;
	DWORD m_nAdditionalMeshDrawPrimitiveFlags;
	DWORD m_extraBufferBinding;
} ExtraVertexStreamOverride_t;

inline struct ClutterTile_tOffsets {
	DWORD m_nFirstInstance;
	DWORD m_nLastInstance;
	DWORD m_BoundsWs;
} ClutterTile_t;

inline struct AggregateSceneObject_tOffsets {
	DWORD m_allFlags;
	DWORD m_anyFlags;
	DWORD m_nLayer;
	DWORD m_instanceStream;
	DWORD m_vertexAlbedoStream;
	DWORD m_aggregateMeshes;
	DWORD m_lodSetups;
	DWORD m_visClusterMembership;
	DWORD m_fragmentTransforms;
	DWORD m_renderableModel;
} AggregateSceneObject_t;

inline struct NodeData_tOffsets {
	DWORD m_nParent;
	DWORD m_vOrigin;
	DWORD m_vMinBounds;
	DWORD m_vMaxBounds;
	DWORD m_flMinimumDistance;
	DWORD m_ChildNodeIndices;
	DWORD m_worldNodePrefix;
} NodeData_t;

inline struct AggregateInstanceStreamOnDiskData_tOffsets {
	DWORD m_DecodedSize;
	DWORD m_BufferData;
} AggregateInstanceStreamOnDiskData_t;

inline struct ClutterSceneObject_tOffsets {
	DWORD m_Bounds;
	DWORD m_flags;
	DWORD m_nLayer;
	DWORD m_instancePositions;
	DWORD m_instanceScales;
	DWORD m_instanceTintSrgb;
	DWORD m_tiles;
	DWORD m_renderableModel;
	DWORD m_materialGroup;
	DWORD m_flBeginCullSize;
	DWORD m_flEndCullSize;
} ClutterSceneObject_t;

inline struct WorldBuilderParams_tOffsets {
	DWORD m_flMinDrawVolumeSize;
	DWORD m_bBuildBakedLighting;
	DWORD m_bAggregateInstanceStreams;
	DWORD m_bakedLightingInfo;
	DWORD m_nCompileTimestamp;
	DWORD m_nCompileFingerprint;
} WorldBuilderParams_t;

inline struct PermEntityLumpData_tOffsets {
	DWORD m_name;
	DWORD m_childLumps;
	DWORD m_entityKeyValues;
} PermEntityLumpData_t;

inline struct WorldNode_tOffsets {
	DWORD m_sceneObjects;
	DWORD m_visClusterMembership;
	DWORD m_aggregateSceneObjects;
	DWORD m_clutterSceneObjects;
	DWORD m_extraVertexStreamOverrides;
	DWORD m_materialOverrides;
	DWORD m_extraVertexStreams;
	DWORD m_aggregateInstanceStreams;
	DWORD m_vertexAlbedoStreams;
	DWORD m_layerNames;
	DWORD m_sceneObjectLayerIndices;
	DWORD m_grassFileName;
	DWORD m_nodeLightingInfo;
	DWORD m_bHasBakedGeometryFlag;
} WorldNode_t;

inline struct BaseSceneObjectOverride_tOffsets {
	DWORD m_nSceneObjectIndex;
} BaseSceneObjectOverride_t;

inline struct EntityIOConnectionData_tOffsets {
	DWORD m_outputName;
	DWORD m_targetType;
	DWORD m_targetName;
	DWORD m_inputName;
	DWORD m_overrideParam;
	DWORD m_flDelay;
	DWORD m_nTimesToFire;
	DWORD m_paramMap;
} EntityIOConnectionData_t;

inline struct BakedLightingInfo_tOffsets {
	DWORD m_nLightmapVersionNumber;
	DWORD m_nLightmapGameVersionNumber;
	DWORD m_vLightmapUvScale;
	DWORD m_bHasLightmaps;
	DWORD m_bBakedShadowsGamma20;
	DWORD m_bCompressionEnabled;
	DWORD m_bSHLightmaps;
	DWORD m_nChartPackIterations;
	DWORD m_nVradQuality;
	DWORD m_lightMaps;
	DWORD m_bakedShadows;
} BakedLightingInfo_t;

inline struct VoxelVisBlockOffset_tOffsets {
	DWORD m_nOffset;
	DWORD m_nElementCount;
} VoxelVisBlockOffset_t;

inline struct WorldNodeOnDiskBufferData_tOffsets {
	DWORD m_nElementCount;
	DWORD m_nElementSizeInBytes;
	DWORD m_inputLayoutFields;
	DWORD m_pData;
} WorldNodeOnDiskBufferData_t;

inline struct AggregateMeshInfo_tOffsets {
	DWORD m_nVisClusterMemberOffset;
	DWORD m_nVisClusterMemberCount;
	DWORD m_bHasTransform;
	DWORD m_nLODGroupMask;
	DWORD m_nDrawCallIndex;
	DWORD m_nLODSetupIndex;
	DWORD m_vTintColor;
	DWORD m_objectFlags;
	DWORD m_nLightProbeVolumePrecomputedHandshake;
	DWORD m_nInstanceStreamOffset;
	DWORD m_nVertexAlbedoStreamOffset;
	DWORD m_instanceStreams;
} AggregateMeshInfo_t;

inline struct World_tOffsets {
	DWORD m_builderParams;
	DWORD m_worldNodes;
	DWORD m_worldLightingInfo;
	DWORD m_entityLumps;
} World_t;

inline struct BakedLightingInfo_t__BakedShadowAssignment_tOffsets {
	DWORD m_nLightHash;
	DWORD m_nMapHash;
	DWORD m_nShadowChannel;
} BakedLightingInfo_t__BakedShadowAssignment_t;

inline struct MaterialOverride_tOffsets {
	DWORD m_nSubSceneObject;
	DWORD m_nDrawCallIndex;
	DWORD m_pMaterial;
	DWORD m_vLinearTintColor;
} MaterialOverride_t;

inline struct EntityKeyValueData_tOffsets {
	DWORD m_connections;
	DWORD m_keyValuesData;
} EntityKeyValueData_t;

inline struct CVoxelVisibilityOffsets {
	DWORD m_nBaseClusterCount;
	DWORD m_nPVSBytesPerCluster;
	DWORD m_vMinBounds;
	DWORD m_vMaxBounds;
	DWORD m_flGridSize;
	DWORD m_nSkyVisibilityCluster;
	DWORD m_nSunVisibilityCluster;
	DWORD m_NodeBlock;
	DWORD m_RegionBlock;
	DWORD m_EnclosedClusterListBlock;
	DWORD m_EnclosedClustersBlock;
	DWORD m_MasksBlock;
	DWORD m_nVisBlocks;
} CVoxelVisibility;

