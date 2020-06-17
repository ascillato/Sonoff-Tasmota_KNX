/*
  hu-HU.h - localization for Hungarian in Hungary for Tasmota

  Copyright (C) 2020  Theo Arends

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _LANGUAGE_HU_HU_H_
#define _LANGUAGE_HU_HU_H_

/*************************** ATTENTION *******************************\
 *
 * Due to memory constraints only UTF-8 is supported.
 * To save code space keep text as short as possible.
 * Time and Date provided by SDK can not be localized (yet).
 * Use online command StateText to translate ON, OFF, HOLD and TOGGLE.
 * Use online command Prefix to translate cmnd, stat and tele.
 *
 * Updated until v5.12.0e
\*********************************************************************/

//#define LANGUAGE_MODULE_NAME         // Enable to display "Module Generic" (ie Spanish), Disable to display "Generic Module" (ie English)

#define LANGUAGE_LCID 1038
// HTML (ISO 639-1) Language Code
#define D_HTML_LANGUAGE "hu"

// "2017-03-07T11:08:02" - ISO8601:2004
#define D_YEAR_MONTH_SEPARATOR "."
#define D_MONTH_DAY_SEPARATOR "."
#define D_DATE_TIME_SEPARATOR " "
#define D_HOUR_MINUTE_SEPARATOR ":"
#define D_MINUTE_SECOND_SEPARATOR ":"

#define D_DAY3LIST "VasHétKedSzeCsüPénSzo"
#define D_MONTH3LIST "JanFebMárÁprMájJúnJúlAugSzeOktNovDec"

// Non JSON decimal separator
#define D_DECIMAL_SEPARATOR "."

// Common
#define D_ADMIN "Admin"
#define D_AIR_QUALITY "Levegőminőség"
#define D_AP "AP"                    // Access Point
#define D_AS "mint"
#define D_AUTO "AUTO"
#define D_BLINK "Villogás"
#define D_BLINKOFF "Villogás ki"
#define D_BOOT_COUNT "Újraindulások száma"
#define D_BRIGHTLIGHT "Max. fényerő"
#define D_BSSID "BSSID"
#define D_BUTTON "Gomb"
#define D_BY "by"                    // Written by me
#define D_BYTES "Byte-ok"
#define D_CELSIUS "Celsius"
#define D_CHANNEL "Csatorna"
#define D_CO2 "Szén-dioxid"
#define D_CODE "kód"                // Button code
#define D_COLDLIGHT "Hideg fény"
#define D_COMMAND "Parancs"
#define D_CONNECTED "Csatlakoztatva"
#define D_CORS_DOMAIN "CORS Domain"
#define D_COUNT "Szám"
#define D_COUNTER "Számláló"
#define D_CT_POWER "CT Power"
#define D_CURRENT "Áramerősség"          // As in Voltage and Current
#define D_DATA "Adat"
#define D_DARKLIGHT "Min. fényerő"
#define D_DEBUG "Debug"
#define D_DEWPOINT "Dew point"
#define D_DISABLED "Letiltva"
#define D_DISTANCE "Távolság"
#define D_DNS_SERVER "DNS szerver"
#define D_DONE "Kész"
#define D_DST_TIME "nyári idő"
#define D_ECO2 "eCO₂"
#define D_EMULATION "Emuláció"
#define D_ENABLED "Engedélyezve"
#define D_ERASE "Törlés"
#define D_ERROR "Hiba"
#define D_FAHRENHEIT "Fahrenheit"
#define D_FAILED "Sikertelen"
#define D_FALLBACK "Fallback"
#define D_FALLBACK_TOPIC "fallback topik"
#define D_FALSE "Hamis"
#define D_FILE "Fájl"
#define D_FLOW_RATE "Flow rate"
#define D_FREE_MEMORY "Szabad memória"
#define D_PSR_MAX_MEMORY "PS-RAM Memory"
#define D_PSR_FREE_MEMORY "PS-RAM free Memory"
#define D_FREQUENCY "Frekvencia"
#define D_GAS "Gáz"
#define D_GATEWAY "Átjáró"
#define D_GROUP "Csoport"
#define D_HOST "Hoszt"
#define D_HOSTNAME "Hosztnév"
#define D_HUMIDITY "Páratartalom"
#define D_ILLUMINANCE "Megvilágítás"
#define D_IMMEDIATE "azonnali"      // Button immediate
#define D_INDEX "Index"
#define D_INFO "Info"
#define D_INFRARED "Infravörös"
#define D_INITIALIZED "Inicializálva"
#define D_IP_ADDRESS "IP cím"
#define D_LIGHT "Fény"
#define D_LWT "LWT"
#define D_MODULE "Modul"
#define D_MOISTURE "Moisture"
#define D_MQTT "MQTT"
#define D_MULTI_PRESS "több lenyomás"
#define D_NOISE "Zaj"
#define D_NONE "nincs"
#define D_OFF "Ki"
#define D_OFFLINE "Offline"
#define D_OK "OK"
#define D_ON "Be"
#define D_ONLINE "Online"
#define D_PASSWORD "Jelszó"
#define D_PORT "Port"
#define D_POWER_FACTOR "Teljesítménytényező"
#define D_POWERUSAGE "Energiafelhasználás"
#define D_POWERUSAGE_ACTIVE "Aktív teljesítmény"
#define D_POWERUSAGE_APPARENT "Látszólagos teljesítmény"
#define D_POWERUSAGE_REACTIVE "Reaktív teljesítmény"
#define D_PRESSURE "Nyomás"
#define D_PRESSUREATSEALEVEL "Tengerszinti nyomás"
#define D_PROGRAM_FLASH_SIZE "Program flash méret"
#define D_PROGRAM_SIZE "Program méret"
#define D_PROJECT "Projekt"
#define D_RAIN "Eső"
#define D_RANGE "Range"
#define D_RECEIVED "Érkezett"
#define D_RESTART "Újraindítás"
#define D_RESTARTING "Újraindítás"
#define D_RESTART_REASON "Utolsó újraindulás oka"
#define D_RESTORE "Visszaállítás"
#define D_RETAINED "retained"
#define D_RULE "Szabály"
#define D_SAVE "Mentés"
#define D_SENSOR "Szenzor"
#define D_SSID "SSID"
#define D_START ""
#define D_STD_TIME "STD"
#define D_STOP "Leállítás"
#define D_SUBNET_MASK "Alhálózati maszk"
#define D_SUBSCRIBE_TO "Feliratkozás a(z)"
#define D_UNSUBSCRIBE_FROM "Unsubscribe from"
#define D_SUCCESSFUL "Sikeres"
#define D_SUNRISE "Napkelte"
#define D_SUNSET "Napnyugta"
#define D_TEMPERATURE "Hőmérséklet"
#define D_TO "-nak"
#define D_TOGGLE "Megfordítás"
#define D_TOPIC "Topic"
#define D_TOTAL_USAGE "Total Usage"
#define D_TRANSMIT "Továbbít"
#define D_TRUE "Igaz"
#define D_TVOC "TVOC"
#define D_UPGRADE "Frissítés"
#define D_UPLOAD "Feltöltés"
#define D_UPTIME "Üzemidő"
#define D_USER "Felhasználó"
#define D_UTC_TIME "UTC"
#define D_UV_INDEX "UV index"
#define D_UV_INDEX_1 "alacsony"
#define D_UV_INDEX_2 "közepes"
#define D_UV_INDEX_3 "magas"
#define D_UV_INDEX_4 "veszélyes"
#define D_UV_INDEX_5 "égés L1/2"
#define D_UV_INDEX_6 "égés L3"
#define D_UV_INDEX_7 "tartományon kívül"
#define D_UV_LEVEL "UV szint"
#define D_UV_POWER "UV teljesítmény"
#define D_VERSION "Verzió"
#define D_VOLTAGE "Feszültség"
#define D_WEIGHT "Tömeg"
#define D_WARMLIGHT "Meleg fény"
#define D_WEB_SERVER "Webszerver"

