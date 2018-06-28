// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/Häsläämispäiväkirja.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-a8299899.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[9];

namespace g{

// public static generated class Haslaamispaivakirja_bundle :0
// {
// static Haslaamispaivakirja_bundle() :0
static void Haslaamispaivakirja_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    Haslaamispaivakirja_bundle::FirstPage32a714a7_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Ha\u0308sla...*/]))->GetFile(::STRINGS[1/*"firstpage-5...*/]);
    Haslaamispaivakirja_bundle::fontawesomewebfontcf015a92_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Ha\u0308sla...*/]))->GetFile(::STRINGS[2/*"fontawesome...*/]);
    Haslaamispaivakirja_bundle::Listitem4884db44_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Ha\u0308sla...*/]))->GetFile(::STRINGS[3/*"listitem-9e...*/]);
    Haslaamispaivakirja_bundle::OldEntrysPage3df5b649_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Ha\u0308sla...*/]))->GetFile(::STRINGS[4/*"oldentryspa...*/]);
    Haslaamispaivakirja_bundle::OneEntryPage0780757d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Ha\u0308sla...*/]))->GetFile(::STRINGS[5/*"oneentrypag...*/]);
    Haslaamispaivakirja_bundle::retkelleoma398023dd_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Ha\u0308sla...*/]))->GetFile(::STRINGS[6/*"retkelleoma...*/]);
    Haslaamispaivakirja_bundle::SplashPage53ac0018_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Ha\u0308sla...*/]))->GetFile(::STRINGS[7/*"splashpage-...*/]);
    Haslaamispaivakirja_bundle::vuoristomaisema84f6fc28_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Ha\u0308sla...*/]))->GetFile(::STRINGS[8/*"vuoristomai...*/]);
}

static void Haslaamispaivakirja_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Ha\314\210sla\314\210a\314\210mispa\314\210iva\314\210kirja");
    ::STRINGS[1] = uString::Const("firstpage-5aeef494.js");
    ::STRINGS[2] = uString::Const("fontawesome-webfont-03fb0235.ttf");
    ::STRINGS[3] = uString::Const("listitem-9e9098f7.js");
    ::STRINGS[4] = uString::Const("oldentryspage-5f38b526.js");
    ::STRINGS[5] = uString::Const("oneentrypage-4624459a.js");
    ::STRINGS[6] = uString::Const("retkelleoma-e65a3670.mp4");
    ::STRINGS[7] = uString::Const("splashpage-6033763d.js");
    ::STRINGS[8] = uString::Const("vuoristomaisema-8c49c343.jpg");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Haslaamispaivakirja_bundle::FirstPage32a714a7_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Haslaamispaivakirja_bundle::fontawesomewebfontcf015a92_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Haslaamispaivakirja_bundle::Listitem4884db44_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Haslaamispaivakirja_bundle::OldEntrysPage3df5b649_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Haslaamispaivakirja_bundle::OneEntryPage0780757d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Haslaamispaivakirja_bundle::retkelleoma398023dd_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Haslaamispaivakirja_bundle::SplashPage53ac0018_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Haslaamispaivakirja_bundle::vuoristomaisema84f6fc28_, uFieldFlagsStatic);
    type->Reflection.SetFields(8,
        new uField("FirstPage32a714a7", 0),
        new uField("fontawesomewebfontcf015a92", 1),
        new uField("Listitem4884db44", 2),
        new uField("OldEntrysPage3df5b649", 3),
        new uField("OneEntryPage0780757d", 4),
        new uField("retkelleoma398023dd", 5),
        new uField("SplashPage53ac0018", 6),
        new uField("vuoristomaisema84f6fc28", 7));
}

uClassType* Haslaamispaivakirja_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Haslaamispaivakirja_bundle", options);
    type->fp_build_ = Haslaamispaivakirja_bundle_build;
    type->fp_cctor_ = Haslaamispaivakirja_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> Haslaamispaivakirja_bundle::FirstPage32a714a7_;
uSStrong< ::g::Uno::IO::BundleFile*> Haslaamispaivakirja_bundle::fontawesomewebfontcf015a92_;
uSStrong< ::g::Uno::IO::BundleFile*> Haslaamispaivakirja_bundle::Listitem4884db44_;
uSStrong< ::g::Uno::IO::BundleFile*> Haslaamispaivakirja_bundle::OldEntrysPage3df5b649_;
uSStrong< ::g::Uno::IO::BundleFile*> Haslaamispaivakirja_bundle::OneEntryPage0780757d_;
uSStrong< ::g::Uno::IO::BundleFile*> Haslaamispaivakirja_bundle::retkelleoma398023dd_;
uSStrong< ::g::Uno::IO::BundleFile*> Haslaamispaivakirja_bundle::SplashPage53ac0018_;
uSStrong< ::g::Uno::IO::BundleFile*> Haslaamispaivakirja_bundle::vuoristomaisema84f6fc28_;
// }

} // ::g
