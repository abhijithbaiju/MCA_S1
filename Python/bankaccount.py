class BankAccount:
    def __init__(self,accno,name,acctype,balance):
        self.accountnumber=accno
        self.name=name
        self.accounttype=acctype
        self.balance=balance

    def deposit(self,amount):
        if amount<=0:
            print("Deposit amount must be positive! ")
        else:
            self.balance+=amount
            print(f"Deposited: {amount}")
            print(f"Updated Balanace: {self.balance}")

    def withdraw(self,amount):
        if amount<=0:
            print("Withdrawal amount must be positive!")
        elif self.balance<amount:
            print("Insufficient balance!")
        else:
            self.balance-=amount
            print(f"Withdraw: {amount}")
            print(f"Updated Balance: {self.balance}")

    def display(self):
        print("\nAccount Details: ")
        print(f"Account Number: {self.accountnumber}")
        print(f"Account Holder: {self.name}")
        print(f"Account Type: {self.accounttype}")
        print(f"Account Balance: {self.balance}")

accno=int(input("Enter account number: "))
name=input("Enter the Account Holder Name: ")
acctype=input("Enter account type(savings/current): ")
balance=int(input("Enter the Initial Balance: "))

account=BankAccount(accno,name,acctype,balance)

account.display()

depositamount=int(input("Enter the Amount to be deposit: "))
account.deposit(depositamount)

withdrawamount=int(input("Enter the Amount to Withdraw: "))
account.withdraw(withdrawamount)

