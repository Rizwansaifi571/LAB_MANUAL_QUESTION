import datetime
t=datetime.datetime.now()
date=t.strftime("%d-%b-%Y")
name=input("Enter your name :")
Letter=f"""dear {name} 
you are selected!
{date}"""
print(Letter)