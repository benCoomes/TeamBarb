Hi there team barb members..

This is the sample java quickstart for the google calendar API. 
URL: https://developers.google.com/google-apps/calendar/quickstart/java

You should be able to run it with
$gradle -q run

(you have to have gradle 2.3 or newer installed)

When you run it, it should open a tab in your default browser that will ask you 
for permission to access your calendar. 

Once you give it permission, it will store the authentication on your file system
and will not need future authentication. 

If it works, it should print out the next ten events in your calendar!

There is also a tutorial for Android that we can check out. 