// tasmota.ino
#define D_WARNING_MINIMAL_VERSION "VIGYÁZZ! Ez a verzió nem támogat tartós beállításokat"
#define D_LEVEL_10 "szint 1-0"
#define D_LEVEL_01 "szint 0-1"
#define D_SERIAL_LOGGING_DISABLED "Soros naplózás kikapcsolva"
#define D_SYSLOG_LOGGING_REENABLED "Syslog logolás újraengedélyezve"

#define D_SET_BAUDRATE_TO "Baudrate beállítása"
#define D_RECEIVED_TOPIC "Érkezett topic"
#define D_DATA_SIZE "Adatméret"
#define D_ANALOG_INPUT "Analóg"

// support.ino
#define D_OSWATCH "osWatch"
#define D_BLOCKED_LOOP "Tiltott hurok"
#define D_WPS_FAILED_WITH_STATUS "WPSconfig SIKERTELEN státusz:"
#define D_ACTIVE_FOR_3_MINUTES "aktválás 3 percre"
#define D_FAILED_TO_START "sikertelen indítás"
#define D_PATCH_ISSUE_2186 "Patch issue 2186"
#define D_CONNECTING_TO_AP "AP-hoz csatlakozás:"
#define D_IN_MODE "mód:"
#define D_CONNECT_FAILED_NO_IP_ADDRESS "Sikertelen csatlakozás, nincs kiosztott IP cím"
#define D_CONNECT_FAILED_AP_NOT_REACHED "Sikertelen csatlakozás, AP nem elérhető"
#define D_CONNECT_FAILED_WRONG_PASSWORD "Sikertelen csatlakozás"
#define D_CONNECT_FAILED_AP_TIMEOUT "Sikertelen csatlakozás AP időtúllépés miatt"
#define D_ATTEMPTING_CONNECTION "Csatlakozás..."
#define D_CHECKING_CONNECTION "Kapcsolat ellenőrzése..."
#define D_QUERY_DONE "Lekérés kész. MQTT szolgáltatás aktív"
#define D_MQTT_SERVICE_FOUND "élő MQTT szolgáltatás a(z)"
#define D_FOUND_AT "a(z)"
#define D_SYSLOG_HOST_NOT_FOUND "Syslog hoszt nem található"

// settings.ino
#define D_SAVED_TO_FLASH_AT "Flash-re mentve a(z)"
#define D_LOADED_FROM_FLASH_AT "Flash-ről betöltve a(z)"
#define D_USE_DEFAULTS "Alapértelmezett beáll. használata"
#define D_ERASED_SECTOR "Szektor törlése"

// xdrv_02_webserver.ino
#define D_NOSCRIPT "A Tasmota használatához engedélyezd a Javascriptet!"
#define D_MINIMAL_FIRMWARE_PLEASE_UPGRADE "MINIMÁLIS firmware<br>frissítsd!"
#define D_WEBSERVER_ACTIVE_ON "Webszerver aktív:"
#define D_WITH_IP_ADDRESS "IP cím:"
#define D_WEBSERVER_STOPPED "Webszerver leállítva"
#define D_FILE_NOT_FOUND "Fájl nem található"
#define D_REDIRECTED "Átírányítás captive portálra"
#define D_WIFIMANAGER_SET_ACCESSPOINT_AND_STATION "WifiManager AccessPoint(AP) és Station(ST) beállítása"
#define D_WIFIMANAGER_SET_ACCESSPOINT "Wifimanager AccessPoint(AP) beállítása"
#define D_TRYING_TO_CONNECT "Csatlakozás a hálózatra..."

