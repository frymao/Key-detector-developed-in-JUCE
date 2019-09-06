# Key-detector-developed-in-JUCE
A key detector using FAUST for DSP and JUCE for UI
Because VST2 SDK is no longer available from Steinberg. Unfortunately JUCE assumes by default that available even when compiling VST3 plugins. Go to Projucer -> Modules -> juce_audio_plugin_client. Change JUCE_VST3_CAN_REPLACE_VST2 from 1 to 0.
The algorithm still needs to be improved.
# ![Image of KeyDetector](https://github.com/frymao/Key-detector-developed-in-JUCE/blob/master/demo.png)
