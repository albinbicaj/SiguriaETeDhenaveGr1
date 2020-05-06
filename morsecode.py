import winsound
import time
MORSE_CODE_DICT = { ' ':'/', 'A':'.-', 'B':'-...', 'C':'-.-.', 'D':'-..', 'E':'.', 'F':'..-.', 'G':'--.', 'H':'....',
                    'I':'..', 'J':'.---', 'K':'-.-', 'L':'.-..', 'M':'--', 'N':'-.','O':'---', 'P':'.--.', 'Q':'--.-',
                    'R':'.-.', 'S':'...', 'T':'-','U':'..-', 'V':'...-', 'W':'.--','X':'-..-', 'Y':'-.--', 'Z':'--..',
                    '1':'.----', '2':'..---', '3':'...--','4':'....-', '5':'.....', '6':'-....','7':'--...', '8':'---..', '9':'----.',
                    '0':'-----', ', ':'--..--', '.':'.-.-.-','?':'..--..', '/':'-..-.', '-':'-....-','(':'-.--.', ')':'-.--.-'}


def Txt_to_Morse():
    txt = input('Shkruani nje text per me e kthy ne metoden morse code: ')
    code = [MORSE_CODE_DICT[i.upper()] + ' ' for i in txt if i.upper() in MORSE_CODE_DICT.keys()]
    morse=''.join(code)
    print(morse)
    for m in morse:
        if m=='.':
             winsound.PlaySound('dit.wav' , winsound.SND_FILENAME)
        elif m=='-':
            winsound.PlaySound('dah.wav' , winsound.SND_FILENAME)
        else:
            time.sleep(0.5)

def Morse_to_Txt():
    txt = input('Shkruani metoden e Morse Code per te kthyer nje text: ')
    code = [k for i in txt.split() for k,v in MORSE_CODE_DICT.items() if i==v]
    newtxt = ''.join(code)
    print(newtxt)
    engine = pyttsx.init()
    engine.say(newtxt)
    engine.runAndWait()

print('''\n1 - Konvertimi Text ne Morse Code \n2 - Konvertimi  nga Morse Code ne Text\n3 - Quit\n ''')

while True:
    try:
        selektimi = int(input('Zgjedhe njeren nga format me lart: '))
        if selektimi == 1:
            print(Txt_to_Morse())
            break
        elif selektimi == 2:
            print(Morse_to_Txt())
            break
        elif selektimi == 3:
            print('Excit')
            break
        else:
            print('Selektim te gabuar, provoni perseri')
    except:
        print('Selektim te gabuar, provoni perseri')





