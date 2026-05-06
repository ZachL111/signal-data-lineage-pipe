# signal-data-lineage-pipe

`signal-data-lineage-pipe` is a C++ project in data engineering. Its focus is to build a C++ toolkit that studies lineage behavior through deny and allow fixtures, with explainable decision traces and local-only command execution.

## Purpose

This is intentionally local and self-contained so it can be inspected without credentials, services, or seeded history.

## Signal Data Lineage Pipe Review Notes

For a quick review, compare `quality gap` with `schema drift` before reading the middle cases.

## What Is Covered

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/signal-data-lineage-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `quality gap` and `schema drift`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Implementation Notes

The fixture data drives the tests. The code stays thin, while `metadata/domain-review.json` and `config/review-profile.json` explain what each case is meant to protect.

The C++ addition stays small enough to inspect in one sitting.

## Command

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Audit Path

The verifier is intentionally local. It should fail if the fixture score math, lane assignment, or language-specific test drifts.

## Limits

The repository is intentionally scoped to local checks. I would expand it by adding adversarial fixtures before adding features.
