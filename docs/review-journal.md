# Review Journal

The repository goal stays the same: build a C++ toolkit that studies lineage behavior through deny and allow fixtures, with explainable decision traces and local-only command execution. This note explains the added review angle.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its data engineering focus without claiming live deployment or external usage.

## Cases

- `baseline`: `schema drift`, score 160, lane `ship`
- `stress`: `lineage depth`, score 247, lane `ship`
- `edge`: `partition skew`, score 167, lane `ship`
- `recovery`: `quality gap`, score 249, lane `ship`
- `stale`: `schema drift`, score 241, lane `ship`

## Note

This file is intentionally plain so the fixture remains the source of truth.