#define D_RESTART_IN "Újraindítás..."
#define D_SECONDS "másodperc"
#define D_DEVICE_WILL_RESTART "Az eszköz hamarosan újraindul..."
#define D_BUTTON_TOGGLE "Megfordítás"
#define D_CONFIGURATION "Beállítások"
#define D_INFORMATION "Információ"
#define D_FIRMWARE_UPGRADE "Firmware frissítés"
#define D_CONSOLE "Konzol"
#define D_CONFIRM_RESTART "Biztosan újraindítsam a modult?"

#define D_CONFIGURE_MODULE "Eszközbeállítások"
#define D_CONFIGURE_WIFI "WiFi konfiguráció"
#define D_CONFIGURE_MQTT "MQTT konfiguráció"
#define D_CONFIGURE_DOMOTICZ "Domoticz konfiguráció"
#define D_CONFIGURE_LOGGING "Naplózás beállításai"
#define D_CONFIGURE_OTHER "Egyéb beállítások"
#define D_CONFIRM_RESET_CONFIGURATION "Biztosan töröljem a beállításokat?"
#define D_RESET_CONFIGURATION "Beállítások törlése"
#define D_BACKUP_CONFIGURATION "Beállítások mentése"
#define D_RESTORE_CONFIGURATION "Beállítások visszatöltése"
#define D_MAIN_MENU "Menü"

#define D_MODULE_PARAMETERS "Modul paraméterek"
#define D_MODULE_TYPE "Alkalmazott modul"
#define D_PULLUP_ENABLE "Nincs felhúzó ellenállás"
#define D_ADC "ADC"
#define D_GPIO "GPIO"
#define D_SERIAL_IN "Soros BE"
#define D_SERIAL_OUT "Soros KI"

#define D_WIFI_PARAMETERS "WiFi paraméterek"
#define D_SCAN_FOR_WIFI_NETWORKS "WiFi hálózat keresése"
#define D_SCAN_DONE "Keresés kész"
#define D_NO_NETWORKS_FOUND "Nincs elérhető hálózat"
#define D_REFRESH_TO_SCAN_AGAIN "Frissíts az újrakereséshez"
#define D_DUPLICATE_ACCESSPOINT "Duplikált access point"
#define D_SKIPPING_LOW_QUALITY "Rossz, alacsony jelminőség"
#define D_RSSI "RSSI"
#define D_WEP "WEP"
#define D_WPA_PSK "WPA PSK"
#define D_WPA2_PSK "WPA2 PSK"
#define D_AP1_SSID "AP1 SSID"
#define D_AP1_PASSWORD "AP1 megosztott kulcs"
#define D_AP2_SSID "AP2 SSID"
#define D_AP2_PASSWORD "AP2 megosztott kulcs"

#define D_MQTT_PARAMETERS "MQTT paraméterek"
#define D_CLIENT "Kliens"
#define D_FULL_TOPIC "Teljes topic"

#define D_LOGGING_PARAMETERS "Naplózási paraméterek"
#define D_SERIAL_LOG_LEVEL "Soros naplózási szint"
#define D_MQTT_LOG_LEVEL "Mqtt log level"
#define D_WEB_LOG_LEVEL "Web naplózási szint"
#define D_SYS_LOG_LEVEL "Syslog szint"
#define D_MORE_DEBUG "Részletes hibakeresés"
#define D_SYSLOG_HOST "Syslog hoszt"
#define D_SYSLOG_PORT "Syslog port"
#define D_TELEMETRY_PERIOD "Telemetria (mp.)"

#define D_OTHER_PARAMETERS "Egyéb beállítások"
#define D_TEMPLATE "Template"
#define D_ACTIVATE "Activate"
#define D_DEVICE_NAME "Device Name"
#define D_WEB_ADMIN_PASSWORD "Web admin jelszó"
#define D_MQTT_ENABLE "MQTT engedélyezése"
#define D_FRIENDLY_NAME "Név"
#define D_BELKIN_WEMO "Belkin WeMo"
#define D_HUE_BRIDGE "Hue Bridge"
#define D_SINGLE_DEVICE "single device"
#define D_MULTI_DEVICE "multi device"

#define D_CONFIGURE_TEMPLATE "Configure Template"
#define D_TEMPLATE_PARAMETERS "Template parameters"
#define D_TEMPLATE_NAME "Name"
#define D_BASE_TYPE "Based on"
#define D_TEMPLATE_FLAGS "Options"

#define D_SAVE_CONFIGURATION "Beállítások mentése"
#define D_CONFIGURATION_SAVED "Beállítások elmentve"
#define D_CONFIGURATION_RESET "Beállítások visszaállítása"

#define D_PROGRAM_VERSION "Program verzió"
#define D_BUILD_DATE_AND_TIME "Build ideje"
#define D_CORE_AND_SDK_VERSION "Core/SDK verzió"
#define D_FLASH_WRITE_COUNT "Flash írások száma"
#define D_MAC_ADDRESS "MAC cím"
#define D_MQTT_HOST "MQTT hoszt"
#define D_MQTT_PORT "MQTT port"
#define D_MQTT_CLIENT "MQTT kliens"
#define D_MQTT_USER "MQTT felhasználó"
#define D_MQTT_TOPIC "MQTT topic"
#define D_MQTT_GROUP_TOPIC "MQTT csoport topic"
#define D_MQTT_FULL_TOPIC "MQTT teljes topic"
#define D_MDNS_DISCOVERY "mDNS láthatóság"
#define D_MDNS_ADVERTISE "mDNS hirdetés"
#define D_ESP_CHIP_ID "ESP chip ID"
#define D_FLASH_CHIP_ID "Flash chip ID"
#define D_FLASH_CHIP_SIZE "Flash mérete"
#define D_FREE_PROGRAM_SPACE "Szabad programhely"

