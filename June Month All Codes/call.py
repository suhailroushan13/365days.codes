import messagebird

#create instance of messagebird.Client using API key
client = messagebird.Client('AO5jHhUZ9Hukm4oQ5tC85fy2l')

try:
    msg = client.voice_message_create('+919618211626', 'Hello Mohammed Faizan , This is Suhail Python Script To Call You', { 'voice' : 'female' })
    print(msg.__dict__)

except messagebird.client.ErrorException as e:
    for error in e.errors:
        print(error)
 