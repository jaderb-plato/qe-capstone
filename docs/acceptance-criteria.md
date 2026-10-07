# Acceptance Criteria

## Behaviour 1 - Submit Talk

AC1 (F)
Given a user is on the talk submission page
When valid talk information is submitted
Then the talk is displayed in the submitted talks list

AC2 (F)
Given a user is on the talk submission page
When one or more required fields are blank
Then validation messages are displayed and the submission is rejected

AC3 (NF)
Given the system is operating under normal conditions
When a valid talk is submitted
Then the request completes within 2 seconds

## Behaviour 2 - View Talks

AC4 (F)
Given one or more talks have been submitted
When a user views the talks list
Then all submitted talks are displayed

AC5 (F)
Given no talks have been submitted
When a user views the talks list
Then an empty state message is displayed

AC6 (NF)
Given the talks list contains up to 100 talks
When a user loads the talks page
Then the page loads within 2 seconds

## Behaviour 3 - Authentication

AC7 (F)
Given a registered user enters valid credentials
When the sign-in form is submitted
Then access to the application is granted

AC8 (F)
Given a user enters invalid credentials
When the sign-in form is submitted
Then an authentication error message is displayed and access is denied

# Traceability

AC1 -> E2E
AC2 -> E2E
AC3 -> Performance
AC4 -> E2E
AC5 -> E2E
AC6 -> Performance
AC7 -> Integration
AC8 -> Integration