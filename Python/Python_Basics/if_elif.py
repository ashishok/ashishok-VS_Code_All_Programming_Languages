text = input(" enter the text ")

if("make a lot of money" in text):
    spam = True
elif ("buy now" in text):
    spam = True
elif("do this" in text):
    spam = True
elif( "ashish is" in text):
    spam = True
else:
    spam = False

if(spam):
    print(' this text is spam')
else:
    print(" this text in not spam")