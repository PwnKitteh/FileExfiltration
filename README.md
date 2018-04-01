# FileExfiltration
A modification of Hak5's method of File exfiltration, using an Arduino Pro Micro instead of a rubber ducky


Really, the only thing I did was convert the few lines of duckyscript over to arduino code. All of the credit goes out to @hak5darren and the Hak5 team for developing the payload and tearing their hair out dealing with DOS. 
I also modified it so that it copies all pdfs *and* text files. You can add more types of files in `e.cmd`. 

## How do I use it?
You image the FileExfiltrate.ino file to an arduino with keyboard compatibility, (I recommend the pro micro for its size, but a leonardo will work as well) and copy the other files to a usb stick. Rename your usb drive to \'\_\', without the quotes. That's it. All that's left is to modify the files a bit, and copy them over to a victim computer
