#include <mitsuba/core/spectrum.h>

NAMESPACE_BEGIN(mitsuba)

const Float data[95] = {
    46.6383f,  49.3637f,  52.0891f,  51.0323f,  49.9755f,  52.3118f,  54.6482f,  68.7015f,
    82.7549f,  87.1204f,  91.486f,   92.4589f,  93.4318f,  90.057f,   86.6823f,  95.7736f,
    104.865f,  110.936f,  117.008f,  117.41f,   117.812f,  116.336f,  114.861f,  115.392f,
    115.923f,  112.367f,  108.811f,  109.082f,  109.354f,  108.578f,  107.802f,  106.296f,
    104.79f,   106.239f,  107.689f,  106.047f,  104.405f,  104.225f,  104.046f,  102.023f,
    100.0f,    98.1671f,  96.3342f,  96.0611f,  95.788f,   92.2368f,  88.6856f,  89.3459f,
    90.0062f,  89.8026f,  89.5991f,  88.6489f,  87.6987f,  85.4936f,  83.2886f,  83.4939f,
    83.6992f,  81.863f,   80.0268f,  80.1207f,  80.2146f,  81.2462f,  82.2778f,  80.281f,
    78.2842f,  74.0027f,  69.7213f,  70.6652f,  71.6091f,  72.979f,   74.349f,   67.9765f,
    61.604f,   65.7448f,  69.8856f,  72.4863f,  75.087f,   69.3398f,  63.5927f,  55.0054f,
    46.4182f,  56.6118f,  66.8054f,  65.0941f,  63.3828f,  63.8434f,  64.304f,   61.8779f,
    59.4519f,  55.7054f,  51.959f,   54.6998f,  57.4406f,  58.8765f,  60.3125f
};

/**
 * CIE D65 spectrum discretized in 5nm increments
 */
class D65Spectrum final : public InterpolatedSpectrum {
public:
    D65Spectrum(const Properties &) : InterpolatedSpectrum(360, 830, 95, data) { }

    MTS_DECLARE_CLASS()
};

MTS_IMPLEMENT_CLASS(D65Spectrum, InterpolatedSpectrum)
MTS_EXPORT_PLUGIN(D65Spectrum, "CIE D65 Spectrum")

NAMESPACE_END(mitsuba)