#define D_UPGRADE_BY_WEBSERVER "Frissítés távoli szerverről"
#define D_OTA_URL "OTA URL"
#define D_START_UPGRADE "Frissítés"
#define D_UPGRADE_BY_FILE_UPLOAD "Frissítés helyi fájllal"
#define D_UPLOAD_STARTED "Feltöltés elindítva"
#define D_UPGRADE_STARTED "Frissítés elindítva"
#define D_UPLOAD_DONE "Feltöltés kész"
#define D_UPLOAD_ERR_1 "Nincs fájl kijelölve"
#define D_UPLOAD_ERR_2 "Nincs elég memória"
#define D_UPLOAD_ERR_3 "A \"magic byte\" nem 0xE9"
#define D_UPLOAD_ERR_4 "A program flashméret nagyobb a valós flashméretnél"
#define D_UPLOAD_ERR_5 "Feltöltési buffer hiba"
#define D_UPLOAD_ERR_6 "Feltöltés sikertelen. Endegélyezd a 3. szintű naplózást"
#define D_UPLOAD_ERR_7 "Feltöltés megszakítva"
#define D_UPLOAD_ERR_8 "Érvénytelen fájl"
#define D_UPLOAD_ERR_9 "A fájl túl nagy"
#define D_UPLOAD_ERR_10 "Az RF chip inicializálása sikertelen"
#define D_UPLOAD_ERR_11 "Az RF chip törlése sikertelen"
#define D_UPLOAD_ERR_12 "Az RF chip írása sikertelen"
#define D_UPLOAD_ERR_13 "Az RF firmware dekódolása sikertelen"
#define D_UPLOAD_ERR_14 "Not compatible"
#define D_UPLOAD_ERROR_CODE "Feltöltési hibakód"

#define D_ENTER_COMMAND "Kérem a parancsot..."
#define D_ENABLE_WEBLOG_FOR_RESPONSE "Engedélyezz 2-es szintű webnaplózást több információért"
#define D_NEED_USER_AND_PASSWORD "Szükséges a user=<felhasználónév>&password=<jelszó> paraméter"

// xdrv_01_mqtt.ino
#define D_FINGERPRINT "TLS fingerprint hitelesítése..."
#define D_TLS_CONNECT_FAILED_TO "TLS csatlakozás sikertelen a(z)"
#define D_RETRY_IN "Újrapróbálás"
#define D_VERIFIED "Fingerprint hitelesítve"
#define D_INSECURE "Nem biztonságos kapcsolat érvénytelen fingerprint miatt"
#define D_CONNECT_FAILED_TO "Sikertelen csatlakozás a(z)"

// xplg_wemohue.ino
#define D_MULTICAST_DISABLED "Multicast kikapcsolva"
#define D_MULTICAST_REJOINED "Multicast (újra)csatlakozás"
#define D_MULTICAST_JOIN_FAILED "Multicast csatlakozás sikertelen"
#define D_FAILED_TO_SEND_RESPONSE "Nem sikerült választ küldeni"

#define D_WEMO "WeMo"
#define D_WEMO_BASIC_EVENT "WeMo basic event"
#define D_WEMO_EVENT_SERVICE "WeMo event service"
#define D_WEMO_META_SERVICE "WeMo meta service"
#define D_WEMO_SETUP "WeMo beállítás"
#define D_RESPONSE_SENT "Válasz elküldve"

#define D_HUE "Hue"
#define D_HUE_BRIDGE_SETUP "Hue beállítás"
#define D_HUE_API_NOT_IMPLEMENTED "Hue API nincs implementálva"
#define D_HUE_API "Hue API"
#define D_HUE_POST_ARGS "Hue POST argumentumok"
#define D_3_RESPONSE_PACKETS_SENT "3 válaszcsomag elküldve"

// xdrv_07_domoticz.ino
#define D_DOMOTICZ_PARAMETERS "Domoticz paraméterek"
#define D_DOMOTICZ_IDX "Idx"
#define D_DOMOTICZ_KEY_IDX "Key idx"
#define D_DOMOTICZ_SWITCH_IDX "Kapcsoló idx"
#define D_DOMOTICZ_SENSOR_IDX "Szenzor idx"
  #define D_DOMOTICZ_TEMP "Hőmérséklet"
  #define D_DOMOTICZ_TEMP_HUM "Hőmérséklet, páratartalom"
  #define D_DOMOTICZ_TEMP_HUM_BARO "Hőmérséklet, páratartalom, légnyomás"
  #define D_DOMOTICZ_POWER_ENERGY "Teljesítmény, energia"
  #define D_DOMOTICZ_ILLUMINANCE "Fényerő"
  #define D_DOMOTICZ_COUNT "Szám/PM1"
  #define D_DOMOTICZ_VOLTAGE "Feszültség/PM2.5"
  #define D_DOMOTICZ_CURRENT "Áram/PM10"
  #define D_DOMOTICZ_AIRQUALITY "Légminőség"
  #define D_DOMOTICZ_P1_SMART_METER "P1SmartMeter"
#define D_DOMOTICZ_UPDATE_TIMER "Frissítési időzítő"

// xdrv_09_timers.ino
#define D_CONFIGURE_TIMER "Időzítő beállításai"
#define D_TIMER_PARAMETERS "Időzítő paraméterei"
#define D_TIMER_ENABLE "Időzítők engedélyezve"
#define D_TIMER_ARM "Be"
#define D_TIMER_TIME "Idő"
#define D_TIMER_DAYS "Napok"
#define D_TIMER_REPEAT "Ismétlés"
#define D_TIMER_OUTPUT "Kimenet"
#define D_TIMER_ACTION "Művelet"

