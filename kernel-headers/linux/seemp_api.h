/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _SEEMP_API_H_
#define _SEEMP_API_H_
#define SEEMP_API_kernel__rtic 100000
#define SEEMP_API_kernel__oom_adjust_write 0
#define SEEMP_API_kernel__sendto 1
#define SEEMP_API_kernel__recvfrom 2
#define SEEMP_API_View__onTouchEvent 3
#define SEEMP_API_View__onKeyDown 4
#define SEEMP_API_View__onKeyUp 5
#define SEEMP_API_View__onTrackBallEvent 6
#define SEEMP_API_android_provider_Settings__get_ANDROID_ID_ 7
#define SEEMP_API_TelephonyManager__getDeviceId 8
#define SEEMP_API_TelephonyManager__getLine1Number 9
#define SEEMP_API_Telephony__query 10
#define SEEMP_API_CallerInfo__getCallerId 11
#define SEEMP_API_CallerInfo__getCallerInfo 12
#define SEEMP_API_ContentResolver__query 13
#define SEEMP_API_AccountManagerService__getPassword 14
#define SEEMP_API_AccountManagerService__getUserData 15
#define SEEMP_API_AccountManagerService__addAccount 16
#define SEEMP_API_AccountManagerService__removeAccount 17
#define SEEMP_API_AccountManagerService__setPassword 18
#define SEEMP_API_AccountManagerService__clearPassword 19
#define SEEMP_API_AccountManagerService__setUserData 20
#define SEEMP_API_AccountManagerService__editProperties 21
#define SEEMP_API_AccountManager__getPassword 22
#define SEEMP_API_AccountManager__getUserData 23
#define SEEMP_API_AccountManager__addAccountExplicitly 24
#define SEEMP_API_AccountManager__removeAccount 25
#define SEEMP_API_AccountManager__setPassword 26
#define SEEMP_API_AccountManager__clearPassword 27
#define SEEMP_API_AccountManager__setUserData 28
#define SEEMP_API_AccountManager__addAccount 29
#define SEEMP_API_AccountManager__editProperties 30
#define SEEMP_API_AccountManager__doWork 31
#define SEEMP_API_Browser__getAllBookmarks 32
#define SEEMP_API_Browser__getAllVisitedUrls 33
#define SEEMP_API_Browser__getVisitedLike 34
#define SEEMP_API_Browser__getVisitedHistory 35
#define SEEMP_API_Browser__requestAllIcons 36
#define SEEMP_API_ContentResolver__insert 37
#define SEEMP_API_CalendarContract__insert 38
#define SEEMP_API_CalendarContract__alarmExists 39
#define SEEMP_API_CalendarContract__findNextAlarmTime 40
#define SEEMP_API_CalendarContract__query 41
#define SEEMP_API_LocationManager___requestLocationUpdates 42
#define SEEMP_API_LocationManager__addGpsStatusListener 43
#define SEEMP_API_LocationManager__addNmeaListener 44
#define SEEMP_API_LocationManager__addProximityAlert 45
#define SEEMP_API_LocationManager__getLastKnownLocation 46
#define SEEMP_API_LocationManager__requestLocationUpdates 47
#define SEEMP_API_LocationManager__sendExtraCommand 48
#define SEEMP_API_TelephonyManager__getCellLocation 49
#define SEEMP_API_TelephonyManager__getNeighboringCellInfo 50
#define SEEMP_API_GeolocationService__registerForLocationUpdates 51
#define SEEMP_API_GeolocationService__setEnableGps 52
#define SEEMP_API_GeolocationService__start 53
#define SEEMP_API_WebChromeClient__onGeolocationPermissionsShowPrompt 54
#define SEEMP_API_WifiManager__getScanResults 55
#define SEEMP_API_adB__enable 56
#define SEEMP_API_adB__disable 57
#define SEEMP_API_adB__startDiscovery 58
#define SEEMP_API_adB__listenUsingInsecureRfcommWithServiceRecord 59
#define SEEMP_API_adB__listenUsingSecureRfcommWithServiceRecord 60
#define SEEMP_API_adB__getBondedDevices 61
#define SEEMP_API_adB__getRemoteDevice 62
#define SEEMP_API_adB__getState 63
#define SEEMP_API_adB__getProfileConnectionState 64
#define SEEMP_API_Camera__takePicture 65
#define SEEMP_API_Camera__setPreviewCallback 66
#define SEEMP_API_Camera__setPreviewCallbackWithBuffer 67
#define SEEMP_API_Camera__setOneShotPreviewCallback 68
#define SEEMP_API_android_media_MediaRecorder__start 69
#define SEEMP_API_AudioRecord__startRecording 70
#define SEEMP_API_AudioRecord__start 71
#define SEEMP_API_SpeechRecognizer__startListening 72
#define SEEMP_API_at_SmsManager__sendDataMessage 73
#define SEEMP_API_at_SmsManager__sendMultipartTextMessage 74
#define SEEMP_API_at_SmsManager__sendTextMessage 75
#define SEEMP_API_at_gsm_SmsManager__sendDataMessage 76
#define SEEMP_API_at_gsm_SmsManager__sendMultipartTextMessage 77
#define SEEMP_API_at_gsm_SmsManager__sendTextMessage 78
#define SEEMP_API_at_SmsManager__copyMessageToIcc 79
#define SEEMP_API_at_SmsManager__deleteMessageFromIcc 80
#define SEEMP_API_at_SmsManager__updateMessageOnIcc 81
#define SEEMP_API_at_gsm_SmsManager__copyMessageToSim 82
#define SEEMP_API_at_gsm_SmsManager__deleteMessageFromSim 83
#define SEEMP_API_at_gsm_SmsManager__updateMessageOnSim 84
#define SEEMP_API_at_gsm_SmsManager__getAllMessagesFromSim 85
#define SEEMP_API_ContactsContract__getLookupUri 86
#define SEEMP_API_ContactsContract__lookupContact 87
#define SEEMP_API_ContactsContract__openContactPhotoInputStream 88
#define SEEMP_API_ContactsContract__getContactLookupUri 89
#define SEEMP_API_PackageManagerService__installPackage 90
#define SEEMP_API_URL__openConnection 91
#define SEEMP_API_URI__URI 92
#define SEEMP_API_HttpGet__HttpGet 93
#define SEEMP_API_HttpPut__HttpPut 94
#define SEEMP_API_HttpPost__HttpPost 95
#define SEEMP_API_apS__get_ACCELEROMETER_ROTATION_ 96
#define SEEMP_API_apS__get_USER_ROTATION_ 97
#define SEEMP_API_apS__get_ADB_ENABLED_ 98
#define SEEMP_API_apS__get_DEBUG_APP_ 99
#define SEEMP_API_apS__get_WAIT_FOR_DEBUGGER_ 100
#define SEEMP_API_apS__get_AIRPLANE_MODE_ON_ 101
#define SEEMP_API_apS__get_AIRPLANE_MODE_RADIOS_ 102
#define SEEMP_API_apS__get_ALARM_ALERT_ 103
#define SEEMP_API_apS__get_NEXT_ALARM_FORMATTED_ 104
#define SEEMP_API_apS__get_ALWAYS_FINISH_ACTIVITIES_ 105
#define SEEMP_API_apS__get_LOGGING_ID_ 106
#define SEEMP_API_apS__get_ANIMATOR_DURATION_SCALE_ 107
#define SEEMP_API_apS__get_WINDOW_ANIMATION_SCALE_ 108
#define SEEMP_API_apS__get_FONT_SCALE_ 109
#define SEEMP_API_apS__get_SCREEN_BRIGHTNESS_ 110
#define SEEMP_API_apS__get_SCREEN_BRIGHTNESS_MODE_ 111
#define SEEMP_API_apS__get_SCREEN_BRIGHTNESS_MODE_AUTOMATIC_ 112
#define SEEMP_API_apS__get_SCREEN_BRIGHTNESS_MODE_MANUAL_ 113
#define SEEMP_API_apS__get_SCREEN_OFF_TIMEOUT_ 114
#define SEEMP_API_apS__get_DIM_SCREEN_ 115
#define SEEMP_API_apS__get_TRANSITION_ANIMATION_SCALE_ 116
#define SEEMP_API_apS__get_STAY_ON_WHILE_PLUGGED_IN_ 117
#define SEEMP_API_apS__get_WALLPAPER_ACTIVITY_ 118
#define SEEMP_API_apS__get_SHOW_PROCESSES_ 119
#define SEEMP_API_apS__get_SHOW_WEB_SUGGESTIONS_ 120
#define SEEMP_API_apS__get_SHOW_GTALK_SERVICE_STATUS_ 121
#define SEEMP_API_apS__get_USE_GOOGLE_MAIL_ 122
#define SEEMP_API_apS__get_AUTO_TIME_ 123
#define SEEMP_API_apS__get_AUTO_TIME_ZONE_ 124
#define SEEMP_API_apS__get_DATE_FORMAT_ 125
#define SEEMP_API_apS__get_TIME_12_24_ 126
#define SEEMP_API_apS__get_BLUETOOTH_DISCOVERABILITY_ 127
#define SEEMP_API_apS__get_BLUETOOTH_DISCOVERABILITY_TIMEOUT_ 128
#define SEEMP_API_apS__get_BLUETOOTH_ON_ 129
#define SEEMP_API_apS__get_DEVICE_PROVISIONED_ 130
#define SEEMP_API_apS__get_SETUP_WIZARD_HAS_RUN_ 131
#define SEEMP_API_apS__get_DTMF_TONE_WHEN_DIALING_ 132
#define SEEMP_API_apS__get_END_BUTTON_BEHAVIOR_ 133
#define SEEMP_API_apS__get_RINGTONE_ 134
#define SEEMP_API_apS__get_MODE_RINGER_ 135
#define SEEMP_API_apS__get_INSTALL_NON_MARKET_APPS_ 136
#define SEEMP_API_apS__get_LOCATION_PROVIDERS_ALLOWED_ 137
#define SEEMP_API_apS__get_LOCK_PATTERN_ENABLED_ 138
#define SEEMP_API_apS__get_LOCK_PATTERN_TACTILE_FEEDBACK_ENABLED_ 139
#define SEEMP_API_apS__get_LOCK_PATTERN_VISIBLE_ 140
#define SEEMP_API_apS__get_NETWORK_PREFERENCE_ 141
#define SEEMP_API_apS__get_DATA_ROAMING_ 142
#define SEEMP_API_apS__get_HTTP_PROXY_ 143
#define SEEMP_API_apS__get_PARENTAL_CONTROL_ENABLED_ 144
#define SEEMP_API_apS__get_PARENTAL_CONTROL_LAST_UPDATE_ 145
#define SEEMP_API_apS__get_PARENTAL_CONTROL_REDIRECT_URL_ 146
#define SEEMP_API_apS__get_RADIO_BLUETOOTH_ 147
#define SEEMP_API_apS__get_RADIO_CELL_ 148
#define SEEMP_API_apS__get_RADIO_NFC_ 149
#define SEEMP_API_apS__get_RADIO_WIFI_ 150
#define SEEMP_API_apS__get_SYS_PROP_SETTING_VERSION_ 151
#define SEEMP_API_apS__get_SETTINGS_CLASSNAME_ 152
#define SEEMP_API_apS__get_TEXT_AUTO_CAPS_ 153
#define SEEMP_API_apS__get_TEXT_AUTO_PUNCTUATE_ 154
#define SEEMP_API_apS__get_TEXT_AUTO_REPLACE_ 155
#define SEEMP_API_apS__get_TEXT_SHOW_PASSWORD_ 156
#define SEEMP_API_apS__get_USB_MASS_STORAGE_ENABLED_ 157
#define SEEMP_API_apS__get_VIBRATE_ON_ 158
#define SEEMP_API_apS__get_HAPTIC_FEEDBACK_ENABLED_ 159
#define SEEMP_API_apS__get_VOLUME_ALARM_ 160
#define SEEMP_API_apS__get_VOLUME_BLUETOOTH_SCO_ 161
#define SEEMP_API_apS__get_VOLUME_MUSIC_ 162
#define SEEMP_API_apS__get_VOLUME_NOTIFICATION_ 163
#define SEEMP_API_apS__get_VOLUME_RING_ 164
#define SEEMP_API_apS__get_VOLUME_SYSTEM_ 165
#define SEEMP_API_apS__get_VOLUME_VOICE_ 166
#define SEEMP_API_apS__get_SOUND_EFFECTS_ENABLED_ 167
#define SEEMP_API_apS__get_MODE_RINGER_STREAMS_AFFECTED_ 168
#define SEEMP_API_apS__get_MUTE_STREAMS_AFFECTED_ 169
#define SEEMP_API_apS__get_NOTIFICATION_SOUND_ 170
#define SEEMP_API_apS__get_APPEND_FOR_LAST_AUDIBLE_ 171
#define SEEMP_API_apS__get_WIFI_MAX_DHCP_RETRY_COUNT_ 172
#define SEEMP_API_apS__get_WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS_ 173
#define SEEMP_API_apS__get_WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON_ 174
#define SEEMP_API_apS__get_WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY_ 175
#define SEEMP_API_apS__get_WIFI_NUM_OPEN_NETWORKS_KEPT_ 176
#define SEEMP_API_apS__get_WIFI_ON_ 177
#define SEEMP_API_apS__get_WIFI_SLEEP_POLICY_ 178
#define SEEMP_API_apS__get_WIFI_SLEEP_POLICY_DEFAULT_ 179
#define SEEMP_API_apS__get_WIFI_SLEEP_POLICY_NEVER_ 180
#define SEEMP_API_apS__get_WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED_ 181
#define SEEMP_API_apS__get_WIFI_STATIC_DNS1_ 182
#define SEEMP_API_apS__get_WIFI_STATIC_DNS2_ 183
#define SEEMP_API_apS__get_WIFI_STATIC_GATEWAY_ 184
#define SEEMP_API_apS__get_WIFI_STATIC_IP_ 185
#define SEEMP_API_apS__get_WIFI_STATIC_NETMASK_ 186
#define SEEMP_API_apS__get_WIFI_USE_STATIC_IP_ 187
#define SEEMP_API_apS__get_WIFI_WATCHDOG_ACCEPTABLE_PACKET_LOSS_PERCENTAGE_ 188
#define SEEMP_API_apS__get_WIFI_WATCHDOG_AP_COUNT_ 189
#define SEEMP_API_apS__get_WIFI_WATCHDOG_BACKGROUND_CHECK_DELAY_MS_ 190
#define SEEMP_API_apS__get_WIFI_WATCHDOG_BACKGROUND_CHECK_ENABLED_ 191
#define SEEMP_API_apS__get_WIFI_WATCHDOG_BACKGROUND_CHECK_TIMEOUT_MS_ 192
#define SEEMP_API_apS__get_WIFI_WATCHDOG_INITIAL_IGNORED_PING_COUNT_ 193
#define SEEMP_API_apS__get_WIFI_WATCHDOG_MAX_AP_CHECKS_ 194
#define SEEMP_API_apS__get_WIFI_WATCHDOG_ON_ 195
#define SEEMP_API_apS__get_WIFI_WATCHDOG_PING_COUNT_ 196
#define SEEMP_API_apS__get_WIFI_WATCHDOG_PING_DELAY_MS_ 197
#define SEEMP_API_apS__get_WIFI_WATCHDOG_PING_TIMEOUT_MS_ 198
#define SEEMP_API_apS__put_ACCELEROMETER_ROTATION_ 199
#define SEEMP_API_apS__put_USER_ROTATION_ 200
#define SEEMP_API_apS__put_ADB_ENABLED_ 201
#define SEEMP_API_apS__put_DEBUG_APP_ 202
#define SEEMP_API_apS__put_WAIT_FOR_DEBUGGER_ 203
#define SEEMP_API_apS__put_AIRPLANE_MODE_ON_ 204
#define SEEMP_API_apS__put_AIRPLANE_MODE_RADIOS_ 205
#define SEEMP_API_apS__put_ALARM_ALERT_ 206
#define SEEMP_API_apS__put_NEXT_ALARM_FORMATTED_ 207
#define SEEMP_API_apS__put_ALWAYS_FINISH_ACTIVITIES_ 208
#define SEEMP_API_apS__put_ANDROID_ID_ 209
#define SEEMP_API_apS__put_LOGGING_ID_ 210
#define SEEMP_API_apS__put_ANIMATOR_DURATION_SCALE_ 211
#define SEEMP_API_apS__put_WINDOW_ANIMATION_SCALE_ 212
#define SEEMP_API_apS__put_FONT_SCALE_ 213
#define SEEMP_API_apS__put_SCREEN_BRIGHTNESS_ 214
#define SEEMP_API_apS__put_SCREEN_BRIGHTNESS_MODE_ 215
#define SEEMP_API_apS__put_SCREEN_BRIGHTNESS_MODE_AUTOMATIC_ 216
#define SEEMP_API_apS__put_SCREEN_BRIGHTNESS_MODE_MANUAL_ 217
#define SEEMP_API_apS__put_SCREEN_OFF_TIMEOUT_ 218
#define SEEMP_API_apS__put_DIM_SCREEN_ 219
#define SEEMP_API_apS__put_TRANSITION_ANIMATION_SCALE_ 220
#define SEEMP_API_apS__put_STAY_ON_WHILE_PLUGGED_IN_ 221
#define SEEMP_API_apS__put_WALLPAPER_ACTIVITY_ 222
#define SEEMP_API_apS__put_SHOW_PROCESSES_ 223
#define SEEMP_API_apS__put_SHOW_WEB_SUGGESTIONS_ 224
#define SEEMP_API_apS__put_SHOW_GTALK_SERVICE_STATUS_ 225
#define SEEMP_API_apS__put_USE_GOOGLE_MAIL_ 226
#define SEEMP_API_apS__put_AUTO_TIME_ 227
#define SEEMP_API_apS__put_AUTO_TIME_ZONE_ 228
#define SEEMP_API_apS__put_DATE_FORMAT_ 229
#define SEEMP_API_apS__put_TIME_12_24_ 230
#define SEEMP_API_apS__put_BLUETOOTH_DISCOVERABILITY_ 231
#define SEEMP_API_apS__put_BLUETOOTH_DISCOVERABILITY_TIMEOUT_ 232
#define SEEMP_API_apS__put_BLUETOOTH_ON_ 233
#define SEEMP_API_apS__put_DEVICE_PROVISIONED_ 234
#define SEEMP_API_apS__put_SETUP_WIZARD_HAS_RUN_ 235
#define SEEMP_API_apS__put_DTMF_TONE_WHEN_DIALING_ 236
#define SEEMP_API_apS__put_END_BUTTON_BEHAVIOR_ 237
#define SEEMP_API_apS__put_RINGTONE_ 238
#define SEEMP_API_apS__put_MODE_RINGER_ 239
#define SEEMP_API_apS__put_INSTALL_NON_MARKET_APPS_ 240
#define SEEMP_API_apS__put_LOCATION_PROVIDERS_ALLOWED_ 241
#define SEEMP_API_apS__put_LOCK_PATTERN_ENABLED_ 242
#define SEEMP_API_apS__put_LOCK_PATTERN_TACTILE_FEEDBACK_ENABLED_ 243
#define SEEMP_API_apS__put_LOCK_PATTERN_VISIBLE_ 244
#define SEEMP_API_apS__put_NETWORK_PREFERENCE_ 245
#define SEEMP_API_apS__put_DATA_ROAMING_ 246
#define SEEMP_API_apS__put_HTTP_PROXY_ 247
#define SEEMP_API_apS__put_PARENTAL_CONTROL_ENABLED_ 248
#define SEEMP_API_apS__put_PARENTAL_CONTROL_LAST_UPDATE_ 249
#define SEEMP_API_apS__put_PARENTAL_CONTROL_REDIRECT_URL_ 250
#define SEEMP_API_apS__put_RADIO_BLUETOOTH_ 251
#define SEEMP_API_apS__put_RADIO_CELL_ 252
#define SEEMP_API_apS__put_RADIO_NFC_ 253
#define SEEMP_API_apS__put_RADIO_WIFI_ 254
#define SEEMP_API_apS__put_SYS_PROP_SETTING_VERSION_ 255
#define SEEMP_API_apS__put_SETTINGS_CLASSNAME_ 256
#define SEEMP_API_apS__put_TEXT_AUTO_CAPS_ 257
#define SEEMP_API_apS__put_TEXT_AUTO_PUNCTUATE_ 258
#define SEEMP_API_apS__put_TEXT_AUTO_REPLACE_ 259
#define SEEMP_API_apS__put_TEXT_SHOW_PASSWORD_ 260
#define SEEMP_API_apS__put_USB_MASS_STORAGE_ENABLED_ 261
#define SEEMP_API_apS__put_VIBRATE_ON_ 262
#define SEEMP_API_apS__put_HAPTIC_FEEDBACK_ENABLED_ 263
#define SEEMP_API_apS__put_VOLUME_ALARM_ 264
#define SEEMP_API_apS__put_VOLUME_BLUETOOTH_SCO_ 265
#define SEEMP_API_apS__put_VOLUME_MUSIC_ 266
#define SEEMP_API_apS__put_VOLUME_NOTIFICATION_ 267
#define SEEMP_API_apS__put_VOLUME_RING_ 268
#define SEEMP_API_apS__put_VOLUME_SYSTEM_ 269
#define SEEMP_API_apS__put_VOLUME_VOICE_ 270
#define SEEMP_API_apS__put_SOUND_EFFECTS_ENABLED_ 271
#define SEEMP_API_apS__put_MODE_RINGER_STREAMS_AFFECTED_ 272
#define SEEMP_API_apS__put_MUTE_STREAMS_AFFECTED_ 273
#define SEEMP_API_apS__put_NOTIFICATION_SOUND_ 274
#define SEEMP_API_apS__put_APPEND_FOR_LAST_AUDIBLE_ 275
#define SEEMP_API_apS__put_WIFI_MAX_DHCP_RETRY_COUNT_ 276
#define SEEMP_API_apS__put_WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS_ 277
#define SEEMP_API_apS__put_WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON_ 278
#define SEEMP_API_apS__put_WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY_ 279
#define SEEMP_API_apS__put_WIFI_NUM_OPEN_NETWORKS_KEPT_ 280
#define SEEMP_API_apS__put_WIFI_ON_ 281
#define SEEMP_API_apS__put_WIFI_SLEEP_POLICY_ 282
#define SEEMP_API_apS__put_WIFI_SLEEP_POLICY_DEFAULT_ 283
#define SEEMP_API_apS__put_WIFI_SLEEP_POLICY_NEVER_ 284
#define SEEMP_API_apS__put_WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED_ 285
#define SEEMP_API_apS__put_WIFI_STATIC_DNS1_ 286
#define SEEMP_API_apS__put_WIFI_STATIC_DNS2_ 287
#define SEEMP_API_apS__put_WIFI_STATIC_GATEWAY_ 288
#define SEEMP_API_apS__put_WIFI_STATIC_IP_ 289
#define SEEMP_API_apS__put_WIFI_STATIC_NETMASK_ 290
#define SEEMP_API_apS__put_WIFI_USE_STATIC_IP_ 291
#define SEEMP_API_apS__put_WIFI_WATCHDOG_ACCEPTABLE_PACKET_LOSS_PERCENTAGE_ 292
#define SEEMP_API_apS__put_WIFI_WATCHDOG_AP_COUNT_ 293
#define SEEMP_API_apS__put_WIFI_WATCHDOG_BACKGROUND_CHECK_DELAY_MS_ 294
#define SEEMP_API_apS__put_WIFI_WATCHDOG_BACKGROUND_CHECK_ENABLED_ 295
#define SEEMP_API_apS__put_WIFI_WATCHDOG_BACKGROUND_CHECK_TIMEOUT_MS_ 296
#define SEEMP_API_apS__put_WIFI_WATCHDOG_INITIAL_IGNORED_PING_COUNT_ 297
#define SEEMP_API_apS__put_WIFI_WATCHDOG_MAX_AP_CHECKS_ 298
#define SEEMP_API_apS__put_WIFI_WATCHDOG_ON_ 299
#define SEEMP_API_apS__put_WIFI_WATCHDOG_PING_COUNT_ 300
#define SEEMP_API_apS__put_WIFI_WATCHDOG_PING_DELAY_MS_ 301
#define SEEMP_API_apS__put_WIFI_WATCHDOG_PING_TIMEOUT_MS_ 302
#define SEEMP_API_Poll__setCumulativeWifiRxMBytes 303
#define SEEMP_API_Poll__setInstantaneousWifiRxMBytes 304
#define SEEMP_API_Poll__setCumulativeWifiRxPackets 305
#define SEEMP_API_Poll__setInstantaneousWifiRxPackets 306
#define SEEMP_API_Poll__setCumulativeWifiTxMBytes 307
#define SEEMP_API_Poll__setInstantaneousWifiTxMBytes 308
#define SEEMP_API_Poll__setCumulativeWifiTxPackets 309
#define SEEMP_API_Poll__setInstantaneousWifiTxPackets 310
#define SEEMP_API_Poll__setCumulativeWifiRxTcpMBytes 311
#define SEEMP_API_Poll__setInstantaneousWifiRxTcpMBytes 312
#define SEEMP_API_Poll__setCumulativeWifiRxTcpPackets 313
#define SEEMP_API_Poll__setInstantaneousWifiRxTcpPackets 314
#define SEEMP_API_Poll__setCumulativeWifiRxUdpMBytes 315
#define SEEMP_API_Poll__setInstantaneousWifiRxUdpMBytes 316
#define SEEMP_API_Poll__setCumulativeWifiRxUdpPackets 317
#define SEEMP_API_Poll__setInstantaneousWifiRxUdpPackets 318
#define SEEMP_API_Poll__setCumulativeWifiRxOtherMBytes 319
#define SEEMP_API_Poll__setInstantaneousWifiRxOtherMBytes 320
#define SEEMP_API_Poll__setCumulativeWifiRxOtherPackets 321
#define SEEMP_API_Poll__setInstantaneousWifiRxOtherPackets 322
#define SEEMP_API_Poll__setCumulativeWifiTxTcpMBytes 323
#define SEEMP_API_Poll__setInstantaneousWifiTxTcpMBytes 324
#define SEEMP_API_Poll__setCumulativeWifiTxTcpPackets 325
#define SEEMP_API_Poll__setInstantaneousWifiTxTcpPackets 326
#define SEEMP_API_Poll__setCumulativeWifiTxUdpMBytes 327
#define SEEMP_API_Poll__setInstantaneousWifiTxUdpMBytes 328
#define SEEMP_API_Poll__setCumulativeWifiTxUdpPackets 329
#define SEEMP_API_Poll__setInstantaneousWifiTxUdpPackets 330
#define SEEMP_API_Poll__setCumulativeWifiTxOtherMBytes 331
#define SEEMP_API_Poll__setInstantaneousWifiTxOtherMBytes 332
#define SEEMP_API_Poll__setCumulativeWifiTxOtherPackets 333
#define SEEMP_API_Poll__setInstantaneousWifiTxOtherPackets 334
#define SEEMP_API_Poll__setCumulativeMobileRxMBytes 335
#define SEEMP_API_Poll__setInstantaneousMobileRxMBytes 336
#define SEEMP_API_Poll__setCumulativeMobileRxPackets 337
#define SEEMP_API_Poll__setInstantaneousMobileRxPackets 338
#define SEEMP_API_Poll__setCumulativeMobileTxMBytes 339
#define SEEMP_API_Poll__setInstantaneousMobileTxMBytes 340
#define SEEMP_API_Poll__setCumulativeMobileTxPackets 341
#define SEEMP_API_Poll__setInstantaneousMobileTxPackets 342
#define SEEMP_API_Poll__setCumulativeMobileRxTcpMBytes 343
#define SEEMP_API_Poll__setInstantaneousMobileRxTcpMBytes 344
#define SEEMP_API_Poll__setCumulativeMobileRxTcpPackets 345
#define SEEMP_API_Poll__setInstantaneousMobileRxTcpPackets 346
#define SEEMP_API_Poll__setCumulativeMobileRxUdpMBytes 347
#define SEEMP_API_Poll__setInstantaneousMobileRxUdpMBytes 348
#define SEEMP_API_Poll__setCumulativeMobileRxUdpPackets 349
#define SEEMP_API_Poll__setInstantaneousMobileRxUdpPackets 350
#define SEEMP_API_Poll__setCumulativeMobileRxOtherMBytes 351
#define SEEMP_API_Poll__setInstantaneousMobileRxOtherMBytes 352
#define SEEMP_API_Poll__setCumulativeMobileRxOtherPackets 353
#define SEEMP_API_Poll__setInstantaneousMobileRxOtherPackets 354
#define SEEMP_API_Poll__setCumulativeMobileTxTcpMBytes 355
#define SEEMP_API_Poll__setInstantaneousMobileTxTcpMBytes 356
#define SEEMP_API_Poll__setCumulativeMobileTxTcpPackets 357
#define SEEMP_API_Poll__setInstantaneousMobileTxTcpPackets 358
#define SEEMP_API_Poll__setCumulativeMobileTxUdpMBytes 359
#define SEEMP_API_Poll__setInstantaneousMobileTxUdpMBytes 360
#define SEEMP_API_Poll__setCumulativeMobileTxUdpPackets 361
#define SEEMP_API_Poll__setInstantaneousMobileTxUdpPackets 362
#define SEEMP_API_Poll__setCumulativeMobileTxOtherMBytes 363
#define SEEMP_API_Poll__setInstantaneousMobileTxOtherMBytes 364
#define SEEMP_API_Poll__setCumulativeMobileTxOtherPackets 365
#define SEEMP_API_Poll__setInstantaneousMobileTxOtherPackets 366
#define SEEMP_API_Poll__setNumSockets 367
#define SEEMP_API_Poll__setNumTcpStateListen 368
#define SEEMP_API_Poll__setNumTcpStateEstablished 369
#define SEEMP_API_Poll__setNumLocalIp 370
#define SEEMP_API_Poll__setNumLocalPort 371
#define SEEMP_API_Poll__setNumRemoteIp 372
#define SEEMP_API_Poll__setNumRemotePort 373
#define SEEMP_API_Poll__setNumRemoteTuple 374
#define SEEMP_API_Poll__setNumInode 375
#define SEEMP_API_Instrumentation__startActivitySync 376
#define SEEMP_API_Instrumentation__execStartActivity 377
#define SEEMP_API_Instrumentation__execStartActivitiesAsUser 378
#define SEEMP_API_Instrumentation__execStartActivityAsCaller 379
#define SEEMP_API_Instrumentation__execStartActivityFromAppTask 380
#define SEEMP_API_ah_SystemSensorManager__registerListenerImpl 381
#define SEEMP_API_ah_SystemSensorManager__unregisterListenerImpl 382
#define SEEMP_API_WindowManagerImpl__addView 383
#define SEEMP_API_WindowManagerImpl__updateViewLayout 384
#define SEEMP_API_ActivityManagerService__applyOomAdjLocked 385
#define SEEMP_API_ProcessRecord__makeActive 386
#define SEEMP_API_ProcessRecord__makeInactive 387
#define SEEMP_API_TelephonyManager__getSimSerialNumber 388
#define SEEMP_API_TelephonyManager__getSubscriberId 389
#endif