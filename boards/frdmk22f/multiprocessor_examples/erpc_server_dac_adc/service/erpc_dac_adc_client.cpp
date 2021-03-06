/*
 * Generated by erpcgen 1.3.0 on Mon Sep  5 16:12:47 2016.
 *
 * AUTOGENERATED - DO NOT EDIT
 */

#include "erpc_dac_adc.h"
#include "client_manager.h"
#include "erpc_port.h"

using namespace erpc;
#if !(__embedded_cplusplus)
using namespace std;
#endif

extern ClientManager *g_client;

// Constant variable definitions
const uint8_t StringMaxSize = 11;

//! @brief Function to read struct AdcConfig
static int32_t read_AdcConfig_struct(erpc::Codec * in, AdcConfig * data);

//! @brief Function to read struct Vector
static int32_t read_Vector_struct(erpc::Codec * in, Vector * data);

// Read struct AdcConfig function implementation
static int32_t read_AdcConfig_struct(erpc::Codec * in, AdcConfig * data)
{
    erpc_status_t err = in->startReadStruct();
    if (!err)
    {
        err = in->read(&data->vref);
    }


    if (!err)
    {
        err = in->read(&data->atomicSteps);
    }

    if (!err)
    {
        err = in->endReadStruct();
    }
    return err;
}

// Read struct Vector function implementation
static int32_t read_Vector_struct(erpc::Codec * in, Vector * data)
{
    erpc_status_t err = in->startReadStruct();
    if (!err)
    {
        err = in->read(&data->A_x);
    }


    if (!err)
    {
        err = in->read(&data->A_y);
    }


    if (!err)
    {
        err = in->read(&data->A_z);
    }


    if (!err)
    {
        err = in->read(&data->M_x);
    }


    if (!err)
    {
        err = in->read(&data->M_y);
    }


    if (!err)
    {
        err = in->read(&data->M_z);
    }

    if (!err)
    {
        err = in->endReadStruct();
    }
    return err;
}


