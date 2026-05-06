# Signal Data Lineage Pipe Walkthrough

The fixture is intentionally compact, so the review starts with the cases that pull farthest apart.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 160 | ship |
| stress | lineage depth | 247 | ship |
| edge | partition skew | 167 | ship |
| recovery | quality gap | 249 | ship |
| stale | schema drift | 241 | ship |

Start with `recovery` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The useful comparison is `quality gap` against `schema drift`, not the raw score alone.
