/*  =========================================================================
    agent-nut - generated layer of public API

    Copyright (C) 2014 - 2015 Eaton                                        
                                                                           
    This program is free software; you can redistribute it and/or modify   
    it under the terms of the GNU General Public License as published by   
    the Free Software Foundation; either version 2 of the License, or      
    (at your option) any later version.                                    
                                                                           
    This program is distributed in the hope that it will be useful,        
    but WITHOUT ANY WARRANTY; without even the implied warranty of         
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          
    GNU General Public License for more details.                           
                                                                           
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.            

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef AGENT_NUT_LIBRARY_H_INCLUDED
#define AGENT_NUT_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <malamute.h>
#include <biosproto.h>
#include <libcidr.h>

//  AGENT_NUT version macros for compile-time API detection
#define AGENT_NUT_VERSION_MAJOR 0
#define AGENT_NUT_VERSION_MINOR 1
#define AGENT_NUT_VERSION_PATCH 0

#define AGENT_NUT_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define AGENT_NUT_VERSION \
    AGENT_NUT_MAKE_VERSION(AGENT_NUT_VERSION_MAJOR, AGENT_NUT_VERSION_MINOR, AGENT_NUT_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined AGENT_NUT_STATIC
#       define AGENT_NUT_EXPORT
#   elif defined AGENT_NUT_EXPORTS
#       define AGENT_NUT_EXPORT __declspec(dllexport)
#   else
#       define AGENT_NUT_EXPORT __declspec(dllimport)
#   endif
#else
#   define AGENT_NUT_EXPORT
#endif

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
typedef struct _bios_nut_server_t bios_nut_server_t;
#define BIOS_NUT_SERVER_T_DEFINED
typedef struct _bios_nut_configurator_server_t bios_nut_configurator_server_t;
#define BIOS_NUT_CONFIGURATOR_SERVER_T_DEFINED
typedef struct _alert_actor_t alert_actor_t;
#define ALERT_ACTOR_T_DEFINED
typedef struct _sensor_actor_t sensor_actor_t;
#define SENSOR_ACTOR_T_DEFINED


//  Public classes, each with its own header file
#include "bios_nut_server.h"
#include "bios_nut_configurator_server.h"
#include "alert_actor.h"
#include "sensor_actor.h"

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