// dac_adc interface adc_get_config function client shim.
void adc_get_config(AdcConfig * config)
{
    erpc_status_t err = kErpcStatus_Success;

    // Get a new request.
    RequestContext request = g_client->createRequest(false);

    // Encode the request.
    Codec * out = request.getOutCodec();
    if (out == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    if (!err)
    {
        err = out->startWriteMessage(kInvocationMessage, kdac_adc_service_id, kdac_adc_adc_get_config_id, request.getSequence());
    }


    if (!err)
    {
        err = out->endWriteMessage();
    }


    // Send message to server
    if (!err)
    {
        err = g_client->performRequest(request);
    }


    Codec * in;
    if (!err)
    {
        in = request.getInCodec();
        if (in == NULL)
        {
            err = kErpcStatus_MemoryError;
        }
    }

    if (!err)
    {
        err = read_AdcConfig_struct(in, config);
    }

    if (!err)
    {
        err = in->endReadMessage();
    }


    // Dispose of the request.
    g_client->releaseRequest(request);

    if (err)
    {
        ClientManager::error_handler_t errorHandler = g_client->getErrorHandler();
        if (errorHandler != NULL)
        {
            (*errorHandler)(err);
        }
        
    }

    return;
}

// dac_adc interface convert_dac_adc function client shim.
void convert_dac_adc(uint32_t numberToConvert, uint32_t * result)
{
    erpc_status_t err = kErpcStatus_Success;

    // Get a new request.
    RequestContext request = g_client->createRequest(false);

    // Encode the request.
    Codec * out = request.getOutCodec();
    if (out == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    if (!err)
    {
        err = out->startWriteMessage(kInvocationMessage, kdac_adc_service_id, kdac_adc_convert_dac_adc_id, request.getSequence());
    }

    if (!err)
    {
        err = out->write(numberToConvert);
    }


    if (!err)
    {
        err = out->endWriteMessage();
    }


    // Send message to server
    if (!err)
    {
        err = g_client->performRequest(request);
    }


    Codec * in;
    if (!err)
    {
        in = request.getInCodec();
        if (in == NULL)
        {
            err = kErpcStatus_MemoryError;
        }
    }

    if (!err)
    {
        err = in->read(result);
    }

    if (!err)
    {
        err = in->endReadMessage();
    }


    // Dispose of the request.
    g_client->releaseRequest(request);

    if (err)
    {
        ClientManager::error_handler_t errorHandler = g_client->getErrorHandler();
        if (errorHandler != NULL)
        {
            (*errorHandler)(err);
        }
        
    }

    return;
}

// dac_adc interface set_led function client shim.
void set_led(uint8_t whichLed)
{
    erpc_status_t err = kErpcStatus_Success;

    // Get a new request.
    RequestContext request = g_client->createRequest(false);

    // Encode the request.
    Codec * out = request.getOutCodec();
    if (out == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    if (!err)
    {
        err = out->startWriteMessage(kInvocationMessage, kdac_adc_service_id, kdac_adc_set_led_id, request.getSequence());
    }

    if (!err)
    {
        err = out->write(whichLed);
    }


    if (!err)
    {
        err = out->endWriteMessage();
    }


    // Send message to server
    if (!err)
    {
        err = g_client->performRequest(request);
    }


    Codec * in;
    if (!err)
    {
        in = request.getInCodec();
        if (in == NULL)
        {
            err = kErpcStatus_MemoryError;
        }
    }

    if (!err)
    {
        err = in->endReadMessage();
    }


    // Dispose of the request.
    g_client->releaseRequest(request);

    if (err)
    {
        ClientManager::error_handler_t errorHandler = g_client->getErrorHandler();
        if (errorHandler != NULL)
        {
            (*errorHandler)(err);
        }
        
    }

    return;
}

// dac_adc interface init_mag_accel function client shim.
int32_t init_mag_accel(void)
{
    erpc_status_t err = kErpcStatus_Success;

    // Get a new request.
    RequestContext request = g_client->createRequest(false);

    // Encode the request.
    Codec * out = request.getOutCodec();
    if (out == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    if (!err)
    {
        err = out->startWriteMessage(kInvocationMessage, kdac_adc_service_id, kdac_adc_init_mag_accel_id, request.getSequence());
    }


    if (!err)
    {
        err = out->endWriteMessage();
    }


    // Send message to server
    if (!err)
    {
        err = g_client->performRequest(request);
    }


    Codec * in;
    if (!err)
    {
        in = request.getInCodec();
        if (in == NULL)
        {
            err = kErpcStatus_MemoryError;
        }
    }

    int32_t result;
    if (!err)
    {
        err = in->read(&result);
    }

    if (!err)
    {
        err = in->endReadMessage();
    }


    // Dispose of the request.
    g_client->releaseRequest(request);

    if (err)
    {
        ClientManager::error_handler_t errorHandler = g_client->getErrorHandler();
        if (errorHandler != NULL)
        {
            (*errorHandler)(err);
        }
        return -1;
    }

    return result;
}

// dac_adc interface read_senzor_mag_accel function client shim.
void read_senzor_mag_accel(Vector * results)
{
    erpc_status_t err = kErpcStatus_Success;

    // Get a new request.
    RequestContext request = g_client->createRequest(false);

    // Encode the request.
    Codec * out = request.getOutCodec();
    if (out == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    if (!err)
    {
        err = out->startWriteMessage(kInvocationMessage, kdac_adc_service_id, kdac_adc_read_senzor_mag_accel_id, request.getSequence());
    }


    if (!err)
    {
        err = out->endWriteMessage();
    }


    // Send message to server
    if (!err)
    {
        err = g_client->performRequest(request);
    }


    Codec * in;
    if (!err)
    {
        in = request.getInCodec();
        if (in == NULL)
        {
            err = kErpcStatus_MemoryError;
        }
    }

    if (!err)
    {
        err = read_Vector_struct(in, results);
    }

    if (!err)
    {
        err = in->endReadMessage();
    }


    // Dispose of the request.
    g_client->releaseRequest(request);

    if (err)
    {
        ClientManager::error_handler_t errorHandler = g_client->getErrorHandler();
        if (errorHandler != NULL)
        {
            (*errorHandler)(err);
        }
        
    }

    return;
}

// dac_adc interface board_get_name function client shim.
void board_get_name(char * name)
{
    erpc_status_t err = kErpcStatus_Success;

    // Get a new request.
    RequestContext request = g_client->createRequest(false);

    // Encode the request.
    Codec * out = request.getOutCodec();
    if (out == NULL)
    {
        err = kErpcStatus_MemoryError;
    }
    if (!err)
    {
        err = out->startWriteMessage(kInvocationMessage, kdac_adc_service_id, kdac_adc_board_get_name_id, request.getSequence());
    }


    if (!err)
    {
        err = out->endWriteMessage();
    }


    // Send message to server
    if (!err)
    {
        err = g_client->performRequest(request);
    }


    Codec * in;
    if (!err)
    {
        in = request.getInCodec();
        if (in == NULL)
        {
            err = kErpcStatus_MemoryError;
        }
    }

    if (!err)
    {
        uint32_t name_len;
        char * name_local;
        err = in->readString(&name_len, &name_local);
        if (!err)
        {
            memcpy(name, name_local, name_len);
            (name)[name_len] = 0;
        }
    }

    if (!err)
    {
        err = in->endReadMessage();
    }


    // Dispose of the request.
    g_client->releaseRequest(request);

    if (err)
    {
        ClientManager::error_handler_t errorHandler = g_client->getErrorHandler();
        if (errorHandler != NULL)
        {
            (*errorHandler)(err);
        }
        
    }

    return;
}
