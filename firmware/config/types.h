/*

DATA TYPES & CONSTANTS DEFINITION

Copyright (C) 2018 FastyBird s.r.o. <code@fastybird.com>

*/

// =============================================================================
// Hardware default values
// =============================================================================

#define GPIO_NONE                                               0x99
#define INDEX_NONE                                              0xFF

// =============================================================================
// FLASH MEMORY ADDRESSING
// =============================================================================

#define FLASH_ADDRESS_DEVICE_ADDRESS                            0x01

#define FLASH_ADDRESS_DEVICE_STATE                              0x02

#define FLASH_ADDRESS_RELAY_01                                  0x10
#define FLASH_ADDRESS_RELAY_02                                  0x11
#define FLASH_ADDRESS_RELAY_03                                  0x12
#define FLASH_ADDRESS_RELAY_04                                  0x14
#define FLASH_ADDRESS_RELAY_05                                  0x15
#define FLASH_ADDRESS_RELAY_06                                  0x16
#define FLASH_ADDRESS_RELAY_07                                  0x17
#define FLASH_ADDRESS_RELAY_08                                  0x18
#define FLASH_ADDRESS_RELAY_09                                  0x18
#define FLASH_ADDRESS_RELAY_10                                  0x19
#define FLASH_ADDRESS_RELAY_11                                  0x1A
#define FLASH_ADDRESS_RELAY_12                                  0x1B
#define FLASH_ADDRESS_RELAY_13                                  0x1C
#define FLASH_ADDRESS_RELAY_14                                  0x1D
#define FLASH_ADDRESS_RELAY_15                                  0x1E
#define FLASH_ADDRESS_RELAY_16                                  0x1F

// =============================================================================
// DEVICE STATES
// =============================================================================

#define DEVICE_STATE_RUNNING                                    0x01
#define DEVICE_STATE_STOPPED                                    0x02
#define DEVICE_STATE_ERROR                                      0x0A
#define DEVICE_STATE_STOPPED_BY_OPERATOR                        0x0B

// =============================================================================
// COMMUNICATION PACKETS
// =============================================================================

#define COMMUNICATION_PACKET_TERMINATOR                         0x00
#define COMMUNICATION_PACKET_DATA_SPACE                         0x20

#define COMMUNICATION_PACKET_PAIR_DEVICE                        0x01
#define COMMUNICATION_PACKET_READ_SINGLE_REGISTER               0x03
#define COMMUNICATION_PACKET_READ_MULTIPLE_REGISTERS            0x05
#define COMMUNICATION_PACKET_WRITE_SINGLE_REGISTER              0x07
#define COMMUNICATION_PACKET_WRITE_MULTIPLE_REGISTERS           0x09
#define COMMUNICATION_PACKET_REPORT_SINGLE_REGISTER             0x0B
#define COMMUNICATION_PACKET_READ_ONE_CONFIGURATION             0x0D
#define COMMUNICATION_PACKET_WRITE_ONE_CONFIGURATION            0x0F
#define COMMUNICATION_PACKET_REPORT_ONE_CONFIGURATION           0x11
#define COMMUNICATION_PACKET_PING                               0x13
#define COMMUNICATION_PACKET_PONG                               0x15
#define COMMUNICATION_PACKET_HELLO                              0x17
#define COMMUNICATION_PACKET_GET_STATE                          0x19
#define COMMUNICATION_PACKET_SET_STATE                          0x1B
#define COMMUNICATION_PACKET_REPORT_STATE                       0x1D
#define COMMUNICATION_PACKET_CONTROL_DEVICE                     0x1F
#define COMMUNICATION_PACKET_PUBSUB_BROADCAST                   0x21
#define COMMUNICATION_PACKET_PUBSUB_SUBSCRIBE                   0x23
#define COMMUNICATION_PACKET_PUBSUB_UNSUBSCRIBE                 0x25
#define COMMUNICATION_PACKET_EXCEPTION                          0x63

#define COMMUNICATION_PACKET_MAX                                20

// =============================================================================
// COMMUNICATION DATATYPES
// =============================================================================

#define COMMUNICATION_DATA_TYPE_UNKNOWN                         0xFF
#define COMMUNICATION_DATA_TYPE_UINT8                           0x01
#define COMMUNICATION_DATA_TYPE_UINT16                          0x02
#define COMMUNICATION_DATA_TYPE_UINT32                          0x03
#define COMMUNICATION_DATA_TYPE_INT8                            0x04
#define COMMUNICATION_DATA_TYPE_INT16                           0x05
#define COMMUNICATION_DATA_TYPE_INT32                           0x06
#define COMMUNICATION_DATA_TYPE_FLOAT32                         0x07
#define COMMUNICATION_DATA_TYPE_BOOLEAN                         0x08
#define COMMUNICATION_DATA_TYPE_TIME                            0x09
#define COMMUNICATION_DATA_TYPE_DATE                            0x0A
#define COMMUNICATION_DATA_TYPE_DATETIME                        0x0B

// =============================================================================
// COMMUNICATION PAIRING COMMANDS
// =============================================================================

