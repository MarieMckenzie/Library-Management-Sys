# Library-Management-Sys
a Library Management System which presents the following options to the librarian
user. These options are to be displayed in a menu, and the corresponding task should be performed when the librarian
user selects any option from the menu or submenus.
 Main menu
1. Books
 Add New Book
- This option allows the addition of new books to the book file. Information to be added are title,
author, Accession#, ISBN# and status. Permit add another (Y/N) at the end of each addition.
 Update Book
- This option allows book information to be reviewed and changed
 Delete Book
- This option allows the removal of a book from the system
 Display Books
- This option displays all the books on file
 Exit to main menu
2. Member Account
 Add New Member
- This option allows the addition of a new library member. Information to be added are member
number, first name, last name, address, date of birth (structure of day, month, year), and phone
number. Permit add another (Y/N) at the end of each addition.
 Update Member Information
- This option allows member information to be reviewed and changed
 Delete Member Information
- This option allows the removal of a member from the system
 Display a Member Information
- This option displays a member’s information
 Display All Members Information
- This option displays all the members on file
 Exit to main menu
3. Borrow, Return and Balances
 Borrow book
- Allows the system to record books borrowed by a member. If member is valid and book is
available, add new entry in Borrow file with member number, ISBN#, borrow date, return date
(calculated as 2 weeks after borrow date)
 Display All Books on Loan
- Displays all information in the borrow file
 Return book

Name:
ID #:
Grade:

Page 2 of 3
- If book is returned on time remove entry for member from Borrow file. If book is returned late in
addition to removing entry for member from Borrow file, calculate late charges and add new entry
for member in Late charges file (member number, ISBN#, charges, date).
 Check Member Charges
- Display the total charges for a given member using the Late charges file.
 Display Late Charges
- Displays late charges information for all members.
 Make payment
- First display all late charges for the given member and calculate and display total late charges.
Prompt and accept payment amount. If payment amount equal total late charges then remove all
late charges entry in Late charges file. If payment amount less than total late charges then
remove oldest late charge entries which payment will cover.
 Exit to main menu
4. Exit
