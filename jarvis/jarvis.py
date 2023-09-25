import pyttsx3
import speech_recognition as sr
assistance = pyttsx3.init('sapi5')


def speak(audio):
    assistance.say(audio)
    assistance.runAndWait()


def takecommand():
    command = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening..........")
        command.pause_threshhold = 1
        audio = command.listen(source)

        try:
            print("Recognising....")
            query = command.recognize_google(audio, language = 'en-in')
            print(f"you said : {query}")
        except Exception as Error :
            return None
        
        return query
    

speak("hello sir")
takecommand()       
    