#define COMMUNICATION_PAIRING_CMD_PROVIDE_ADDRESS               0x01
#define COMMUNICATION_PAIRING_CMD_SET_ADDRESS                   0x02
#define COMMUNICATION_PAIRING_CMD_PROVIDE_ABOUT_INFO            0x03
#define COMMUNICATION_PAIRING_CMD_PROVIDE_DEVICE_MODEL          0x04
#define COMMUNICATION_PAIRING_CMD_PROVIDE_DEVICE_MANUFACTURER   0x05
#define COMMUNICATION_PAIRING_CMD_PROVIDE_DEVICE_VERSION        0x06
#define COMMUNICATION_PAIRING_CMD_PROVIDE_FIRMWARE_MANUFACTURER 0x07
#define COMMUNICATION_PAIRING_CMD_PROVIDE_FIRMWARE_VERSION      0x08
#define COMMUNICATION_PAIRING_CMD_PROVIDE_REGISTERS_SIZE        0x09
#define COMMUNICATION_PAIRING_CMD_PROVIDE_REGISTERS_STRUCTURE   0x0A
#define COMMUNICATION_PAIRING_CMD_WRITE_REGISTER_KEY            0x0B
#define COMMUNICATION_PAIRING_CMD_PROVIDE_SETTINGS_SIZE         0x0C
#define COMMUNICATION_PAIRING_CMD_PROVIDE_SETTINGS_STRUCTURE    0x0D
#define COMMUNICATION_PAIRING_CMD_FINISHED                      0x0E

// =============================================================================
// COMMUNICATION PAIRING RESPONSE
// =============================================================================

#define COMMUNICATION_PAIRING_RESPONSE_DEVICE_ADDRESS           0x51
#define COMMUNICATION_PAIRING_RESPONSE_ADDRESS_ACCEPTED         0x52
#define COMMUNICATION_PAIRING_RESPONSE_ABOUT_INFO               0x53
#define COMMUNICATION_PAIRING_RESPONSE_DEVICE_MODEL             0x54
#define COMMUNICATION_PAIRING_RESPONSE_DEVICE_MANUFACTURER      0x55
#define COMMUNICATION_PAIRING_RESPONSE_DEVICE_VERSION           0x56
#define COMMUNICATION_PAIRING_RESPONSE_FIRMWARE_MANUFACTURER    0x57
#define COMMUNICATION_PAIRING_RESPONSE_FIRMWARE_VERSION         0x58
#define COMMUNICATION_PAIRING_RESPONSE_REGISTERS_SIZE           0x59
#define COMMUNICATION_PAIRING_RESPONSE_REGISTERS_STRUCTURE      0x5A
#define COMMUNICATION_PAIRING_RESPONSE_WRITE_REGISTER_KEY       0x5B
#define COMMUNICATION_PAIRING_RESPONSE_SETTINGS_SIZE            0x5C
#define COMMUNICATION_PAIRING_RESPONSE_SETTINGS_STRUCTURE       0x5D
#define COMMUNICATION_PAIRING_RESPONSE_FINISHED                 0x5E

// =============================================================================
// COMMUNICATION REGISTERS TYPES
// =============================================================================

#define COMMUNICATION_REGISTER_TYPE_DI                          0x01
#define COMMUNICATION_REGISTER_TYPE_DO                          0x02
#define COMMUNICATION_REGISTER_TYPE_AI                          0x03
#define COMMUNICATION_REGISTER_TYPE_AO                          0x04

// =============================================================================
// COMMUNICATION REGISTERS TYPES
// =============================================================================

#define COMMUNICATION_SETTINGS_TYPE_DEVICE                      0x01
#define COMMUNICATION_SETTINGS_TYPE_REGISTER                    0x02

// =============================================================================
// LED MODES
// =============================================================================

#define LED_MODE_BUS                                            0       // LED will blink according to the BUS status
#define LED_MODE_FINDME                                         1       // LED will be ON
#define LED_MODE_FINDME_BUS                                     2       // A mixture between BUS and FINDME
#define LED_MODE_PAIRING                                        3       // LED will notify user about pairing mode
#define LED_MODE_ON                                             4       // LED always ON
#define LED_MODE_OFF                                            5       // LED always OFF

// =============================================================================
// BUTTONS EVENTS
// =============================================================================

#define BUTTON_EVENT_NONE                                       0
#define BUTTON_EVENT_PRESSED                                    1
#define BUTTON_EVENT_RELEASED                                   2
#define BUTTON_EVENT_CLICK                                      3
#define BUTTON_EVENT_DBLCLICK                                   4
#define BUTTON_EVENT_TRIPLECLICK                                5
#define BUTTON_EVENT_LNGCLICK                                   6
#define BUTTON_EVENT_LNGLNGCLICK                                7

#define BUTTON_DEBOUNCE_DELAY                                   50      // Debounce delay (ms)
#define BUTTON_DBLCLICK_DELAY                                   350     // Time in ms to wait for a second (or third...) click
#define BUTTON_LNGCLICK_DELAY                                   1000    // Time in ms holding the button down to get a long click
#define BUTTON_LNGLNGCLICK_DELAY                                5000    // Time in ms holding the button down to get a long-long click

// =============================================================================
// RELAY
// =============================================================================

#define RELAY_BOOT_OFF                                          0
#define RELAY_BOOT_ON                                           1
#define RELAY_BOOT_SAME                                         2
#define RELAY_BOOT_TOGGLE                                       3

#define RELAY_TYPE_NORMAL                                       0
#define RELAY_TYPE_INVERSE                                      1
#define RELAY_TYPE_LATCHED                                      2
#define RELAY_TYPE_LATCHED_INVERSE                              3

#define RELAY_SYNC_ANY                                          0
#define RELAY_SYNC_NONE_OR_ONE                                  1
#define RELAY_SYNC_ONE                                          2
#define RELAY_SYNC_SAME                                         3

#define RELAY_PULSE_NONE                                        0
#define RELAY_PULSE_OFF                                         1
#define RELAY_PULSE_ON                                          2

#define RELAY_PROVIDER_NONE                                     0
#define RELAY_PROVIDER_RELAY                                    1

#define RELAY_DELAY_ON                                          0
#define RELAY_DELAY_OFF                                         0
