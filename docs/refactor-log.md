# Refactor Log

## Refactor 1 - Replace Magic Numbers with Constants

Principle:
Clean Code / Maintainability

Before:
The discount logic used numeric literals such as 0.05, 0.10, 0.20 and 0.25 directly.

After:
Named constants were introduced:
- FIVE_PERCENT
- TEN_PERCENT
- TWENTY_PERCENT
- TWENTY_FIVE_PERCENT

Benefit:
Improved readability and easier maintenance.

Proof:
Unit tests continue to pass.

## Refactor 2 - Added Twenty-Year Discount Tier

Principle:
Open for Extension

Before:
The highest loyalty discount was 20%.

After:
A new 25% discount tier was added for customers with 20+ loyalty years.

Benefit:
Business rules can be extended without changing existing behaviour.

Proof:
Boundary test verifies behaviour at 19 and 20 years.