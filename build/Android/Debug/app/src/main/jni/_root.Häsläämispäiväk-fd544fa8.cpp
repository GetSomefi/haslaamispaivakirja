// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/Häsläämispäiväkirja.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Häsläämispäiväk-fd544fa8.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[6];

namespace g{

// public static generated class Häsläämispäiväkirja_bundle :0
// {
// static Häsläämispäiväkirja_bundle() :0
static void Häsläämispäiväkirja_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    Häsläämispäiväkirja_bundle::FirstPagea02d2744_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Häsläämispä...*/]))->GetFile(::STRINGS[1/*"firstpage-5...*/]);
    Häsläämispäiväkirja_bundle::fontawesomewebfont8b3c32a1_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Häsläämispä...*/]))->GetFile(::STRINGS[2/*"fontawesome...*/]);
    Häsläämispäiväkirja_bundle::retkelleoma4cde60c0_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Häsläämispä...*/]))->GetFile(::STRINGS[3/*"retkelleoma...*/]);
    Häsläämispäiväkirja_bundle::SplashPageb9a70951_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Häsläämispä...*/]))->GetFile(::STRINGS[4/*"splashpage-...*/]);
    Häsläämispäiväkirja_bundle::vuoristomaisema6daf3017_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Häsläämispä...*/]))->GetFile(::STRINGS[5/*"vuoristomai...*/]);
}

static void Häsläämispäiväkirja_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("H\303\244sl\303\244\303\244misp\303\244iv\303\244kirja");
    ::STRINGS[1] = uString::Const("firstpage-5aeef494.js");
    ::STRINGS[2] = uString::Const("fontawesome-webfont-03fb0235.ttf");
    ::STRINGS[3] = uString::Const("retkelleoma-e65a3670.mp4");
    ::STRINGS[4] = uString::Const("splashpage-6033763d.js");
    ::STRINGS[5] = uString::Const("vuoristomaisema-8c49c343.jpg");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Häsläämispäiväkirja_bundle::FirstPagea02d2744_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Häsläämispäiväkirja_bundle::fontawesomewebfont8b3c32a1_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Häsläämispäiväkirja_bundle::retkelleoma4cde60c0_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Häsläämispäiväkirja_bundle::SplashPageb9a70951_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Häsläämispäiväkirja_bundle::vuoristomaisema6daf3017_, uFieldFlagsStatic);
}

uClassType* Häsläämispäiväkirja_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Häsläämispäiväkirja_bundle", options);
    type->fp_build_ = Häsläämispäiväkirja_bundle_build;
    type->fp_cctor_ = Häsläämispäiväkirja_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> Häsläämispäiväkirja_bundle::FirstPagea02d2744_;
uSStrong< ::g::Uno::IO::BundleFile*> Häsläämispäiväkirja_bundle::fontawesomewebfont8b3c32a1_;
uSStrong< ::g::Uno::IO::BundleFile*> Häsläämispäiväkirja_bundle::retkelleoma4cde60c0_;
uSStrong< ::g::Uno::IO::BundleFile*> Häsläämispäiväkirja_bundle::SplashPageb9a70951_;
uSStrong< ::g::Uno::IO::BundleFile*> Häsläämispäiväkirja_bundle::vuoristomaisema6daf3017_;
// }

} // ::g
