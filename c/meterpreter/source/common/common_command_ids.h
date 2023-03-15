/*!
 * @file common_command_ids.h
 * @brief Declarations of command ID values
 * @description This file was generated 2020-05-01 05:24:48 UTC. Do not modify directly.
 */
#ifndef _METERPRETER_SOURCE_COMMON_COMMAND_IDS_H
#define _METERPRETER_SOURCE_COMMON_COMMAND_IDS_H

#define EXTENSION_ID_CORE 0
#define EXTENSION_ID_STDAPI 1000
#define EXTENSION_ID_PRIV 2000
#define EXTENSION_ID_EXTAPI 3000
#define EXTENSION_ID_SNIFFER 4000
#define EXTENSION_ID_WINPMEM 7000
#define EXTENSION_ID_KIWI 8000
#define EXTENSION_ID_UNHOOK 10000
#define EXTENSION_ID_ESPIA 11000
#define EXTENSION_ID_INCOGNITO 12000
#define EXTENSION_ID_PYTHON 13000
#define EXTENSION_ID_POWERSHELL 14000
#define EXTENSION_ID_LANATTACKS 15000
#define EXTENSION_ID_PEINJECTOR 16000
#define EXTENSION_ID_MIMIKATZ 17000

#define COMMAND_ID_CORE_CHANNEL_CLOSE 1
#define COMMAND_ID_CORE_CHANNEL_EOF 2
#define COMMAND_ID_CORE_CHANNEL_INTERACT 3
#define COMMAND_ID_CORE_CHANNEL_OPEN 4
#define COMMAND_ID_CORE_CHANNEL_READ 5
#define COMMAND_ID_CORE_CHANNEL_SEEK 6
#define COMMAND_ID_CORE_CHANNEL_TELL 7
#define COMMAND_ID_CORE_CHANNEL_WRITE 8
#define COMMAND_ID_CORE_CONSOLE_WRITE 9
#define COMMAND_ID_CORE_ENUMEXTCMD 10
#define COMMAND_ID_CORE_GET_SESSION_GUID 11
#define COMMAND_ID_CORE_LOADLIB 12
#define COMMAND_ID_CORE_MACHINE_ID 13
#define COMMAND_ID_CORE_MIGRATE 14
#define COMMAND_ID_CORE_NATIVE_ARCH 15
#define COMMAND_ID_CORE_NEGOTIATE_TLV_ENCRYPTION 16
#define COMMAND_ID_CORE_PATCH_URL 17
#define COMMAND_ID_CORE_PIVOT_ADD 18
#define COMMAND_ID_CORE_PIVOT_REMOVE 19
#define COMMAND_ID_CORE_PIVOT_SESSION_DIED 20
#define COMMAND_ID_CORE_SET_SESSION_GUID 21
#define COMMAND_ID_CORE_SET_UUID 22
#define COMMAND_ID_CORE_SHUTDOWN 23
#define COMMAND_ID_CORE_TRANSPORT_ADD 24
#define COMMAND_ID_CORE_TRANSPORT_CHANGE 25
#define COMMAND_ID_CORE_TRANSPORT_GETCERTHASH 26
#define COMMAND_ID_CORE_TRANSPORT_LIST 27
#define COMMAND_ID_CORE_TRANSPORT_NEXT 28
#define COMMAND_ID_CORE_TRANSPORT_PREV 29
#define COMMAND_ID_CORE_TRANSPORT_REMOVE 30
#define COMMAND_ID_CORE_TRANSPORT_SETCERTHASH 31
#define COMMAND_ID_CORE_TRANSPORT_SET_TIMEOUTS 32
#define COMMAND_ID_CORE_TRANSPORT_SLEEP 33
#define COMMAND_ID_CORE_PIVOT_SESSION_NEW 34
#define COMMAND_ID_STDAPI_FS_CHDIR 1001
#define COMMAND_ID_STDAPI_FS_CHMOD 1002
#define COMMAND_ID_STDAPI_FS_DELETE_DIR 1003
#define COMMAND_ID_STDAPI_FS_DELETE_FILE 1004
#define COMMAND_ID_STDAPI_FS_FILE_COPY 1005
#define COMMAND_ID_STDAPI_FS_FILE_EXPAND_PATH 1006
#define COMMAND_ID_STDAPI_FS_FILE_MOVE 1007
#define COMMAND_ID_STDAPI_FS_GETWD 1008
#define COMMAND_ID_STDAPI_FS_LS 1009
#define COMMAND_ID_STDAPI_FS_MD5 1010
#define COMMAND_ID_STDAPI_FS_MKDIR 1011
#define COMMAND_ID_STDAPI_FS_MOUNT_SHOW 1012
#define COMMAND_ID_STDAPI_FS_SEARCH 1013
#define COMMAND_ID_STDAPI_FS_SEPARATOR 1014
#define COMMAND_ID_STDAPI_FS_SHA1 1015
#define COMMAND_ID_STDAPI_FS_STAT 1016
#define COMMAND_ID_STDAPI_NET_CONFIG_ADD_ROUTE 1017
#define COMMAND_ID_STDAPI_NET_CONFIG_GET_ARP_TABLE 1018
#define COMMAND_ID_STDAPI_NET_CONFIG_GET_INTERFACES 1019
#define COMMAND_ID_STDAPI_NET_CONFIG_GET_NETSTAT 1020
#define COMMAND_ID_STDAPI_NET_CONFIG_GET_PROXY 1021
#define COMMAND_ID_STDAPI_NET_CONFIG_GET_ROUTES 1022
#define COMMAND_ID_STDAPI_NET_CONFIG_REMOVE_ROUTE 1023
#define COMMAND_ID_STDAPI_NET_RESOLVE_HOST 1024
#define COMMAND_ID_STDAPI_NET_RESOLVE_HOSTS 1025
#define COMMAND_ID_STDAPI_NET_SOCKET_TCP_SHUTDOWN 1026
#define COMMAND_ID_STDAPI_NET_TCP_CHANNEL_OPEN 1027
#define COMMAND_ID_STDAPI_RAILGUN_API 1028
#define COMMAND_ID_STDAPI_RAILGUN_API_MULTI 1029
#define COMMAND_ID_STDAPI_RAILGUN_MEMREAD 1030
#define COMMAND_ID_STDAPI_RAILGUN_MEMWRITE 1031
#define COMMAND_ID_STDAPI_REGISTRY_CHECK_KEY_EXISTS 1032
#define COMMAND_ID_STDAPI_REGISTRY_CLOSE_KEY 1033
#define COMMAND_ID_STDAPI_REGISTRY_CREATE_KEY 1034
#define COMMAND_ID_STDAPI_REGISTRY_DELETE_KEY 1035
#define COMMAND_ID_STDAPI_REGISTRY_DELETE_VALUE 1036
#define COMMAND_ID_STDAPI_REGISTRY_ENUM_KEY 1037
#define COMMAND_ID_STDAPI_REGISTRY_ENUM_KEY_DIRECT 1038
#define COMMAND_ID_STDAPI_REGISTRY_ENUM_VALUE 1039
#define COMMAND_ID_STDAPI_REGISTRY_ENUM_VALUE_DIRECT 1040
#define COMMAND_ID_STDAPI_REGISTRY_LOAD_KEY 1041
#define COMMAND_ID_STDAPI_REGISTRY_OPEN_KEY 1042
#define COMMAND_ID_STDAPI_REGISTRY_OPEN_REMOTE_KEY 1043
#define COMMAND_ID_STDAPI_REGISTRY_QUERY_CLASS 1044
#define COMMAND_ID_STDAPI_REGISTRY_QUERY_VALUE 1045
#define COMMAND_ID_STDAPI_REGISTRY_QUERY_VALUE_DIRECT 1046
#define COMMAND_ID_STDAPI_REGISTRY_SET_VALUE 1047
#define COMMAND_ID_STDAPI_REGISTRY_SET_VALUE_DIRECT 1048
#define COMMAND_ID_STDAPI_REGISTRY_UNLOAD_KEY 1049
#define COMMAND_ID_STDAPI_SYS_CONFIG_DRIVER_LIST 1050
#define COMMAND_ID_STDAPI_SYS_CONFIG_DROP_TOKEN 1051
#define COMMAND_ID_STDAPI_SYS_CONFIG_GETENV 1052
#define COMMAND_ID_STDAPI_SYS_CONFIG_GETPRIVS 1053
#define COMMAND_ID_STDAPI_SYS_CONFIG_GETSID 1054
#define COMMAND_ID_STDAPI_SYS_CONFIG_GETUID 1055
#define COMMAND_ID_STDAPI_SYS_CONFIG_LOCALTIME 1056
#define COMMAND_ID_STDAPI_SYS_CONFIG_REV2SELF 1057
#define COMMAND_ID_STDAPI_SYS_CONFIG_STEAL_TOKEN 1058
#define COMMAND_ID_STDAPI_SYS_CONFIG_SYSINFO 1059
#define COMMAND_ID_STDAPI_SYS_EVENTLOG_CLEAR 1060
#define COMMAND_ID_STDAPI_SYS_EVENTLOG_CLOSE 1061
#define COMMAND_ID_STDAPI_SYS_EVENTLOG_NUMRECORDS 1062
#define COMMAND_ID_STDAPI_SYS_EVENTLOG_OLDEST 1063
#define COMMAND_ID_STDAPI_SYS_EVENTLOG_OPEN 1064
#define COMMAND_ID_STDAPI_SYS_EVENTLOG_READ 1065
#define COMMAND_ID_STDAPI_SYS_POWER_EXITWINDOWS 1066
#define COMMAND_ID_STDAPI_SYS_PROCESS_ATTACH 1067
#define COMMAND_ID_STDAPI_SYS_PROCESS_CLOSE 1068
#define COMMAND_ID_STDAPI_SYS_PROCESS_EXECUTE 1069
#define COMMAND_ID_STDAPI_SYS_PROCESS_GET_INFO 1070
#define COMMAND_ID_STDAPI_SYS_PROCESS_GET_PROCESSES 1071
#define COMMAND_ID_STDAPI_SYS_PROCESS_GETPID 1072
#define COMMAND_ID_STDAPI_SYS_PROCESS_IMAGE_GET_IMAGES 1073
#define COMMAND_ID_STDAPI_SYS_PROCESS_IMAGE_GET_PROC_ADDRESS 1074
#define COMMAND_ID_STDAPI_SYS_PROCESS_IMAGE_LOAD 1075
#define COMMAND_ID_STDAPI_SYS_PROCESS_IMAGE_UNLOAD 1076
#define COMMAND_ID_STDAPI_SYS_PROCESS_KILL 1077
#define COMMAND_ID_STDAPI_SYS_PROCESS_MEMORY_ALLOCATE 1078
#define COMMAND_ID_STDAPI_SYS_PROCESS_MEMORY_FREE 1079
#define COMMAND_ID_STDAPI_SYS_PROCESS_MEMORY_LOCK 1080
#define COMMAND_ID_STDAPI_SYS_PROCESS_MEMORY_PROTECT 1081
#define COMMAND_ID_STDAPI_SYS_PROCESS_MEMORY_QUERY 1082
#define COMMAND_ID_STDAPI_SYS_PROCESS_MEMORY_READ 1083
#define COMMAND_ID_STDAPI_SYS_PROCESS_MEMORY_UNLOCK 1084
#define COMMAND_ID_STDAPI_SYS_PROCESS_MEMORY_WRITE 1085
#define COMMAND_ID_STDAPI_SYS_PROCESS_THREAD_CLOSE 1086
#define COMMAND_ID_STDAPI_SYS_PROCESS_THREAD_CREATE 1087
#define COMMAND_ID_STDAPI_SYS_PROCESS_THREAD_GET_THREADS 1088
#define COMMAND_ID_STDAPI_SYS_PROCESS_THREAD_OPEN 1089
#define COMMAND_ID_STDAPI_SYS_PROCESS_THREAD_QUERY_REGS 1090
#define COMMAND_ID_STDAPI_SYS_PROCESS_THREAD_RESUME 1091
#define COMMAND_ID_STDAPI_SYS_PROCESS_THREAD_SET_REGS 1092
#define COMMAND_ID_STDAPI_SYS_PROCESS_THREAD_SUSPEND 1093
#define COMMAND_ID_STDAPI_SYS_PROCESS_THREAD_TERMINATE 1094
#define COMMAND_ID_STDAPI_SYS_PROCESS_WAIT 1095
#define COMMAND_ID_STDAPI_UI_DESKTOP_ENUM 1096
#define COMMAND_ID_STDAPI_UI_DESKTOP_GET 1097
#define COMMAND_ID_STDAPI_UI_DESKTOP_SCREENSHOT 1098
#define COMMAND_ID_STDAPI_UI_DESKTOP_SET 1099
#define COMMAND_ID_STDAPI_UI_ENABLE_KEYBOARD 1100
#define COMMAND_ID_STDAPI_UI_ENABLE_MOUSE 1101
#define COMMAND_ID_STDAPI_UI_GET_IDLE_TIME 1102
#define COMMAND_ID_STDAPI_UI_GET_KEYS_UTF8 1103
#define COMMAND_ID_STDAPI_UI_SEND_KEYEVENT 1104
#define COMMAND_ID_STDAPI_UI_SEND_KEYS 1105
#define COMMAND_ID_STDAPI_UI_SEND_MOUSE 1106
#define COMMAND_ID_STDAPI_UI_START_KEYSCAN 1107
#define COMMAND_ID_STDAPI_UI_STOP_KEYSCAN 1108
#define COMMAND_ID_STDAPI_UI_UNLOCK_DESKTOP 1109
#define COMMAND_ID_STDAPI_WEBCAM_AUDIO_RECORD 1110
#define COMMAND_ID_STDAPI_WEBCAM_GET_FRAME 1111
#define COMMAND_ID_STDAPI_WEBCAM_LIST 1112
#define COMMAND_ID_STDAPI_WEBCAM_START 1113
#define COMMAND_ID_STDAPI_WEBCAM_STOP 1114
#define COMMAND_ID_STDAPI_AUDIO_MIC_START 1115
#define COMMAND_ID_STDAPI_AUDIO_MIC_STOP 1116
#define COMMAND_ID_STDAPI_AUDIO_MIC_LIST 1117
#define COMMAND_ID_PRIV_ELEVATE_GETSYSTEM 2001
#define COMMAND_ID_PRIV_FS_BLANK_DIRECTORY_MACE 2002
#define COMMAND_ID_PRIV_FS_BLANK_FILE_MACE 2003
#define COMMAND_ID_PRIV_FS_GET_FILE_MACE 2004
#define COMMAND_ID_PRIV_FS_SET_FILE_MACE 2005
#define COMMAND_ID_PRIV_FS_SET_FILE_MACE_FROM_FILE 2006
#define COMMAND_ID_PRIV_PASSWD_GET_SAM_HASHES 2007
#define COMMAND_ID_EXTAPI_ADSI_DOMAIN_QUERY 3001
#define COMMAND_ID_EXTAPI_CLIPBOARD_GET_DATA 3002
#define COMMAND_ID_EXTAPI_CLIPBOARD_MONITOR_DUMP 3003
#define COMMAND_ID_EXTAPI_CLIPBOARD_MONITOR_PAUSE 3004
#define COMMAND_ID_EXTAPI_CLIPBOARD_MONITOR_PURGE 3005
#define COMMAND_ID_EXTAPI_CLIPBOARD_MONITOR_RESUME 3006
#define COMMAND_ID_EXTAPI_CLIPBOARD_MONITOR_START 3007
#define COMMAND_ID_EXTAPI_CLIPBOARD_MONITOR_STOP 3008
#define COMMAND_ID_EXTAPI_CLIPBOARD_SET_DATA 3009
#define COMMAND_ID_EXTAPI_NTDS_PARSE 3010
#define COMMAND_ID_EXTAPI_PAGEANT_SEND_QUERY 3011
#define COMMAND_ID_EXTAPI_SERVICE_CONTROL 3012
#define COMMAND_ID_EXTAPI_SERVICE_ENUM 3013
#define COMMAND_ID_EXTAPI_SERVICE_QUERY 3014
#define COMMAND_ID_EXTAPI_WINDOW_ENUM 3015
#define COMMAND_ID_EXTAPI_WMI_QUERY 3016
#define COMMAND_ID_SNIFFER_CAPTURE_DUMP 4001
#define COMMAND_ID_SNIFFER_CAPTURE_DUMP_READ 4002
#define COMMAND_ID_SNIFFER_CAPTURE_RELEASE 4003
#define COMMAND_ID_SNIFFER_CAPTURE_START 4004
#define COMMAND_ID_SNIFFER_CAPTURE_STATS 4005
#define COMMAND_ID_SNIFFER_CAPTURE_STOP 4006
#define COMMAND_ID_SNIFFER_INTERFACES 4007
#define COMMAND_ID_WINPMEM_DUMP_RAM 7001
#define COMMAND_ID_KIWI_EXEC_CMD 8001
#define COMMAND_ID_UNHOOK_PE 10001
#define COMMAND_ID_ESPIA_IMAGE_GET_DEV_SCREEN 11001
#define COMMAND_ID_INCOGNITO_ADD_GROUP_USER 12001
#define COMMAND_ID_INCOGNITO_ADD_LOCALGROUP_USER 12002
#define COMMAND_ID_INCOGNITO_ADD_USER 12003
#define COMMAND_ID_INCOGNITO_IMPERSONATE_TOKEN 12004
#define COMMAND_ID_INCOGNITO_LIST_TOKENS 12005
#define COMMAND_ID_INCOGNITO_SNARF_HASHES 12006
#define COMMAND_ID_PYTHON_EXECUTE 13001
#define COMMAND_ID_PYTHON_RESET 13002
#define COMMAND_ID_POWERSHELL_ASSEMBLY_LOAD 14001
#define COMMAND_ID_POWERSHELL_EXECUTE 14002
#define COMMAND_ID_POWERSHELL_SESSION_REMOVE 14003
#define COMMAND_ID_POWERSHELL_SHELL 14004
#define COMMAND_ID_LANATTACKS_ADD_TFTP_FILE 15001
#define COMMAND_ID_LANATTACKS_DHCP_LOG 15002
#define COMMAND_ID_LANATTACKS_RESET_DHCP 15003
#define COMMAND_ID_LANATTACKS_RESET_TFTP 15004
#define COMMAND_ID_LANATTACKS_SET_DHCP_OPTION 15005
#define COMMAND_ID_LANATTACKS_START_DHCP 15006
#define COMMAND_ID_LANATTACKS_START_TFTP 15007
#define COMMAND_ID_LANATTACKS_STOP_DHCP 15008
#define COMMAND_ID_LANATTACKS_STOP_TFTP 15009
#define COMMAND_ID_PEINJECTOR_INJECT_SHELLCODE 16001
#define COMMAND_ID_MIMIKATZ_CUSTOM_COMMAND 17001
#define COMMAND_ID_BOFLOADER_EXECUTE 18001

#endif
