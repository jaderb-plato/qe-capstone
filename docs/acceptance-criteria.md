# Acceptance Criteria

## Behaviour 1 - Submit Talk

AC1 (F)
Given a user is on the submission page
When valid talk details are submitted
Then the talk is saved successfully

AC2 (F)
Given a user is on the submission page
When required fields are missing
Then validation errors are displayed

AC3 (NF)
The submission request completes within 2 seconds

## Behaviour 2 - View Talks

AC4 (F)
Given talks exist
When a user opens the talks list
Then all saved talks are displayed

AC5 (F)
Given no talks exist
When a user opens the talks list
Then an empty message is displayed

AC6 (NF)
The talks page loads within 2 seconds

## Behaviour 3 - Authentication

AC7 (F)
Given valid credentials
When a user signs in
Then access is granted

AC8 (F)
Given invalid credentials
When a user signs in
Then an error message is displayed

# Traceability

AC1 -> E2E
AC2 -> E2E
AC3 -> Performance
AC4 -> E2E
AC5 -> E2E
AC6 -> Performance
AC7 -> Integration
AC8 -> Integration