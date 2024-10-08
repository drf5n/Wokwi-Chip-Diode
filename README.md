# Wokwi-Chip-Diode
## Description

Diode custom-chip for Wokwi

-  

To use this chip in your project, include it as a dependency in your `diagram.json` file:

```json
"dependencies": { "chip-diode": "github:drf5n/Wokwi-Chip-Diode@1.0.0" }
```

Then, add the chip to your circuit by adding a `chip-diode` item to the `parts` section of `diagram.json`:

```json
  "parts": {
    ...,
    {
      "type": "chip-diode",
      "id": "diode1",
      "attrs": { }
    },
```

The actual source code for the chip lives in [src/main.c](https://github.com/drf5n/Wokwi-Chip-Diode/blob/main/src/main.c), and the pins are described in [chip.json](https://github.com/drf5n/Wokwi-Chip-Diode/blob/main/chip.json).

This is a copy of the diode custom chip in
https://wokwi.com/projects/410325174113969153 by
https://wokwi.com/makers/maverick

The diode svg is from https://commons.wikimedia.org/wiki/File:Diode_symbol.svg

## Examples

* [keyboard matrix with diodes -- tabbed](https://wokwi.com/projects/410325174113969153)
* [keyboard matrix with diodes --
  tabbed](https://wokwi.com/projects/411181034370782209) with change detection

## See also:

* https://github.com/wokwi/wokwi-features/issues/349
* https://discord.com/channels/787627282663211009/1289692132776476853/1289786828915740704
  -- Discord discussion


## Versions
* github:drf5n/Wokwi-Chip-Diode@1.0.0 -- Working release

# notes on making a Wokwi custom chip work with Github repository dependency
To get the Wokwi build script working to build the necessary chip.zip file for distribution with a release so Wokwi can pick it up

1) enable the repository settings for wokflow permissions to be read-write
2) make sure the .github/workflows/build.yaml is in the repository
3) commit
4) make a vN.n.n tag: `git tag -a "v1.0.5" -m "build.yaml"`
5) push the tag  to github: `git push origin tag v1.0.5`

Refer to
https://discord.com/channels/787627282663211009/954892209486966825/1274569798231130163
for a little discussion on workflow.


## License

This project is licensed under the MIT license. See the [LICENSE](https://github.com/drf5na/Wokwi-Chip-Diode/blob/main/LICENSE) file for more details.
