students={ "june": 400,"may":500,"april":600}
asc_by_name=dict(sorted(students.items()))
print("sorted by name(Ascending): ")
print(asc_by_name)
desc_by_name=dict(sorted(students.items(),reverse=True))
print("\nSorted by name(Descending): ")
print(desc_by_name)