// xdrv_10_knx.ino
#define D_CONFIGURE_KNX "KNX beállításai"
#define D_KNX_PARAMETERS "KNX paraméterei"
#define D_KNX_GENERAL_CONFIG "Általános"
#define D_KNX_PHYSICAL_ADDRESS "Fizikai cím"
#define D_KNX_PHYSICAL_ADDRESS_NOTE "(egyedinek kell lennie a KNX hálózaton)"
#define D_KNX_ENABLE "KNX engedélyezése"
#define D_KNX_GROUP_ADDRESS_TO_WRITE "Íráshoz használt csoportcímek"
#define D_ADD "Hozzáadás"
#define D_DELETE "Törlés"
#define D_REPLY "Válasz"
#define D_KNX_GROUP_ADDRESS_TO_READ "Fogadáshoz használt csoportcímek"
#define D_RECEIVED_FROM "Fogadva tőle:"
#define D_KNX_COMMAND_WRITE "Írás"
#define D_KNX_COMMAND_READ "Olvasás"
#define D_KNX_COMMAND_OTHER "Egyáb"
#define D_SENT_TO "küldve neki:"
#define D_KNX_WARNING "A csoportcím ( 0 / 0 / 0 ) fenntartott és nem használható."
#define D_KNX_ENHANCEMENT "Communication Enhancement"
#define D_KNX_TX_SLOT "KNX TX"
#define D_KNX_RX_SLOT "KNX RX"
#define D_KNX_TX_SCENE "KNX SCENE TX"
#define D_KNX_RX_SCENE "KNX SCENE RX"

// xdrv_03_energy.ino
#define D_ENERGY_TODAY "Mai energia"
#define D_ENERGY_YESTERDAY "Tegnapi energia"
#define D_ENERGY_TOTAL "Összes energia"

// xdrv_27_shutter.ino
#define D_OPEN "Open"
#define D_CLOSE "Close"
#define D_DOMOTICZ_SHUTTER "Shutter"

// xdrv_28_pcf8574.ino
#define D_CONFIGURE_PCF8574 "Configure PCF8574"
#define D_PCF8574_PARAMETERS "PCF8574 parameters"
#define D_INVERT_PORTS "Invert Ports"
#define D_DEVICE "Device"
#define D_DEVICE_INPUT "Input"
#define D_DEVICE_OUTPUT "Output"

// xsns_05_ds18b20.ino
#define D_SENSOR_BUSY "Szenzor foglalt"
#define D_SENSOR_CRC_ERROR "Szenzor CRC hiba"
#define D_SENSORS_FOUND "Szenzorok megtalálva"

// xsns_06_dht.ino
#define D_TIMEOUT_WAITING_FOR "Időtúllépés, várakozás"
#define D_START_SIGNAL_LOW "startjel alacsony"
#define D_START_SIGNAL_HIGH "startjel magas"
#define D_PULSE "impulzus"
#define D_CHECKSUM_FAILURE "Checksum hiba"

// xsns_07_sht1x.ino
#define D_SENSOR_DID_NOT_ACK_COMMAND "A szenzor nem nyugtázta a parancsot"
#define D_SHT1X_FOUND "SHT1X megtalálva"

// xsns_18_pms5003.ino
#define D_STANDARD_CONCENTRATION "CF-1 PM"     // Standard Particle CF-1 Particle Matter
#define D_ENVIRONMENTAL_CONCENTRATION "PM"     // Environmetal Particle Matter
#define D_PARTICALS_BEYOND "Részecskék"

// xsns_27_apds9960.ino
#define D_GESTURE "Gesztus"
#define D_COLOR_RED "Red"
#define D_COLOR_GREEN "Green"
#define D_COLOR_BLUE "Blue"
#define D_CCT "CCT"
#define D_PROXIMITY "közelség"

// xsns_32_mpu6050.ino
#define D_AX_AXIS "Gyorsulásm. X-tengely"
#define D_AY_AXIS "Gyorsulásm. Y-tengely"
#define D_AZ_AXIS "Gyorsulásm. Z-tengely"
#define D_GX_AXIS "Giroszkóp X-tengely"
#define D_GY_AXIS "Giroszkóp Y-tengely"
#define D_GZ_AXIS "Giroszkóp Z-tengely"

// xsns_34_hx711.ino
#define D_HX_CAL_REMOVE "Távolítsa el a súlyt"
#define D_HX_CAL_REFERENCE "Helyezze fel a referenciasúlyt"
#define D_HX_CAL_DONE "Kalibrálva"
#define D_HX_CAL_FAIL "Kalibrálási hiba"
#define D_RESET_HX711 "Skála újrabeállítása"
#define D_CONFIGURE_HX711 "Skála konfigurálása"
#define D_HX711_PARAMETERS "Skálaparaméterek"
#define D_ITEM_WEIGHT "Tárgy tömege"
#define D_REFERENCE_WEIGHT "Referenciatömeg"
#define D_CALIBRATE "Kalibrálás"
#define D_CALIBRATION "Kalibrálás"

//xsns_35_tx20.ino
#define D_TX20_WIND_DIRECTION "Szélirány"
#define D_TX20_WIND_SPEED "Szélsebesség"
#define D_TX20_WIND_SPEED_MIN "Min. szélsebesség"
#define D_TX20_WIND_SPEED_MAX "Max. szélsebesség"
#define D_TX20_NORTH "É"
#define D_TX20_EAST "K"
#define D_TX20_SOUTH "D"
#define D_TX20_WEST "NY"

// xsns_53_sml.ino
#define D_TPWRIN "Energy Total-In"
#define D_TPWROUT "Energy Total-Out"
#define D_TPWRCURR "Active Power-In/Out"
#define D_TPWRCURR1 "Active Power-In p1"
#define D_TPWRCURR2 "Active Power-In p2"
#define D_TPWRCURR3 "Active Power-In p3"
#define D_Strom_L1 "Current L1"
#define D_Strom_L2 "Current L2"
#define D_Strom_L3 "Current L3"
#define D_Spannung_L1 "Voltage L1"
#define D_Spannung_L2 "Voltage L2"
#define D_Spannung_L3 "Voltage L3"
#define D_METERNR "Meter_number"
#define D_METERSID "Service ID"
#define D_GasIN "Counter"
#define D_H2oIN "Counter"
#define D_StL1L2L3 "Current L1+L2+L3"
#define D_SpL1L2L3 "Voltage L1+L2+L3/3"

