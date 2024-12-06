# This file intentionally left blank

# MCU = atmega32u4
# BOOTLOADER = caterina
# F_CPU = 16000000
# F_USB = $(F_CPU)

# BOOTMAGIC_ENABLE = no 	#Ações MAGICA (BOOTMAGIC sem o boot)
# SPLIT_TRANSPORT = custom
# MOUSEKEY_ENABLE = no
# EXTRAKEY_ENABLE = yes 	#Controle de áudio e controle do sistema
# CONSOLE_ENABLE = no		#Console para depuração
# COMBO_ENABLE = yes		#Fato de combinação de chave
# COMMAND_ENABLE = no
# NKRO_ENABLE = no

# RGBLIGHT_ENABLE = no	#Habilite a funcionalidade de teclado abaixo do toque
# BACKLIGHT_ENABLE = no
# AUDIO_ENABLE = no

# SPLIT_KEYBOARD = yes

# qmk clean -a
# qmk compile -kb ergodox_rood7 -km default
# qmk flash -kb ergodox_rood7 -km default -bl avrdude-split-right
# make ergodox_rood7:default:avrdude-split-right
# :avrdude-split-right
# avrdude -p atmega32u4 -P COM7 -c avr109  -U flash:w:ergodox_rood7_default.hex:avrdude-split-right
# "pid": "0x0001",
# "vid": "0xF055"


# "split": {
#         "soft_serial_pin": "D2"
#     },