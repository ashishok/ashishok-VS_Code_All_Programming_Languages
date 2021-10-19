

mydict = {
    "fast": 'in a quick maaner',
    'ashish': "my name ",
    "marks": [1, 2, 3, 90],
    "andict": {"kumar ": "title"},
    1: 2
}

print(mydict.keys())  # prints the keys
print(type(mydict.keys()))
print(list(mydict.keys()))     # prints the keys in the list form

print(list(mydict.values()))
print(mydict.values())


print(list(mydict.items()))
print(mydict.items())


print(mydict)
updatedict = {
    "friend": 'sam'
}
mydict.update(updatedict)   # update the dictionary
print(mydict)


# it will give 'none' when ashish is not present inside the dictonary
print(mydict.get("ashish"))
# while this will through an error if ashis is not present inside the dictionary
print(mydict["ashish"])