// tasmota_template.h - keep them as short as possible to be able to fit them in GUI drop down box
#define D_SENSOR_NONE          "Nincs"
#define D_SENSOR_USER          "User"
#define D_SENSOR_DHT11         "DHT11"
#define D_SENSOR_AM2301        "AM2301"
#define D_SENSOR_SI7021        "SI7021"
#define D_SENSOR_DS18X20       "DS18x20"
#define D_SENSOR_I2C_SCL       "I2C SCL"
#define D_SENSOR_I2C_SDA       "I2C SDA"
#define D_SENSOR_WS2812        "WS2812"
#define D_SENSOR_DFR562        "MP3 lejátszó"
#define D_SENSOR_IRSEND        "IR adó"
#define D_SENSOR_SWITCH        "Kapcsoló"   // Suffix "1"
#define D_SENSOR_BUTTON        "Gomb"       // Suffix "1"
#define D_SENSOR_RELAY         "Relé"       // Suffix "1i"
#define D_SENSOR_LED           "LED"        // Suffix "1i"
#define D_SENSOR_LED_LINK      "LedLink"    // Suffix "i"
#define D_SENSOR_PWM           "PWM"        // Suffix "1"
#define D_SENSOR_COUNTER       "Számláló"   // Suffix "1"
#define D_SENSOR_IRRECV        "IR vevő"
#define D_SENSOR_MHZ_RX        "MHZ Rx"
#define D_SENSOR_MHZ_TX        "MHZ Tx"
#define D_SENSOR_PZEM004_RX    "PZEM004 Rx"
#define D_SENSOR_PZEM016_RX    "PZEM016 Rx"
#define D_SENSOR_PZEM017_RX    "PZEM017 Rx"
#define D_SENSOR_PZEM0XX_TX    "PZEM0XX Tx"
#define D_SENSOR_SAIR_RX       "SAir Rx"
#define D_SENSOR_SAIR_TX       "SAir Tx"
#define D_SENSOR_SPI_CS        "SPI CS"
#define D_SENSOR_SPI_DC        "SPI DC"
#define D_SENSOR_SPI_MISO      "SPI MISO"
#define D_SENSOR_SPI_MOSI      "SPI MOSI"
#define D_SENSOR_SPI_CLK       "SPI CLK"
#define D_SENSOR_BACKLIGHT     "Háttérfény"
#define D_SENSOR_PMS5003_TX    "PMS5003 Tx"
#define D_SENSOR_PMS5003_RX    "PMS5003 Rx"
#define D_SENSOR_SDS0X1_RX     "SDS0X1 Rx"
#define D_SENSOR_SDS0X1_TX     "SDS0X1 Tx"
#define D_SENSOR_HPMA_RX       "HPMA Rx"
#define D_SENSOR_HPMA_TX       "HPMA Tx"
#define D_SENSOR_SBR_RX        "SerBr Rx"
#define D_SENSOR_SBR_TX        "SerBr Tx"
#define D_SENSOR_SR04_TRIG     "SR04 Tri/TX"
#define D_SENSOR_SR04_ECHO     "SR04 Ech/RX"
#define D_SENSOR_SDM120_TX     "SDMx20 Tx"
#define D_SENSOR_SDM120_RX     "SDMx20 Rx"
#define D_SENSOR_SDM630_TX     "SDM630 Tx"
#define D_SENSOR_SDM630_RX     "SDM630 Rx"
#define D_SENSOR_TM1638_CLK    "TM16 CLK"
#define D_SENSOR_TM1638_DIO    "TM16 DIO"
#define D_SENSOR_TM1638_STB    "TM16 STB"
#define D_SENSOR_HX711_SCK     "HX711 SCK"
#define D_SENSOR_HX711_DAT     "HX711 DAT"
#define D_SENSOR_TX2X_TX       "TX2x"
#define D_SENSOR_RFSEND        "RFSend"
#define D_SENSOR_RFRECV        "RFrecv"
#define D_SENSOR_TUYA_TX       "Tuya Tx"
#define D_SENSOR_TUYA_RX       "Tuya Rx"
#define D_SENSOR_MGC3130_XFER  "MGC3130 Xfr"
#define D_SENSOR_MGC3130_RESET "MGC3130 Rst"
#define D_SENSOR_SSPI_MISO     "SSPI MISO"
#define D_SENSOR_SSPI_MOSI     "SSPI MOSI"
#define D_SENSOR_SSPI_SCLK     "SSPI SCLK"
#define D_SENSOR_SSPI_CS       "SSPI CS"
#define D_SENSOR_SSPI_DC       "SSPI DC"
#define D_SENSOR_RF_SENSOR     "RF Sensor"
#define D_SENSOR_AZ_RX         "AZ Rx"
#define D_SENSOR_AZ_TX         "AZ Tx"
#define D_SENSOR_MAX31855_CS   "MX31855 CS"
#define D_SENSOR_MAX31855_CLK  "MX31855 CLK"
#define D_SENSOR_MAX31855_DO   "MX31855 DO"
#define D_SENSOR_NRG_SEL       "HLWBL SEL"  // Suffix "i"
#define D_SENSOR_NRG_CF1       "HLWBL CF1"
#define D_SENSOR_HLW_CF        "HLW8012 CF"
#define D_SENSOR_HJL_CF        "BL0937 CF"
#define D_SENSOR_MCP39F5_TX    "MCP39F5 Tx"
#define D_SENSOR_MCP39F5_RX    "MCP39F5 Rx"
#define D_SENSOR_MCP39F5_RST   "MCP39F5 Rst"
#define D_SENSOR_CSE7766_TX    "CSE7766 Tx"
#define D_SENSOR_CSE7766_RX    "CSE7766 Rx"
#define D_SENSOR_PN532_TX      "PN532 Tx"
#define D_SENSOR_PN532_RX      "PN532 Rx"
#define D_SENSOR_SM16716_CLK   "SM16716 CLK"
#define D_SENSOR_SM16716_DAT   "SM16716 DAT"
#define D_SENSOR_SM16716_POWER "SM16716 PWR"
#define D_SENSOR_MY92X1_DI     "MY92x1 DI"
#define D_SENSOR_MY92X1_DCKI   "MY92x1 DCKI"
#define D_SENSOR_ARIRFRCV      "ALux IrRcv"
#define D_SENSOR_ARIRFSEL      "ALux IrSel"
#define D_SENSOR_TXD           "Serial Tx"
#define D_SENSOR_RXD           "Serial Rx"
#define D_SENSOR_ROTARY        "Rotary"     // Suffix "1A"
#define D_SENSOR_HRE_CLOCK     "HRE Clock"
#define D_SENSOR_HRE_DATA      "HRE Data"
#define D_SENSOR_ADE7953_IRQ   "ADE7953 IRQ"
#define D_SENSOR_BUZZER        "Buzzer"
#define D_SENSOR_OLED_RESET    "OLED Reset"
#define D_SENSOR_ZIGBEE_TXD    "Zigbee Tx"
#define D_SENSOR_ZIGBEE_RXD    "Zigbee Rx"
#define D_SENSOR_SOLAXX1_TX    "SolaxX1 Tx"
#define D_SENSOR_SOLAXX1_RX    "SolaxX1 Rx"
#define D_SENSOR_IBEACON_TX    "iBeacon TX"
#define D_SENSOR_IBEACON_RX    "iBeacon RX"
#define D_SENSOR_RDM6300_RX    "RDM6300 RX"
#define D_SENSOR_CC1101_CS     "CC1101 CS"
#define D_SENSOR_A4988_DIR     "A4988 DIR"
#define D_SENSOR_A4988_STP     "A4988 STP"
#define D_SENSOR_A4988_ENA     "A4988 ENA"
#define D_SENSOR_A4988_MS1     "A4988 MS1"
#define D_SENSOR_A4988_MS2     "A4988 MS2"
#define D_SENSOR_A4988_MS3     "A4988 MS3"
#define D_SENSOR_DDS2382_TX    "DDS238-2 Tx"
#define D_SENSOR_DDS2382_RX    "DDS238-2 Rx"
#define D_SENSOR_DDSU666_TX    "DDSU666 Tx"
#define D_SENSOR_DDSU666_RX    "DDSU666 Rx"
#define D_SENSOR_SM2135_CLK    "SM2135 Clk"
#define D_SENSOR_SM2135_DAT    "SM2135 Dat"
#define D_SENSOR_DEEPSLEEP     "DeepSleep"
#define D_SENSOR_EXS_ENABLE    "EXS Enable"
#define D_SENSOR_SLAVE_TX    "Slave TX"
#define D_SENSOR_SLAVE_RX    "Slave RX"
#define D_SENSOR_SLAVE_RESET "Slave RST"
#define D_SENSOR_GPS_RX        "GPS RX"
#define D_SENSOR_GPS_TX        "GPS TX"
#define D_SENSOR_HM10_RX       "HM10 RX"
#define D_SENSOR_HM10_TX       "HM10 TX"
#define D_SENSOR_LE01MR_RX     "LE-01MR Rx"
#define D_SENSOR_LE01MR_TX     "LE-01MR Tx"
#define D_SENSOR_BL0940_RX     "BL0940 Rx"
#define D_SENSOR_CC1101_GDO0   "CC1101 GDO0"
#define D_SENSOR_CC1101_GDO2   "CC1101 GDO2"
#define D_SENSOR_HRXL_RX       "HRXL Rx"
#define D_SENSOR_ELECTRIQ_MOODL "MOODL Tx"
#define D_SENSOR_AS3935        "AS3935"
#define D_SENSOR_WINDMETER_SPEED "WindMeter Spd"
#define D_SENSOR_TELEINFO_RX   "TInfo Rx"
#define D_SENSOR_TELEINFO_ENABLE "TInfo EN"
#define D_SENSOR_LMT01_PULSE   "LMT01 Pulse"
#define D_GPIO_WEBCAM_PWDN     "CAM_PWDN"
#define D_GPIO_WEBCAM_RESET    "CAM_RESET"
#define D_GPIO_WEBCAM_XCLK     "CAM_XCLK"
#define D_GPIO_WEBCAM_SIOD     "CAM_SIOD"
#define D_GPIO_WEBCAM_SIOC     "CAM_SIOC"
#define D_GPIO_WEBCAM_DATA     "CAM_DATA"
#define D_GPIO_WEBCAM_VSYNC    "CAM_VSYNC"
#define D_GPIO_WEBCAM_HREF     "CAM_HREF"
#define D_GPIO_WEBCAM_PCLK     "CAM_PCLK"
#define D_GPIO_WEBCAM_PSCLK    "CAM_PSCLK"
#define D_GPIO_WEBCAM_HSD      "CAM_HSD"
#define D_GPIO_WEBCAM_PSRCS    "CAM_PSRCS"
#define D_SENSOR_ETH_PHY_POWER "ETH POWER"
#define D_SENSOR_ETH_PHY_MDC   "ETH MDC"
#define D_SENSOR_ETH_PHY_MDIO  "ETH MDIO"
#define D_SENSOR_TCP_TXD       "TCP Tx"
#define D_SENSOR_TCP_RXD       "TCP Rx"

