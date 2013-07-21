/********************************************************************************
 *                                                                              *
 * This file is part of IfcOpenShell.                                           *
 *                                                                              *
 * IfcOpenShell is free software: you can redistribute it and/or modify         *
 * it under the terms of the Lesser GNU General Public License as published by  *
 * the Free Software Foundation, either version 3.0 of the License, or          *
 * (at your option) any later version.                                          *
 *                                                                              *
 * IfcOpenShell is distributed in the hope that it will be useful,              *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of               *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                 *
 * Lesser GNU General Public License for more details.                          *
 *                                                                              *
 * You should have received a copy of the Lesser GNU General Public License     *
 * along with this program. If not, see <http://www.gnu.org/licenses/>.         *
 *                                                                              *
 ********************************************************************************/

/********************************************************************************
 *                                                                              *
 * This file has been generated from IFC2X3_TC1.exp. Do not make modifications  *
 * but instead modify the python script that has been used to generate this.    *
 *                                                                              *
 ********************************************************************************/
 
#ifndef IFC2X3ENUM_H
#define IFC2X3ENUM_H

#include "../ifcparse/ArgumentType.h"

namespace Ifc2x3 {

namespace Type {
    typedef enum {
        IfcAbsorbedDoseMeasure, IfcAccelerationMeasure, IfcActionSourceTypeEnum, IfcActionTypeEnum, IfcActorSelect, IfcActuatorTypeEnum, IfcAddressTypeEnum, IfcAheadOrBehind, IfcAirTerminalBoxTypeEnum, IfcAirTerminalTypeEnum, IfcAirToAirHeatRecoveryTypeEnum, IfcAlarmTypeEnum, IfcAmountOfSubstanceMeasure, IfcAnalysisModelTypeEnum, IfcAnalysisTheoryTypeEnum, IfcAngularVelocityMeasure, IfcAppliedValueSelect, IfcAreaMeasure, IfcArithmeticOperatorEnum, IfcAssemblyPlaceEnum, IfcAxis2Placement, IfcBSplineCurveForm, IfcBeamTypeEnum, IfcBenchmarkEnum, IfcBoilerTypeEnum, IfcBoolean, IfcBooleanOperand, IfcBooleanOperator, IfcBoxAlignment, IfcBuildingElementProxyTypeEnum, IfcCableCarrierFittingTypeEnum, IfcCableCarrierSegmentTypeEnum, IfcCableSegmentTypeEnum, IfcChangeActionEnum, IfcCharacterStyleSelect, IfcChillerTypeEnum, IfcClassificationNotationSelect, IfcCoilTypeEnum, IfcColour, IfcColourOrFactor, IfcColumnTypeEnum, IfcComplexNumber, IfcCompoundPlaneAngleMeasure, IfcCompressorTypeEnum, IfcCondenserTypeEnum, IfcConditionCriterionSelect, IfcConnectionTypeEnum, IfcConstraintEnum, IfcContextDependentMeasure, IfcControllerTypeEnum, IfcCooledBeamTypeEnum, IfcCoolingTowerTypeEnum, IfcCostScheduleTypeEnum, IfcCountMeasure, IfcCoveringTypeEnum, IfcCsgSelect, IfcCurrencyEnum, IfcCurtainWallTypeEnum, IfcCurvatureMeasure, IfcCurveFontOrScaledCurveFontSelect, IfcCurveOrEdgeCurve, IfcCurveStyleFontSelect, IfcDamperTypeEnum, IfcDataOriginEnum, IfcDateTimeSelect, IfcDayInMonthNumber, IfcDaylightSavingHour, IfcDefinedSymbolSelect, IfcDerivedMeasureValue, IfcDerivedUnitEnum, IfcDescriptiveMeasure, IfcDimensionCount, IfcDimensionExtentUsage, IfcDirectionSenseEnum, IfcDistributionChamberElementTypeEnum, IfcDocumentConfidentialityEnum, IfcDocumentSelect, IfcDocumentStatusEnum, IfcDoorPanelOperationEnum, IfcDoorPanelPositionEnum, IfcDoorStyleConstructionEnum, IfcDoorStyleOperationEnum, IfcDoseEquivalentMeasure, IfcDraughtingCalloutElement, IfcDuctFittingTypeEnum, IfcDuctSegmentTypeEnum, IfcDuctSilencerTypeEnum, IfcDynamicViscosityMeasure, IfcElectricApplianceTypeEnum, IfcElectricCapacitanceMeasure, IfcElectricChargeMeasure, IfcElectricConductanceMeasure, IfcElectricCurrentEnum, IfcElectricCurrentMeasure, IfcElectricDistributionPointFunctionEnum, IfcElectricFlowStorageDeviceTypeEnum, IfcElectricGeneratorTypeEnum, IfcElectricHeaterTypeEnum, IfcElectricMotorTypeEnum, IfcElectricResistanceMeasure, IfcElectricTimeControlTypeEnum, IfcElectricVoltageMeasure, IfcElementAssemblyTypeEnum, IfcElementCompositionEnum, IfcEnergyMeasure, IfcEnergySequenceEnum, IfcEnvironmentalImpactCategoryEnum, IfcEvaporativeCoolerTypeEnum, IfcEvaporatorTypeEnum, IfcFanTypeEnum, IfcFillAreaStyleTileShapeSelect, IfcFillStyleSelect, IfcFilterTypeEnum, IfcFireSuppressionTerminalTypeEnum, IfcFlowDirectionEnum, IfcFlowInstrumentTypeEnum, IfcFlowMeterTypeEnum, IfcFontStyle, IfcFontVariant, IfcFontWeight, IfcFootingTypeEnum, IfcForceMeasure, IfcFrequencyMeasure, IfcGasTerminalTypeEnum, IfcGeometricProjectionEnum, IfcGeometricSetSelect, IfcGlobalOrLocalEnum, IfcGloballyUniqueId, IfcHatchLineDistanceSelect, IfcHeatExchangerTypeEnum, IfcHeatFluxDensityMeasure, IfcHeatingValueMeasure, IfcHourInDay, IfcHumidifierTypeEnum, IfcIdentifier, IfcIlluminanceMeasure, IfcInductanceMeasure, IfcInteger, IfcIntegerCountRateMeasure, IfcInternalOrExternalEnum, IfcInventoryTypeEnum, IfcIonConcentrationMeasure, IfcIsothermalMoistureCapacityMeasure, IfcJunctionBoxTypeEnum, IfcKinematicViscosityMeasure, IfcLabel, IfcLampTypeEnum, IfcLayerSetDirectionEnum, IfcLayeredItem, IfcLengthMeasure, IfcLibrarySelect, IfcLightDistributionCurveEnum, IfcLightDistributionDataSourceSelect, IfcLightEmissionSourceEnum, IfcLightFixtureTypeEnum, IfcLinearForceMeasure, IfcLinearMomentMeasure, IfcLinearStiffnessMeasure, IfcLinearVelocityMeasure, IfcLoadGroupTypeEnum, IfcLogical, IfcLogicalOperatorEnum, IfcLuminousFluxMeasure, IfcLuminousIntensityDistributionMeasure, IfcLuminousIntensityMeasure, IfcMagneticFluxDensityMeasure, IfcMagneticFluxMeasure, IfcMassDensityMeasure, IfcMassFlowRateMeasure, IfcMassMeasure, IfcMassPerLengthMeasure, IfcMaterialSelect, IfcMeasureValue, IfcMemberTypeEnum, IfcMetricValueSelect, IfcMinuteInHour, IfcModulusOfElasticityMeasure, IfcModulusOfLinearSubgradeReactionMeasure, IfcModulusOfRotationalSubgradeReactionMeasure, IfcModulusOfSubgradeReactionMeasure, IfcMoistureDiffusivityMeasure, IfcMolecularWeightMeasure, IfcMomentOfInertiaMeasure, IfcMonetaryMeasure, IfcMonthInYearNumber, IfcMotorConnectionTypeEnum, IfcNormalisedRatioMeasure, IfcNullStyle, IfcNumericMeasure, IfcObjectReferenceSelect, IfcObjectTypeEnum, IfcObjectiveEnum, IfcOccupantTypeEnum, IfcOrientationSelect, IfcOutletTypeEnum, IfcPHMeasure, IfcParameterValue, IfcPermeableCoveringOperationEnum, IfcPhysicalOrVirtualEnum, IfcPileConstructionEnum, IfcPileTypeEnum, IfcPipeFittingTypeEnum, IfcPipeSegmentTypeEnum, IfcPlanarForceMeasure, IfcPlaneAngleMeasure, IfcPlateTypeEnum, IfcPointOrVertexPoint, IfcPositiveLengthMeasure, IfcPositivePlaneAngleMeasure, IfcPositiveRatioMeasure, IfcPowerMeasure, IfcPresentableText, IfcPresentationStyleSelect, IfcPressureMeasure, IfcProcedureTypeEnum, IfcProfileTypeEnum, IfcProjectOrderRecordTypeEnum, IfcProjectOrderTypeEnum, IfcProjectedOrTrueLengthEnum, IfcPropertySourceEnum, IfcProtectiveDeviceTypeEnum, IfcPumpTypeEnum, IfcRadioActivityMeasure, IfcRailingTypeEnum, IfcRampFlightTypeEnum, IfcRampTypeEnum, IfcRatioMeasure, IfcReal, IfcReflectanceMethodEnum, IfcReinforcingBarRoleEnum, IfcReinforcingBarSurfaceEnum, IfcResourceConsumptionEnum, IfcRibPlateDirectionEnum, IfcRoleEnum, IfcRoofTypeEnum, IfcRotationalFrequencyMeasure, IfcRotationalMassMeasure, IfcRotationalStiffnessMeasure, IfcSIPrefix, IfcSIUnitName, IfcSanitaryTerminalTypeEnum, IfcSecondInMinute, IfcSectionModulusMeasure, IfcSectionTypeEnum, IfcSectionalAreaIntegralMeasure, IfcSensorTypeEnum, IfcSequenceEnum, IfcServiceLifeFactorTypeEnum, IfcServiceLifeTypeEnum, IfcShearModulusMeasure, IfcShell, IfcSimpleValue, IfcSizeSelect, IfcSlabTypeEnum, IfcSolidAngleMeasure, IfcSoundPowerMeasure, IfcSoundPressureMeasure, IfcSoundScaleEnum, IfcSpaceHeaterTypeEnum, IfcSpaceTypeEnum, IfcSpecificHeatCapacityMeasure, IfcSpecularExponent, IfcSpecularHighlightSelect, IfcSpecularRoughness, IfcStackTerminalTypeEnum, IfcStairFlightTypeEnum, IfcStairTypeEnum, IfcStateEnum, IfcStructuralActivityAssignmentSelect, IfcStructuralCurveTypeEnum, IfcStructuralSurfaceTypeEnum, IfcSurfaceOrFaceSurface, IfcSurfaceSide, IfcSurfaceStyleElementSelect, IfcSurfaceTextureEnum, IfcSwitchingDeviceTypeEnum, IfcSymbolStyleSelect, IfcTankTypeEnum, IfcTemperatureGradientMeasure, IfcTendonTypeEnum, IfcText, IfcTextAlignment, IfcTextDecoration, IfcTextFontName, IfcTextFontSelect, IfcTextPath, IfcTextStyleSelect, IfcTextTransformation, IfcThermalAdmittanceMeasure, IfcThermalConductivityMeasure, IfcThermalExpansionCoefficientMeasure, IfcThermalLoadSourceEnum, IfcThermalLoadTypeEnum, IfcThermalResistanceMeasure, IfcThermalTransmittanceMeasure, IfcThermodynamicTemperatureMeasure, IfcTimeMeasure, IfcTimeSeriesDataTypeEnum, IfcTimeSeriesScheduleTypeEnum, IfcTimeStamp, IfcTorqueMeasure, IfcTransformerTypeEnum, IfcTransitionCode, IfcTransportElementTypeEnum, IfcTrimmingPreference, IfcTrimmingSelect, IfcTubeBundleTypeEnum, IfcUnit, IfcUnitEnum, IfcUnitaryEquipmentTypeEnum, IfcValue, IfcValveTypeEnum, IfcVaporPermeabilityMeasure, IfcVectorOrDirection, IfcVibrationIsolatorTypeEnum, IfcVolumeMeasure, IfcVolumetricFlowRateMeasure, IfcWallTypeEnum, IfcWarpingConstantMeasure, IfcWarpingMomentMeasure, IfcWasteTerminalTypeEnum, IfcWindowPanelOperationEnum, IfcWindowPanelPositionEnum, IfcWindowStyleConstructionEnum, IfcWindowStyleOperationEnum, IfcWorkControlTypeEnum, IfcYearNumber, Ifc2DCompositeCurve, IfcActionRequest, IfcActor, IfcActorRole, IfcActuatorType, IfcAddress, IfcAirTerminalBoxType, IfcAirTerminalType, IfcAirToAirHeatRecoveryType, IfcAlarmType, IfcAngularDimension, IfcAnnotation, IfcAnnotationCurveOccurrence, IfcAnnotationFillArea, IfcAnnotationFillAreaOccurrence, IfcAnnotationOccurrence, IfcAnnotationSurface, IfcAnnotationSurfaceOccurrence, IfcAnnotationSymbolOccurrence, IfcAnnotationTextOccurrence, IfcApplication, IfcAppliedValue, IfcAppliedValueRelationship, IfcApproval, IfcApprovalActorRelationship, IfcApprovalPropertyRelationship, IfcApprovalRelationship, IfcArbitraryClosedProfileDef, IfcArbitraryOpenProfileDef, IfcArbitraryProfileDefWithVoids, IfcAsset, IfcAsymmetricIShapeProfileDef, IfcAxis1Placement, IfcAxis2Placement2D, IfcAxis2Placement3D, IfcBSplineCurve, IfcBeam, IfcBeamType, IfcBezierCurve, IfcBlobTexture, IfcBlock, IfcBoilerType, IfcBooleanClippingResult, IfcBooleanResult, IfcBoundaryCondition, IfcBoundaryEdgeCondition, IfcBoundaryFaceCondition, IfcBoundaryNodeCondition, IfcBoundaryNodeConditionWarping, IfcBoundedCurve, IfcBoundedSurface, IfcBoundingBox, IfcBoxedHalfSpace, IfcBuilding, IfcBuildingElement, IfcBuildingElementComponent, IfcBuildingElementPart, IfcBuildingElementProxy, IfcBuildingElementProxyType, IfcBuildingElementType, IfcBuildingStorey, IfcCShapeProfileDef, IfcCableCarrierFittingType, IfcCableCarrierSegmentType, IfcCableSegmentType, IfcCalendarDate, IfcCartesianPoint, IfcCartesianTransformationOperator, IfcCartesianTransformationOperator2D, IfcCartesianTransformationOperator2DnonUniform, IfcCartesianTransformationOperator3D, IfcCartesianTransformationOperator3DnonUniform, IfcCenterLineProfileDef, IfcChamferEdgeFeature, IfcChillerType, IfcCircle, IfcCircleHollowProfileDef, IfcCircleProfileDef, IfcClassification, IfcClassificationItem, IfcClassificationItemRelationship, IfcClassificationNotation, IfcClassificationNotationFacet, IfcClassificationReference, IfcClosedShell, IfcCoilType, IfcColourRgb, IfcColourSpecification, IfcColumn, IfcColumnType, IfcComplexProperty, IfcCompositeCurve, IfcCompositeCurveSegment, IfcCompositeProfileDef, IfcCompressorType, IfcCondenserType, IfcCondition, IfcConditionCriterion, IfcConic, IfcConnectedFaceSet, IfcConnectionCurveGeometry, IfcConnectionGeometry, IfcConnectionPointEccentricity, IfcConnectionPointGeometry, IfcConnectionPortGeometry, IfcConnectionSurfaceGeometry, IfcConstraint, IfcConstraintAggregationRelationship, IfcConstraintClassificationRelationship, IfcConstraintRelationship, IfcConstructionEquipmentResource, IfcConstructionMaterialResource, IfcConstructionProductResource, IfcConstructionResource, IfcContextDependentUnit, IfcControl, IfcControllerType, IfcConversionBasedUnit, IfcCooledBeamType, IfcCoolingTowerType, IfcCoordinatedUniversalTimeOffset, IfcCostItem, IfcCostSchedule, IfcCostValue, IfcCovering, IfcCoveringType, IfcCraneRailAShapeProfileDef, IfcCraneRailFShapeProfileDef, IfcCrewResource, IfcCsgPrimitive3D, IfcCsgSolid, IfcCurrencyRelationship, IfcCurtainWall, IfcCurtainWallType, IfcCurve, IfcCurveBoundedPlane, IfcCurveStyle, IfcCurveStyleFont, IfcCurveStyleFontAndScaling, IfcCurveStyleFontPattern, IfcDamperType, IfcDateAndTime, IfcDefinedSymbol, IfcDerivedProfileDef, IfcDerivedUnit, IfcDerivedUnitElement, IfcDiameterDimension, IfcDimensionCalloutRelationship, IfcDimensionCurve, IfcDimensionCurveDirectedCallout, IfcDimensionCurveTerminator, IfcDimensionPair, IfcDimensionalExponents, IfcDirection, IfcDiscreteAccessory, IfcDiscreteAccessoryType, IfcDistributionChamberElement, IfcDistributionChamberElementType, IfcDistributionControlElement, IfcDistributionControlElementType, IfcDistributionElement, IfcDistributionElementType, IfcDistributionFlowElement, IfcDistributionFlowElementType, IfcDistributionPort, IfcDocumentElectronicFormat, IfcDocumentInformation, IfcDocumentInformationRelationship, IfcDocumentReference, IfcDoor, IfcDoorLiningProperties, IfcDoorPanelProperties, IfcDoorStyle, IfcDraughtingCallout, IfcDraughtingCalloutRelationship, IfcDraughtingPreDefinedColour, IfcDraughtingPreDefinedCurveFont, IfcDraughtingPreDefinedTextFont, IfcDuctFittingType, IfcDuctSegmentType, IfcDuctSilencerType, IfcEdge, IfcEdgeCurve, IfcEdgeFeature, IfcEdgeLoop, IfcElectricApplianceType, IfcElectricDistributionPoint, IfcElectricFlowStorageDeviceType, IfcElectricGeneratorType, IfcElectricHeaterType, IfcElectricMotorType, IfcElectricTimeControlType, IfcElectricalBaseProperties, IfcElectricalCircuit, IfcElectricalElement, IfcElement, IfcElementAssembly, IfcElementComponent, IfcElementComponentType, IfcElementQuantity, IfcElementType, IfcElementarySurface, IfcEllipse, IfcEllipseProfileDef, IfcEnergyConversionDevice, IfcEnergyConversionDeviceType, IfcEnergyProperties, IfcEnvironmentalImpactValue, IfcEquipmentElement, IfcEquipmentStandard, IfcEvaporativeCoolerType, IfcEvaporatorType, IfcExtendedMaterialProperties, IfcExternalReference, IfcExternallyDefinedHatchStyle, IfcExternallyDefinedSurfaceStyle, IfcExternallyDefinedSymbol, IfcExternallyDefinedTextFont, IfcExtrudedAreaSolid, IfcFace, IfcFaceBasedSurfaceModel, IfcFaceBound, IfcFaceOuterBound, IfcFaceSurface, IfcFacetedBrep, IfcFacetedBrepWithVoids, IfcFailureConnectionCondition, IfcFanType, IfcFastener, IfcFastenerType, IfcFeatureElement, IfcFeatureElementAddition, IfcFeatureElementSubtraction, IfcFillAreaStyle, IfcFillAreaStyleHatching, IfcFillAreaStyleTileSymbolWithStyle, IfcFillAreaStyleTiles, IfcFilterType, IfcFireSuppressionTerminalType, IfcFlowController, IfcFlowControllerType, IfcFlowFitting, IfcFlowFittingType, IfcFlowInstrumentType, IfcFlowMeterType, IfcFlowMovingDevice, IfcFlowMovingDeviceType, IfcFlowSegment, IfcFlowSegmentType, IfcFlowStorageDevice, IfcFlowStorageDeviceType, IfcFlowTerminal, IfcFlowTerminalType, IfcFlowTreatmentDevice, IfcFlowTreatmentDeviceType, IfcFluidFlowProperties, IfcFooting, IfcFuelProperties, IfcFurnishingElement, IfcFurnishingElementType, IfcFurnitureStandard, IfcFurnitureType, IfcGasTerminalType, IfcGeneralMaterialProperties, IfcGeneralProfileProperties, IfcGeometricCurveSet, IfcGeometricRepresentationContext, IfcGeometricRepresentationItem, IfcGeometricRepresentationSubContext, IfcGeometricSet, IfcGrid, IfcGridAxis, IfcGridPlacement, IfcGroup, IfcHalfSpaceSolid, IfcHeatExchangerType, IfcHumidifierType, IfcHygroscopicMaterialProperties, IfcIShapeProfileDef, IfcImageTexture, IfcInventory, IfcIrregularTimeSeries, IfcIrregularTimeSeriesValue, IfcJunctionBoxType, IfcLShapeProfileDef, IfcLaborResource, IfcLampType, IfcLibraryInformation, IfcLibraryReference, IfcLightDistributionData, IfcLightFixtureType, IfcLightIntensityDistribution, IfcLightSource, IfcLightSourceAmbient, IfcLightSourceDirectional, IfcLightSourceGoniometric, IfcLightSourcePositional, IfcLightSourceSpot, IfcLine, IfcLinearDimension, IfcLocalPlacement, IfcLocalTime, IfcLoop, IfcManifoldSolidBrep, IfcMappedItem, IfcMaterial, IfcMaterialClassificationRelationship, IfcMaterialDefinitionRepresentation, IfcMaterialLayer, IfcMaterialLayerSet, IfcMaterialLayerSetUsage, IfcMaterialList, IfcMaterialProperties, IfcMeasureWithUnit, IfcMechanicalConcreteMaterialProperties, IfcMechanicalFastener, IfcMechanicalFastenerType, IfcMechanicalMaterialProperties, IfcMechanicalSteelMaterialProperties, IfcMember, IfcMemberType, IfcMetric, IfcMonetaryUnit, IfcMotorConnectionType, IfcMove, IfcNamedUnit, IfcObject, IfcObjectDefinition, IfcObjectPlacement, IfcObjective, IfcOccupant, IfcOffsetCurve2D, IfcOffsetCurve3D, IfcOneDirectionRepeatFactor, IfcOpenShell, IfcOpeningElement, IfcOpticalMaterialProperties, IfcOrderAction, IfcOrganization, IfcOrganizationRelationship, IfcOrientedEdge, IfcOutletType, IfcOwnerHistory, IfcParameterizedProfileDef, IfcPath, IfcPerformanceHistory, IfcPermeableCoveringProperties, IfcPermit, IfcPerson, IfcPersonAndOrganization, IfcPhysicalComplexQuantity, IfcPhysicalQuantity, IfcPhysicalSimpleQuantity, IfcPile, IfcPipeFittingType, IfcPipeSegmentType, IfcPixelTexture, IfcPlacement, IfcPlanarBox, IfcPlanarExtent, IfcPlane, IfcPlate, IfcPlateType, IfcPoint, IfcPointOnCurve, IfcPointOnSurface, IfcPolyLoop, IfcPolygonalBoundedHalfSpace, IfcPolyline, IfcPort, IfcPostalAddress, IfcPreDefinedColour, IfcPreDefinedCurveFont, IfcPreDefinedDimensionSymbol, IfcPreDefinedItem, IfcPreDefinedPointMarkerSymbol, IfcPreDefinedSymbol, IfcPreDefinedTerminatorSymbol, IfcPreDefinedTextFont, IfcPresentationLayerAssignment, IfcPresentationLayerWithStyle, IfcPresentationStyle, IfcPresentationStyleAssignment, IfcProcedure, IfcProcess, IfcProduct, IfcProductDefinitionShape, IfcProductRepresentation, IfcProductsOfCombustionProperties, IfcProfileDef, IfcProfileProperties, IfcProject, IfcProjectOrder, IfcProjectOrderRecord, IfcProjectionCurve, IfcProjectionElement, IfcProperty, IfcPropertyBoundedValue, IfcPropertyConstraintRelationship, IfcPropertyDefinition, IfcPropertyDependencyRelationship, IfcPropertyEnumeratedValue, IfcPropertyEnumeration, IfcPropertyListValue, IfcPropertyReferenceValue, IfcPropertySet, IfcPropertySetDefinition, IfcPropertySingleValue, IfcPropertyTableValue, IfcProtectiveDeviceType, IfcProxy, IfcPumpType, IfcQuantityArea, IfcQuantityCount, IfcQuantityLength, IfcQuantityTime, IfcQuantityVolume, IfcQuantityWeight, IfcRadiusDimension, IfcRailing, IfcRailingType, IfcRamp, IfcRampFlight, IfcRampFlightType, IfcRationalBezierCurve, IfcRectangleHollowProfileDef, IfcRectangleProfileDef, IfcRectangularPyramid, IfcRectangularTrimmedSurface, IfcReferencesValueDocument, IfcRegularTimeSeries, IfcReinforcementBarProperties, IfcReinforcementDefinitionProperties, IfcReinforcingBar, IfcReinforcingElement, IfcReinforcingMesh, IfcRelAggregates, IfcRelAssigns, IfcRelAssignsTasks, IfcRelAssignsToActor, IfcRelAssignsToControl, IfcRelAssignsToGroup, IfcRelAssignsToProcess, IfcRelAssignsToProduct, IfcRelAssignsToProjectOrder, IfcRelAssignsToResource, IfcRelAssociates, IfcRelAssociatesAppliedValue, IfcRelAssociatesApproval, IfcRelAssociatesClassification, IfcRelAssociatesConstraint, IfcRelAssociatesDocument, IfcRelAssociatesLibrary, IfcRelAssociatesMaterial, IfcRelAssociatesProfileProperties, IfcRelConnects, IfcRelConnectsElements, IfcRelConnectsPathElements, IfcRelConnectsPortToElement, IfcRelConnectsPorts, IfcRelConnectsStructuralActivity, IfcRelConnectsStructuralElement, IfcRelConnectsStructuralMember, IfcRelConnectsWithEccentricity, IfcRelConnectsWithRealizingElements, IfcRelContainedInSpatialStructure, IfcRelCoversBldgElements, IfcRelCoversSpaces, IfcRelDecomposes, IfcRelDefines, IfcRelDefinesByProperties, IfcRelDefinesByType, IfcRelFillsElement, IfcRelFlowControlElements, IfcRelInteractionRequirements, IfcRelNests, IfcRelOccupiesSpaces, IfcRelOverridesProperties, IfcRelProjectsElement, IfcRelReferencedInSpatialStructure, IfcRelSchedulesCostItems, IfcRelSequence, IfcRelServicesBuildings, IfcRelSpaceBoundary, IfcRelVoidsElement, IfcRelationship, IfcRelaxation, IfcRepresentation, IfcRepresentationContext, IfcRepresentationItem, IfcRepresentationMap, IfcResource, IfcRevolvedAreaSolid, IfcRibPlateProfileProperties, IfcRightCircularCone, IfcRightCircularCylinder, IfcRoof, IfcRoot, IfcRoundedEdgeFeature, IfcRoundedRectangleProfileDef, IfcSIUnit, IfcSanitaryTerminalType, IfcScheduleTimeControl, IfcSectionProperties, IfcSectionReinforcementProperties, IfcSectionedSpine, IfcSensorType, IfcServiceLife, IfcServiceLifeFactor, IfcShapeAspect, IfcShapeModel, IfcShapeRepresentation, IfcShellBasedSurfaceModel, IfcSimpleProperty, IfcSite, IfcSlab, IfcSlabType, IfcSlippageConnectionCondition, IfcSolidModel, IfcSoundProperties, IfcSoundValue, IfcSpace, IfcSpaceHeaterType, IfcSpaceProgram, IfcSpaceThermalLoadProperties, IfcSpaceType, IfcSpatialStructureElement, IfcSpatialStructureElementType, IfcSphere, IfcStackTerminalType, IfcStair, IfcStairFlight, IfcStairFlightType, IfcStructuralAction, IfcStructuralActivity, IfcStructuralAnalysisModel, IfcStructuralConnection, IfcStructuralConnectionCondition, IfcStructuralCurveConnection, IfcStructuralCurveMember, IfcStructuralCurveMemberVarying, IfcStructuralItem, IfcStructuralLinearAction, IfcStructuralLinearActionVarying, IfcStructuralLoad, IfcStructuralLoadGroup, IfcStructuralLoadLinearForce, IfcStructuralLoadPlanarForce, IfcStructuralLoadSingleDisplacement, IfcStructuralLoadSingleDisplacementDistortion, IfcStructuralLoadSingleForce, IfcStructuralLoadSingleForceWarping, IfcStructuralLoadStatic, IfcStructuralLoadTemperature, IfcStructuralMember, IfcStructuralPlanarAction, IfcStructuralPlanarActionVarying, IfcStructuralPointAction, IfcStructuralPointConnection, IfcStructuralPointReaction, IfcStructuralProfileProperties, IfcStructuralReaction, IfcStructuralResultGroup, IfcStructuralSteelProfileProperties, IfcStructuralSurfaceConnection, IfcStructuralSurfaceMember, IfcStructuralSurfaceMemberVarying, IfcStructuredDimensionCallout, IfcStyleModel, IfcStyledItem, IfcStyledRepresentation, IfcSubContractResource, IfcSubedge, IfcSurface, IfcSurfaceCurveSweptAreaSolid, IfcSurfaceOfLinearExtrusion, IfcSurfaceOfRevolution, IfcSurfaceStyle, IfcSurfaceStyleLighting, IfcSurfaceStyleRefraction, IfcSurfaceStyleRendering, IfcSurfaceStyleShading, IfcSurfaceStyleWithTextures, IfcSurfaceTexture, IfcSweptAreaSolid, IfcSweptDiskSolid, IfcSweptSurface, IfcSwitchingDeviceType, IfcSymbolStyle, IfcSystem, IfcSystemFurnitureElementType, IfcTShapeProfileDef, IfcTable, IfcTableRow, IfcTankType, IfcTask, IfcTelecomAddress, IfcTendon, IfcTendonAnchor, IfcTerminatorSymbol, IfcTextLiteral, IfcTextLiteralWithExtent, IfcTextStyle, IfcTextStyleFontModel, IfcTextStyleForDefinedFont, IfcTextStyleTextModel, IfcTextStyleWithBoxCharacteristics, IfcTextureCoordinate, IfcTextureCoordinateGenerator, IfcTextureMap, IfcTextureVertex, IfcThermalMaterialProperties, IfcTimeSeries, IfcTimeSeriesReferenceRelationship, IfcTimeSeriesSchedule, IfcTimeSeriesValue, IfcTopologicalRepresentationItem, IfcTopologyRepresentation, IfcTransformerType, IfcTransportElement, IfcTransportElementType, IfcTrapeziumProfileDef, IfcTrimmedCurve, IfcTubeBundleType, IfcTwoDirectionRepeatFactor, IfcTypeObject, IfcTypeProduct, IfcUShapeProfileDef, IfcUnitAssignment, IfcUnitaryEquipmentType, IfcValveType, IfcVector, IfcVertex, IfcVertexBasedTextureMap, IfcVertexLoop, IfcVertexPoint, IfcVibrationIsolatorType, IfcVirtualElement, IfcVirtualGridIntersection, IfcWall, IfcWallStandardCase, IfcWallType, IfcWasteTerminalType, IfcWaterProperties, IfcWindow, IfcWindowLiningProperties, IfcWindowPanelProperties, IfcWindowStyle, IfcWorkControl, IfcWorkPlan, IfcWorkSchedule, IfcZShapeProfileDef, IfcZone, ALL
    } Enum;
    Enum Parent(Enum v);
    Enum FromString(const std::string& s);
    std::string ToString(Enum v);
    bool IsSimple(Enum v);
}

}

#endif

