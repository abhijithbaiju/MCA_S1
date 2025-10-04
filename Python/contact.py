contacts1={"May": "9944556677","June": "6634826833"}
contacts2={"March": "7835263427","August": "9040506784"}
print("Contact 1: ",contacts1)
print("Contact 2: ",contacts2)
merged_contacts=contacts1.copy()
merged_contacts.update(contacts2)
print("Merged Conatcts: ")
print(merged_contacts)