// Units
#define D_UNIT_AMPERE "A"
#define D_UNIT_CELSIUS "C"
#define D_UNIT_CENTIMETER "cm"
#define D_UNIT_DEGREE "°"
#define D_UNIT_FAHRENHEIT "F"
#define D_UNIT_HERTZ "Hz"
#define D_UNIT_HOUR "h"
#define D_UNIT_GALLONS "gal"
#define D_UNIT_GALLONS_PER_MIN "g/m"
#define D_UNIT_INCREMENTS "inc"
#define D_UNIT_KELVIN "K"
#define D_UNIT_KILOMETER "km"
#define D_UNIT_KILOGRAM "kg"
#define D_UNIT_KILOMETER_PER_HOUR "km/h"  // or "km/h"
#define D_UNIT_KILOOHM "kΩ"
#define D_UNIT_KILOWATTHOUR "kWh"
#define D_UNIT_LUX "lx"
#define D_UNIT_MICROGRAM_PER_CUBIC_METER "µg/m³"
#define D_UNIT_MICROMETER "µm"
#define D_UNIT_MICROSECOND "µs"
#define D_UNIT_MILLIAMPERE "mA"
#define D_UNIT_MILLIMETER "mm"
#define D_UNIT_MILLIMETER_MERCURY "mmHg"
#define D_UNIT_MILLISECOND "ms"
#define D_UNIT_MINUTE "min"
#define D_UNIT_PARTS_PER_BILLION "ppb"
#define D_UNIT_PARTS_PER_DECILITER "ppd"
#define D_UNIT_PARTS_PER_MILLION "ppm"
#define D_UNIT_PERCENT "%%"
#define D_UNIT_PRESSURE "hPa"
#define D_UNIT_SECOND "s"
#define D_UNIT_SECTORS "szektorok"
#define D_UNIT_VA "VA"
#define D_UNIT_VAR "VAr"
#define D_UNIT_VOLT "V"
#define D_UNIT_WATT "W"
#define D_UNIT_WATTHOUR "Wh"
#define D_UNIT_WATT_METER_QUADRAT "W/m²"

