////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2017 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 20.54Release
// Tag = production/akw/20.54.00-0-ga49a69a
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_THREE_D_SENSOR_CALIBRATION_MESG_HPP)
#define FIT_THREE_D_SENSOR_CALIBRATION_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class ThreeDSensorCalibrationMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Timestamp = 253;
       static const FIT_UINT8 SensorType = 0;
       static const FIT_UINT8 CalibrationFactor = 1;
       static const FIT_UINT8 CalibrationDivisor = 2;
       static const FIT_UINT8 LevelShift = 3;
       static const FIT_UINT8 OffsetCal = 4;
       static const FIT_UINT8 OrientationMatrix = 5;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    ThreeDSensorCalibrationMesg(void) : Mesg(Profile::MESG_THREE_D_SENSOR_CALIBRATION)
    {
    }

    ThreeDSensorCalibrationMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of timestamp field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimestampValid() const
    {
        const Field* field = GetField(253);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp field
    // Units: s
    // Comment: Whole second part of the timestamp
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    // Units: s
    // Comment: Whole second part of the timestamp
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of sensor_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSensorTypeValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns sensor_type field
    // Comment: Indicates which sensor the calibration is for
    ///////////////////////////////////////////////////////////////////////
    FIT_SENSOR_TYPE GetSensorType(void) const
    {
        return GetFieldENUMValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sensor_type field
    // Comment: Indicates which sensor the calibration is for
    ///////////////////////////////////////////////////////////////////////
    void SetSensorType(FIT_SENSOR_TYPE sensorType)
    {
        SetFieldENUMValue(0, sensorType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of calibration_factor field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCalibrationFactorValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns calibration_factor field
    // Comment: Calibration factor used to convert from raw ADC value to degrees, g,  etc.
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32 GetCalibrationFactor(void) const
    {
        return GetFieldUINT32Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set calibration_factor field
    // Comment: Calibration factor used to convert from raw ADC value to degrees, g,  etc.
    ///////////////////////////////////////////////////////////////////////
    void SetCalibrationFactor(FIT_UINT32 calibrationFactor)
    {
        SetFieldUINT32Value(1, calibrationFactor, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of accel_cal_factor field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAccelCalFactorValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        if( !CanSupportSubField( field, (FIT_UINT16) Profile::THREE_D_SENSOR_CALIBRATION_MESG_CALIBRATION_FACTOR_FIELD_ACCEL_CAL_FACTOR ) )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(0, (FIT_UINT16) Profile::THREE_D_SENSOR_CALIBRATION_MESG_CALIBRATION_FACTOR_FIELD_ACCEL_CAL_FACTOR);
    }


    ///////////////////////////////////////////////////////////////////////
    // Returns accel_cal_factor field
    // Units: g
    // Comment: Accelerometer calibration factor
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32 GetAccelCalFactor(void) const
    {
        return GetFieldUINT32Value(1, 0, (FIT_UINT16) Profile::THREE_D_SENSOR_CALIBRATION_MESG_CALIBRATION_FACTOR_FIELD_ACCEL_CAL_FACTOR);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set accel_cal_factor field
    // Units: g
    // Comment: Accelerometer calibration factor
    ///////////////////////////////////////////////////////////////////////
    void SetAccelCalFactor(FIT_UINT32 accelCalFactor)
    {
        SetFieldUINT32Value(1, accelCalFactor, 0, (FIT_UINT16) Profile::THREE_D_SENSOR_CALIBRATION_MESG_CALIBRATION_FACTOR_FIELD_ACCEL_CAL_FACTOR);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of gyro_cal_factor field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsGyroCalFactorValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        if( !CanSupportSubField( field, (FIT_UINT16) Profile::THREE_D_SENSOR_CALIBRATION_MESG_CALIBRATION_FACTOR_FIELD_GYRO_CAL_FACTOR ) )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(0, (FIT_UINT16) Profile::THREE_D_SENSOR_CALIBRATION_MESG_CALIBRATION_FACTOR_FIELD_GYRO_CAL_FACTOR);
    }


    ///////////////////////////////////////////////////////////////////////
    // Returns gyro_cal_factor field
    // Units: deg/s
    // Comment: Gyro calibration factor
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32 GetGyroCalFactor(void) const
    {
        return GetFieldUINT32Value(1, 0, (FIT_UINT16) Profile::THREE_D_SENSOR_CALIBRATION_MESG_CALIBRATION_FACTOR_FIELD_GYRO_CAL_FACTOR);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set gyro_cal_factor field
    // Units: deg/s
    // Comment: Gyro calibration factor
    ///////////////////////////////////////////////////////////////////////
    void SetGyroCalFactor(FIT_UINT32 gyroCalFactor)
    {
        SetFieldUINT32Value(1, gyroCalFactor, 0, (FIT_UINT16) Profile::THREE_D_SENSOR_CALIBRATION_MESG_CALIBRATION_FACTOR_FIELD_GYRO_CAL_FACTOR);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of calibration_divisor field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCalibrationDivisorValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns calibration_divisor field
    // Units: counts
    // Comment: Calibration factor divisor
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32 GetCalibrationDivisor(void) const
    {
        return GetFieldUINT32Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set calibration_divisor field
    // Units: counts
    // Comment: Calibration factor divisor
    ///////////////////////////////////////////////////////////////////////
    void SetCalibrationDivisor(FIT_UINT32 calibrationDivisor)
    {
        SetFieldUINT32Value(2, calibrationDivisor, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of level_shift field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsLevelShiftValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns level_shift field
    // Comment: Level shift value used to shift the ADC value back into range
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32 GetLevelShift(void) const
    {
        return GetFieldUINT32Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set level_shift field
    // Comment: Level shift value used to shift the ADC value back into range
    ///////////////////////////////////////////////////////////////////////
    void SetLevelShift(FIT_UINT32 levelShift)
    {
        SetFieldUINT32Value(3, levelShift, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of offset_cal
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumOffsetCal(void) const
    {
        return GetFieldNumValues(4, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of offset_cal field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsOffsetCalValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns offset_cal field
    // Comment: Internal calibration factors, one for each: xy, yx, zx
    ///////////////////////////////////////////////////////////////////////
    FIT_SINT32 GetOffsetCal(FIT_UINT8 index) const
    {
        return GetFieldSINT32Value(4, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set offset_cal field
    // Comment: Internal calibration factors, one for each: xy, yx, zx
    ///////////////////////////////////////////////////////////////////////
    void SetOffsetCal(FIT_UINT8 index, FIT_SINT32 offsetCal)
    {
        SetFieldSINT32Value(4, offsetCal, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns number of orientation_matrix
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetNumOrientationMatrix(void) const
    {
        return GetFieldNumValues(5, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of orientation_matrix field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsOrientationMatrixValid(FIT_UINT8 index) const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(index);
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns orientation_matrix field
    // Comment: 3 x 3 rotation matrix (row major)
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetOrientationMatrix(FIT_UINT8 index) const
    {
        return GetFieldFLOAT32Value(5, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set orientation_matrix field
    // Comment: 3 x 3 rotation matrix (row major)
    ///////////////////////////////////////////////////////////////////////
    void SetOrientationMatrix(FIT_UINT8 index, FIT_FLOAT32 orientationMatrix)
    {
        SetFieldFLOAT32Value(5, orientationMatrix, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_THREE_D_SENSOR_CALIBRATION_MESG_HPP)
