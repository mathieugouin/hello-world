# README.md

* test 3
* folder1


## Clear Icons Cache

When changing tvheadend channel icons, it is required to clear the cache to force Kodi to reload the new icons
```
rm $HOME/.kodi/userdata/Thumbnails/*/*.png
rm $HOME/.kodi/userdata/Database/Textures13.db
sudo reboot
```

## Enable debug log
If required to help debugging an issue with kodi, activate debug logging without the annying onscreen debug overlay as follows:
* Edit to contains:
```
<advancedsettings version="1.0">
    <!-- That should enable debug logging but without that annoying overlay on the screen. -->
    <loglevel>1</loglevel>
</advancedsettings>
```