//SDM220, SDM120, LE01MR
#define D_PHASE_ANGLE     "Fázisszög"
#define D_IMPORT_ACTIVE   "Bejövő aktív"
#define D_EXPORT_ACTIVE   "Kimenő aktív"
#define D_IMPORT_REACTIVE "Bejövő reaktív"
#define D_EXPORT_REACTIVE "Kimenő reaktív"
#define D_TOTAL_REACTIVE  "Összes reaktív"
#define D_UNIT_KWARH      "kVArh"
#define D_UNIT_ANGLE      "fok"
#define D_TOTAL_ACTIVE    "Total Active"

//SOLAXX1
#define D_PV1_VOLTAGE     "PV1 Voltage"
#define D_PV1_CURRENT     "PV1 Current"
#define D_PV1_POWER       "PV1 Power"
#define D_PV2_VOLTAGE     "PV2 Voltage"
#define D_PV2_CURRENT     "PV2 Current"
#define D_PV2_POWER       "PV2 Power"
#define D_SOLAR_POWER     "Solar Power"
#define D_INVERTER_POWER  "Inverter Power"
#define D_STATUS          "Status"
#define D_WAITING         "Waiting"
#define D_CHECKING        "Checking"
#define D_WORKING         "Working"
#define D_FAILURE         "Failure"
#define D_SOLAX_ERROR_0   "No Error Code"
#define D_SOLAX_ERROR_1   "Grid Lost Fault"
#define D_SOLAX_ERROR_2   "Grid Voltage Fault"
#define D_SOLAX_ERROR_3   "Grid Frequency Fault"
#define D_SOLAX_ERROR_4   "Pv Voltage Fault"
#define D_SOLAX_ERROR_5   "Isolation Fault"
#define D_SOLAX_ERROR_6   "Over Temperature Fault"
#define D_SOLAX_ERROR_7   "Fan Fault"
#define D_SOLAX_ERROR_8   "Other Device Fault"

//xdrv_10_scripter.ino
#define D_CONFIGURE_SCRIPT     "Edit script"
#define D_SCRIPT               "edit script"
#define D_SDCARD_UPLOAD        "file upload"
#define D_SDCARD_DIR           "sd card directory"
#define D_UPL_DONE             "Done"
#define D_SCRIPT_CHARS_LEFT    "chars left"
#define D_SCRIPT_CHARS_NO_MORE "no more chars"
#define D_SCRIPT_DOWNLOAD      "Download"
#define D_SCRIPT_ENABLE        "script enable"
#define D_SCRIPT_UPLOAD        "Upload"
#define D_SCRIPT_UPLOAD_FILES  "Upload files"

//xsns_67_as3935.ino
#define D_AS3935_GAIN "gain:"
#define D_AS3935_ENERGY "energy:"
#define D_AS3935_DISTANCE "distance:"
#define D_AS3935_DISTURBER "disturber:"
#define D_AS3935_VRMS "µVrms:"
#define D_AS3935_APRX "aprx.:"
#define D_AS3935_AWAY "away"
#define D_AS3935_LIGHT "lightning"
#define D_AS3935_OUT "lightning out of range"
#define D_AS3935_NOT "distance not determined"
#define D_AS3935_ABOVE "lightning overhead"
#define D_AS3935_NOISE "noise detected"
#define D_AS3935_DISTDET "disturber detected"
#define D_AS3935_INTNOEV "Interrupt with no Event!"
#define D_AS3935_NOMESS "listening..."
#define D_AS3935_ON "On"
#define D_AS3935_OFF "Off"
#define D_AS3935_INDOORS "Indoors"
#define D_AS3935_OUTDOORS "Outdoors"
#define D_AS3935_CAL_FAIL "calibration failed"
#define D_AS3935_CAL_OK "calibration set to:"

//xsns_68_opentherm.ino
#define D_SENSOR_BOILER_OT_RX   "OpenTherm RX"
#define D_SENSOR_BOILER_OT_TX   "OpenTherm TX"

#endif  // _LANGUAGE_HU_HU_H_
