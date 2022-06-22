curl https://voice.messagebird.com/calls \
    -H "Authorization: AccessKey AO5jHhUZ9Hukm4oQ5tC85fy2l" \
    -d $'{
      "source" : "9618211626",
      "destination" : "9618211626",
      "callFlow" : {
          "steps" : [
              {
                  "action" : "say",
                  "options" : {
                      "payload" : "Hey, this is your first voice call",
                      "language" : "en-GB",
                      "voice" : "female"
                  }
              }
          ]
      }
  }'
