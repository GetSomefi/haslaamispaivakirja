// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/FirstPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BasicSwipeToggleBig.h>
#include <_root.bgImage.h>
#include <_root.FirstPage.h>
#include <_root.FlyingDock.h>
#include <_root.Haslaamispaivak-13e9c6f4.h>
#include <_root.Haslaamispaivak-3748e7ab.h>
#include <_root.Haslaamispaivak-3bd8d75.h>
#include <_root.Haslaamispaivak-4f321fb2.h>
#include <_root.Haslaamispaivak-a8299899.h>
#include <_root.Haslaamispaivak-ba57d52e.h>
#include <_root.textDropDown.h>
#include <basic.LabelText.h>
#include <basic.TextBoxAction.h>
#include <basic.TitleText.h>
#include <basicBtn.Button.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.PageExpression.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <header.Text.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[126];
static uType* TYPES[7];

namespace g{

// public partial sealed class FirstPage :2
// {
// static FirstPage() :118
static void FirstPage__cctor_4_fn(uType* __type)
{
    FirstPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 53, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"SavedDock"*/], ::STRINGS[2/*"temp_eb0"*/], ::STRINGS[3/*"mita_kiusaus"*/], ::STRINGS[4/*"mita_varkaus"*/], ::STRINGS[5/*"mita_inho"*/], ::STRINGS[6/*"mita_teinva...*/], ::STRINGS[7/*"mita_riitely"*/], ::STRINGS[8/*"mita_muuta_...*/], ::STRINGS[9/*"mita_muuta"*/], ::STRINGS[10/*"milloin_aamu"*/], ::STRINGS[11/*"milloin_ilt...*/], ::STRINGS[12/*"milloin_ilta"*/], ::STRINGS[13/*"missa_koulu"*/], ::STRINGS[14/*"missa_asunt...*/], ::STRINGS[15/*"missa_liiku...*/], ::STRINGS[16/*"missa_olesk...*/], ::STRINGS[17/*"missa_wc"*/], ::STRINGS[18/*"missa_kanslia"*/], ::STRINGS[19/*"missa_ruokala"*/], ::STRINGS[20/*"missa_ulkona"*/], ::STRINGS[21/*"missa_kadulla"*/], ::STRINGS[22/*"missa_kayta...*/], ::STRINGS[23/*"missa_toissa"*/], ::STRINGS[24/*"missa_muualla"*/], ::STRINGS[25/*"kuka_toinen"*/], ::STRINGS[26/*"kuka_vanhem...*/], ::STRINGS[27/*"kuka_opettaja"*/], ::STRINGS[28/*"kuka_kouluk...*/], ::STRINGS[29/*"kuka_jokumuu"*/], ::STRINGS[30/*"mitateit_loin"*/], ::STRINGS[31/*"mitateit_ju...*/], ::STRINGS[32/*"mitateit_hu...*/], ::STRINGS[33/*"mitateit_it...*/], ::STRINGS[34/*"mitateit_ka...*/], ::STRINGS[35/*"mitateit_ri...*/], ::STRINGS[36/*"mitateit_ke...*/], ::STRINGS[37/*"mitateit_ke...*/], ::STRINGS[38/*"mitateit_en...*/], ::STRINGS[39/*"mitateit_ho...*/], ::STRINGS[40/*"mitateit_vi...*/], ::STRINGS[41/*"mitateit_so...*/], ::STRINGS[42/*"mitateit_jo...*/], ::STRINGS[43/*"viha_kihisi...*/], ::STRINGS[44/*"viha_todell...*/], ::STRINGS[45/*"viha_melkov...*/], ::STRINGS[46/*"viha_lievav...*/], ::STRINGS[47/*"viha_enlain...*/], ::STRINGS[48/*"hallinta_1"*/], ::STRINGS[49/*"hallinta_2"*/], ::STRINGS[50/*"hallinta_3"*/], ::STRINGS[51/*"hallinta_4"*/], ::STRINGS[52/*"hallinta_5"*/]);
    FirstPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[53/*"title"*/]);
    FirstPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[54/*"Value"*/]);
    FirstPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[55/*"SendName"*/]);
    FirstPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[56/*"Send"*/]);
    FirstPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[57/*"dropDownList"*/]);
    FirstPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"SavedDock"*/]);
    FirstPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"mita_kiusaus"*/]);
    FirstPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"mita_varkaus"*/]);
    FirstPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"mita_inho"*/]);
    FirstPage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"mita_teinva...*/]);
    FirstPage::__selector10_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[7/*"mita_riitely"*/]);
    FirstPage::__selector11_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"mita_muuta_...*/]);
    FirstPage::__selector12_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[9/*"mita_muuta"*/]);
    FirstPage::__selector13_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[10/*"milloin_aamu"*/]);
    FirstPage::__selector14_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[11/*"milloin_ilt...*/]);
    FirstPage::__selector15_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[12/*"milloin_ilta"*/]);
    FirstPage::__selector16_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[13/*"missa_koulu"*/]);
    FirstPage::__selector17_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[14/*"missa_asunt...*/]);
    FirstPage::__selector18_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[15/*"missa_liiku...*/]);
    FirstPage::__selector19_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[16/*"missa_olesk...*/]);
    FirstPage::__selector20_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[17/*"missa_wc"*/]);
    FirstPage::__selector21_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[18/*"missa_kanslia"*/]);
    FirstPage::__selector22_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[19/*"missa_ruokala"*/]);
    FirstPage::__selector23_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[20/*"missa_ulkona"*/]);
    FirstPage::__selector24_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[21/*"missa_kadulla"*/]);
    FirstPage::__selector25_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[22/*"missa_kayta...*/]);
    FirstPage::__selector26_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[23/*"missa_toissa"*/]);
    FirstPage::__selector27_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[24/*"missa_muualla"*/]);
    FirstPage::__selector28_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[25/*"kuka_toinen"*/]);
    FirstPage::__selector29_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[26/*"kuka_vanhem...*/]);
    FirstPage::__selector30_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[27/*"kuka_opettaja"*/]);
    FirstPage::__selector31_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[28/*"kuka_kouluk...*/]);
    FirstPage::__selector32_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[29/*"kuka_jokumuu"*/]);
    FirstPage::__selector33_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[30/*"mitateit_loin"*/]);
    FirstPage::__selector34_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[31/*"mitateit_ju...*/]);
    FirstPage::__selector35_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[32/*"mitateit_hu...*/]);
    FirstPage::__selector36_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[33/*"mitateit_it...*/]);
    FirstPage::__selector37_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[34/*"mitateit_ka...*/]);
    FirstPage::__selector38_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[35/*"mitateit_ri...*/]);
    FirstPage::__selector39_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[36/*"mitateit_ke...*/]);
    FirstPage::__selector40_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[37/*"mitateit_ke...*/]);
    FirstPage::__selector41_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[38/*"mitateit_en...*/]);
    FirstPage::__selector42_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[39/*"mitateit_ho...*/]);
    FirstPage::__selector43_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[41/*"mitateit_so...*/]);
    FirstPage::__selector44_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[42/*"mitateit_jo...*/]);
    FirstPage::__selector45_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[43/*"viha_kihisi...*/]);
    FirstPage::__selector46_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[44/*"viha_todell...*/]);
    FirstPage::__selector47_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[45/*"viha_melkov...*/]);
    FirstPage::__selector48_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[46/*"viha_lievav...*/]);
    FirstPage::__selector49_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[47/*"viha_enlain...*/]);
    FirstPage::__selector50_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[48/*"hallinta_1"*/]);
    FirstPage::__selector51_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[49/*"hallinta_2"*/]);
    FirstPage::__selector52_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[50/*"hallinta_3"*/]);
    FirstPage::__selector53_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[51/*"hallinta_4"*/]);
    FirstPage::__selector54_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[52/*"hallinta_5"*/]);
}

static void FirstPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("SavedDock");
    ::STRINGS[2] = uString::Const("temp_eb0");
    ::STRINGS[3] = uString::Const("mita_kiusaus");
    ::STRINGS[4] = uString::Const("mita_varkaus");
    ::STRINGS[5] = uString::Const("mita_inho");
    ::STRINGS[6] = uString::Const("mita_teinvaarin");
    ::STRINGS[7] = uString::Const("mita_riitely");
    ::STRINGS[8] = uString::Const("mita_muuta_panel");
    ::STRINGS[9] = uString::Const("mita_muuta");
    ::STRINGS[10] = uString::Const("milloin_aamu");
    ::STRINGS[11] = uString::Const("milloin_iltapaiva");
    ::STRINGS[12] = uString::Const("milloin_ilta");
    ::STRINGS[13] = uString::Const("missa_koulu");
    ::STRINGS[14] = uString::Const("missa_asuntola");
    ::STRINGS[15] = uString::Const("missa_liikuntasali");
    ::STRINGS[16] = uString::Const("missa_oleskelutila");
    ::STRINGS[17] = uString::Const("missa_wc");
    ::STRINGS[18] = uString::Const("missa_kanslia");
    ::STRINGS[19] = uString::Const("missa_ruokala");
    ::STRINGS[20] = uString::Const("missa_ulkona");
    ::STRINGS[21] = uString::Const("missa_kadulla");
    ::STRINGS[22] = uString::Const("missa_kaytavalla");
    ::STRINGS[23] = uString::Const("missa_toissa");
    ::STRINGS[24] = uString::Const("missa_muualla");
    ::STRINGS[25] = uString::Const("kuka_toinen");
    ::STRINGS[26] = uString::Const("kuka_vanhempihoitaja");
    ::STRINGS[27] = uString::Const("kuka_opettaja");
    ::STRINGS[28] = uString::Const("kuka_koulukuraattori");
    ::STRINGS[29] = uString::Const("kuka_jokumuu");
    ::STRINGS[30] = uString::Const("mitateit_loin");
    ::STRINGS[31] = uString::Const("mitateit_juoksin");
    ::STRINGS[32] = uString::Const("mitateit_huusin");
    ::STRINGS[33] = uString::Const("mitateit_itkin");
    ::STRINGS[34] = uString::Const("mitateit_kavelinpois");
    ::STRINGS[35] = uString::Const("mitateit_rikoinjotain");
    ::STRINGS[36] = uString::Const("mitateit_kerroinaiku");
    ::STRINGS[37] = uString::Const("mitateit_kerroinkave");
    ::STRINGS[38] = uString::Const("mitateit_envalittanut");
    ::STRINGS[39] = uString::Const("mitateit_hoidinasianpuhumalla");
    ::STRINGS[40] = uString::Const("mitateit_vihanhallinanmenetelma");
    ::STRINGS[41] = uString::Const("mitateit_sosiaalinentaito");
    ::STRINGS[42] = uString::Const("mitateit_jotainmuuta");
    ::STRINGS[43] = uString::Const("viha_kihisinraivosta");
    ::STRINGS[44] = uString::Const("viha_todellavihainen");
    ::STRINGS[45] = uString::Const("viha_melkovihainen");
    ::STRINGS[46] = uString::Const("viha_lievaviha");
    ::STRINGS[47] = uString::Const("viha_enlainkaan");
    ::STRINGS[48] = uString::Const("hallinta_1");
    ::STRINGS[49] = uString::Const("hallinta_2");
    ::STRINGS[50] = uString::Const("hallinta_3");
    ::STRINGS[51] = uString::Const("hallinta_4");
    ::STRINGS[52] = uString::Const("hallinta_5");
    ::STRINGS[53] = uString::Const("title");
    ::STRINGS[54] = uString::Const("Value");
    ::STRINGS[55] = uString::Const("SendName");
    ::STRINGS[56] = uString::Const("Send");
    ::STRINGS[57] = uString::Const("dropDownList");
    ::STRINGS[58] = uString::Const("Home");
    ::STRINGS[59] = uString::Const("Title");
    ::STRINGS[60] = uString::Const("isOnButton");
    ::STRINGS[61] = uString::Const("saved");
    ::STRINGS[62] = uString::Const("entrystrSendName");
    ::STRINGS[63] = uString::Const("entrystr");
    ::STRINGS[64] = uString::Const("listOfAnger");
    ::STRINGS[65] = uString::Const("FirstPage.ux");
    ::STRINGS[66] = uString::Const("Talleta");
    ::STRINGS[67] = uString::Const("#125F63");
    ::STRINGS[68] = uString::Const("Mill\303\244 tuulella t\303\244n\303\244\303\244n?");
    ::STRINGS[69] = uString::Const("Kerro hieman t\303\244m\303\244n p\303\244iv\303\244n vihanhallinnastasi.");
    ::STRINGS[70] = uString::Const("Mit\303\244 tapahtui?");
    ::STRINGS[71] = uString::Const("Joku kiusasi minua.");
    ::STRINGS[72] = uString::Const("Joku otti jotain minulle kuuluvaa.");
    ::STRINGS[73] = uString::Const("Joku teki jotain, mist\303\244 en pit\303\244nyt.");
    ::STRINGS[74] = uString::Const("Tein jotain v\303\244\303\244rin.");
    ::STRINGS[75] = uString::Const("Joku alkoi riidell\303\244 tai tapella kanssani.");
    ::STRINGS[76] = uString::Const("Muuta");
    ::STRINGS[77] = uString::Const("Milloin?");
    ::STRINGS[78] = uString::Const("Aamu");
    ::STRINGS[79] = uString::Const("Iltap\303\244iv\303\244");
    ::STRINGS[80] = uString::Const("Ilta");
    ::STRINGS[81] = uString::Const("Miss\303\244 olit?");
    ::STRINGS[82] = uString::Const("Luokassa/koulussa");
    ::STRINGS[83] = uString::Const("Asuntolassa");
    ::STRINGS[84] = uString::Const("Liikuntasalissa");
    ::STRINGS[85] = uString::Const("Oleskelutiloissa");
    ::STRINGS[86] = uString::Const("WC:ss\303\244");
    ::STRINGS[87] = uString::Const("Kansliassa");
    ::STRINGS[88] = uString::Const("Ruokalassa");
    ::STRINGS[89] = uString::Const("Ulkona/pihalla");
    ::STRINGS[90] = uString::Const("Kadulla");
    ::STRINGS[91] = uString::Const("K\303\244yt\303\244v\303\244ll\303\244");
    ::STRINGS[92] = uString::Const("T\303\266iss\303\244");
    ::STRINGS[93] = uString::Const("Muualla, miss\303\244?");
    ::STRINGS[94] = uString::Const("Kuka tuo toinen henkil\303\266 oli?");
    ::STRINGS[95] = uString::Const("Toinen nuori");
    ::STRINGS[96] = uString::Const("Vanhempi / hoitaja");
    ::STRINGS[97] = uString::Const("Opettaja");
    ::STRINGS[98] = uString::Const("Koulukuraattori");
    ::STRINGS[99] = uString::Const("Joku muu");
    ::STRINGS[100] = uString::Const("Mit\303\244 teit?");
    ::STRINGS[101] = uString::Const("L\303\266in takaisin");
    ::STRINGS[102] = uString::Const("Juoksin pois");
    ::STRINGS[103] = uString::Const("Huusin");
    ::STRINGS[104] = uString::Const("Itkin");
    ::STRINGS[105] = uString::Const("K\303\244velin pois rauhallisesti");
    ::STRINGS[106] = uString::Const("Rikoin jotain");
    ::STRINGS[107] = uString::Const("Kerroin aikuiselle");
    ::STRINGS[108] = uString::Const("Kerroin kaverille");
    ::STRINGS[109] = uString::Const("En v\303\244litt\303\244nyt asiasta");
    ::STRINGS[110] = uString::Const("Hoidin asian puhumalla");
    ::STRINGS[111] = uString::Const("K\303\244ytin vihanhallinan menetelm\303\244\303\244 (mit\303\244)");
    ::STRINGS[112] = uString::Const("K\303\244ytin sosiaalista taitoa (mit\303\244)");
    ::STRINGS[113] = uString::Const("Jotain muuta");
    ::STRINGS[114] = uString::Const("Kuinka vihainen olit?");
    ::STRINGS[115] = uString::Const("Kihisin raivosta");
    ::STRINGS[116] = uString::Const("Todella vihainen");
    ::STRINGS[117] = uString::Const("Melko vihainen");
    ::STRINGS[118] = uString::Const("Liev\303\244sti vihainen, mutta silti OK");
    ::STRINGS[119] = uString::Const("En lainkaan vihainen");
    ::STRINGS[120] = uString::Const("Kuinka hyvin hallitsit itsesi?");
    ::STRINGS[121] = uString::Const("Huonosti");
    ::STRINGS[122] = uString::Const("En kovin hyvin");
    ::STRINGS[123] = uString::Const("Melko hyvin");
    ::STRINGS[124] = uString::Const("Hyvin");
    ::STRINGS[125] = uString::Const("Todella hienosti");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::Input::Focus_typeof(),
        ::g::Haslaamispaivakirja_bundle_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(121,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(FirstPage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(FirstPage, temp_title_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(FirstPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(FirstPage, mitateit_vihanhallinanmenetelma_SendName_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(FirstPage, mitateit_vihanhallinanmenetelma_Send_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(FirstPage, mitateit_vihanhallinanmenetelma_dropDownList_inst), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(FirstPage, SavedDock), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(FirstPage, temp_eb0), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mita_kiusaus), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mita_varkaus), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mita_inho), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mita_teinvaarin), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mita_riitely), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(FirstPage, mita_muuta_panel), 0,
        ::g::basic::TextBoxAction_typeof(), offsetof(FirstPage, mita_muuta), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, milloin_aamu), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, milloin_iltapaiva), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, milloin_ilta), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, missa_koulu), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, missa_asuntola), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, missa_liikuntasali), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, missa_oleskelutila), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, missa_wc), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, missa_kanslia), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, missa_ruokala), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, missa_ulkona), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, missa_kadulla), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, missa_kaytavalla), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, missa_toissa), 0,
        ::g::basic::TextBoxAction_typeof(), offsetof(FirstPage, missa_muualla), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, kuka_toinen), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, kuka_vanhempihoitaja), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, kuka_opettaja), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, kuka_koulukuraattori), 0,
        ::g::basic::TextBoxAction_typeof(), offsetof(FirstPage, kuka_jokumuu), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_loin), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_juoksin), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_huusin), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_itkin), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_kavelinpois), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_rikoinjotain), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_kerroinaiku), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_kerroinkave), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_envalittanut), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_hoidinasianpuhumalla), 0,
        ::g::textDropDown_typeof(), offsetof(FirstPage, mitateit_vihanhallinanmenetelma), 0,
        ::g::basic::TextBoxAction_typeof(), offsetof(FirstPage, mitateit_sosiaalinentaito), 0,
        ::g::basic::TextBoxAction_typeof(), offsetof(FirstPage, mitateit_jotainmuuta), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, viha_kihisinraivosta), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, viha_todellavihainen), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, viha_melkovihainen), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, viha_lievaviha), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, viha_enlainkaan), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, hallinta_1), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, hallinta_2), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, hallinta_3), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, hallinta_4), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, hallinta_5), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(FirstPage, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&FirstPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector19_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector20_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector21_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector22_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector23_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector24_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector25_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector26_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector27_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector28_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector29_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector30_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector31_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector32_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector33_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector34_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector35_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector36_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector37_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector38_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector39_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector40_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector41_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector42_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector43_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector44_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector45_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector46_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector47_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector48_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector49_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector50_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector51_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector52_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector53_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector54_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* FirstPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 236;
    options.InterfaceCount = 19;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(FirstPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("FirstPage", options);
    type->fp_build_ = FirstPage_build;
    type->fp_cctor_ = FirstPage__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public FirstPage(Fuse.Navigation.Router router) :122
void FirstPage__ctor_8_fn(FirstPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :128
void FirstPage__InitializeUX_fn(FirstPage* __this)
{
    __this->InitializeUX();
}

// public FirstPage New(Fuse.Navigation.Router router) :122
void FirstPage__New5_fn(::g::Fuse::Navigation::Router* router1, FirstPage** __retval)
{
    *__retval = FirstPage::New5(router1);
}

uSStrong<uArray*> FirstPage::__g_static_nametable1_;
::g::Uno::UX::Selector FirstPage::__selector0_;
::g::Uno::UX::Selector FirstPage::__selector1_;
::g::Uno::UX::Selector FirstPage::__selector2_;
::g::Uno::UX::Selector FirstPage::__selector3_;
::g::Uno::UX::Selector FirstPage::__selector4_;
::g::Uno::UX::Selector FirstPage::__selector5_;
::g::Uno::UX::Selector FirstPage::__selector6_;
::g::Uno::UX::Selector FirstPage::__selector7_;
::g::Uno::UX::Selector FirstPage::__selector8_;
::g::Uno::UX::Selector FirstPage::__selector9_;
::g::Uno::UX::Selector FirstPage::__selector10_;
::g::Uno::UX::Selector FirstPage::__selector11_;
::g::Uno::UX::Selector FirstPage::__selector12_;
::g::Uno::UX::Selector FirstPage::__selector13_;
::g::Uno::UX::Selector FirstPage::__selector14_;
::g::Uno::UX::Selector FirstPage::__selector15_;
::g::Uno::UX::Selector FirstPage::__selector16_;
::g::Uno::UX::Selector FirstPage::__selector17_;
::g::Uno::UX::Selector FirstPage::__selector18_;
::g::Uno::UX::Selector FirstPage::__selector19_;
::g::Uno::UX::Selector FirstPage::__selector20_;
::g::Uno::UX::Selector FirstPage::__selector21_;
::g::Uno::UX::Selector FirstPage::__selector22_;
::g::Uno::UX::Selector FirstPage::__selector23_;
::g::Uno::UX::Selector FirstPage::__selector24_;
::g::Uno::UX::Selector FirstPage::__selector25_;
::g::Uno::UX::Selector FirstPage::__selector26_;
::g::Uno::UX::Selector FirstPage::__selector27_;
::g::Uno::UX::Selector FirstPage::__selector28_;
::g::Uno::UX::Selector FirstPage::__selector29_;
::g::Uno::UX::Selector FirstPage::__selector30_;
::g::Uno::UX::Selector FirstPage::__selector31_;
::g::Uno::UX::Selector FirstPage::__selector32_;
::g::Uno::UX::Selector FirstPage::__selector33_;
::g::Uno::UX::Selector FirstPage::__selector34_;
::g::Uno::UX::Selector FirstPage::__selector35_;
::g::Uno::UX::Selector FirstPage::__selector36_;
::g::Uno::UX::Selector FirstPage::__selector37_;
::g::Uno::UX::Selector FirstPage::__selector38_;
::g::Uno::UX::Selector FirstPage::__selector39_;
::g::Uno::UX::Selector FirstPage::__selector40_;
::g::Uno::UX::Selector FirstPage::__selector41_;
::g::Uno::UX::Selector FirstPage::__selector42_;
::g::Uno::UX::Selector FirstPage::__selector43_;
::g::Uno::UX::Selector FirstPage::__selector44_;
::g::Uno::UX::Selector FirstPage::__selector45_;
::g::Uno::UX::Selector FirstPage::__selector46_;
::g::Uno::UX::Selector FirstPage::__selector47_;
::g::Uno::UX::Selector FirstPage::__selector48_;
::g::Uno::UX::Selector FirstPage::__selector49_;
::g::Uno::UX::Selector FirstPage::__selector50_;
::g::Uno::UX::Selector FirstPage::__selector51_;
::g::Uno::UX::Selector FirstPage::__selector52_;
::g::Uno::UX::Selector FirstPage::__selector53_;
::g::Uno::UX::Selector FirstPage::__selector54_;

// public FirstPage(Fuse.Navigation.Router router) [instance] :122
void FirstPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :128
void FirstPage::InitializeUX()
{
    uString* temp2 = ::STRINGS[58/*"Home"*/];
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, FirstPage::__g_static_nametable1_);
    ::g::FlyingDock* temp = ::g::FlyingDock::New4(router);
    temp_title_inst = ::g::Haslaamispaivakirja_FlyingDock_title_Property::New1(temp, FirstPage::__selector0_);
    ::g::Fuse::Navigation::PageExpression* temp3 = ::g::Fuse::Navigation::PageExpression::New1(::STRINGS[59/*"Title"*/]);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[60/*"isOnButton"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp1 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp1_Value_inst = ::g::Haslaamispaivakirja_FuseTriggersWhileBool_Value_Property::New1(temp1, FirstPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[61/*"saved"*/]);
    mitateit_vihanhallinanmenetelma = ::g::textDropDown::New4();
    mitateit_vihanhallinanmenetelma_SendName_inst = ::g::Haslaamispaivakirja_textDropDown_SendName_Property::New1(mitateit_vihanhallinanmenetelma, FirstPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[62/*"entrystrSen...*/]);
    mitateit_vihanhallinanmenetelma_Send_inst = ::g::Haslaamispaivakirja_textDropDown_Send_Property::New1(mitateit_vihanhallinanmenetelma, FirstPage::__selector3_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[63/*"entrystr"*/]);
    mitateit_vihanhallinanmenetelma_dropDownList_inst = ::g::Haslaamispaivakirja_textDropDown_dropDownList_Property::New1(mitateit_vihanhallinanmenetelma, FirstPage::__selector4_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[64/*"listOfAnger"*/]);
    ::g::Uno::UX::Resource* temp9 = ::g::Uno::UX::Resource::New1(::STRINGS[59/*"Title"*/], temp2);
    ::g::Fuse::Reactive::JavaScript* temp10 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::bgImage* temp11 = ::g::bgImage::New4();
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(temp_title_inst, (uObject*)temp3, 3);
    ::g::Fuse::Controls::DockPanel* temp13 = ::g::Fuse::Controls::DockPanel::New4();
    SavedDock = ::g::Fuse::Controls::StackPanel::New4();
    ::g::basicBtn::Button* temp14 = ::g::basicBtn::Button::New4();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    ::g::Fuse::Drawing::StaticSolidColor* temp15 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Animations::Move* temp16 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp5, 3);
    ::g::Fuse::Controls::ScrollView* temp18 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp19 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::header::Text* temp20 = ::g::header::Text::New4();
    ::g::Fuse::Controls::Text* temp21 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp22 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp23 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::basic::TitleText* temp24 = ::g::basic::TitleText::New5();
    ::g::Fuse::Controls::StackPanel* temp25 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp26 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp27 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp28 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp29 = ::g::Fuse::Controls::Grid::New4();
    mita_kiusaus = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp30 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp31 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp32 = ::g::Fuse::Controls::Grid::New4();
    mita_varkaus = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp33 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp34 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp35 = ::g::Fuse::Controls::Grid::New4();
    mita_inho = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp36 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp37 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp38 = ::g::Fuse::Controls::Grid::New4();
    mita_teinvaarin = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp39 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp40 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp41 = ::g::Fuse::Controls::Grid::New4();
    mita_riitely = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp42 = ::g::basic::LabelText::New5();
    mita_muuta_panel = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp43 = ::g::Fuse::Controls::Grid::New4();
    mita_muuta = ::g::basic::TextBoxAction::New4();
    ::g::Fuse::Controls::StackPanel* temp44 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp45 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::basic::TitleText* temp46 = ::g::basic::TitleText::New5();
    ::g::Fuse::Controls::StackPanel* temp47 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp48 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp49 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp50 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp51 = ::g::Fuse::Controls::Grid::New4();
    milloin_aamu = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp52 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp53 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp54 = ::g::Fuse::Controls::Grid::New4();
    milloin_iltapaiva = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp55 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp56 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp57 = ::g::Fuse::Controls::Grid::New4();
    milloin_ilta = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp58 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp59 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp60 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::basic::TitleText* temp61 = ::g::basic::TitleText::New5();
    ::g::Fuse::Controls::StackPanel* temp62 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp63 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp64 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp65 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp66 = ::g::Fuse::Controls::Grid::New4();
    missa_koulu = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp67 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp68 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp69 = ::g::Fuse::Controls::Grid::New4();
    missa_asuntola = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp70 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp71 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp72 = ::g::Fuse::Controls::Grid::New4();
    missa_liikuntasali = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp73 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp74 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp75 = ::g::Fuse::Controls::Grid::New4();
    missa_oleskelutila = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp76 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp77 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp78 = ::g::Fuse::Controls::Grid::New4();
    missa_wc = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp79 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp80 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp81 = ::g::Fuse::Controls::Grid::New4();
    missa_kanslia = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp82 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp83 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp84 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp85 = ::g::Fuse::Controls::Grid::New4();
    missa_ruokala = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp86 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp87 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp88 = ::g::Fuse::Controls::Grid::New4();
    missa_ulkona = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp89 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp90 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp91 = ::g::Fuse::Controls::Grid::New4();
    missa_kadulla = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp92 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp93 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp94 = ::g::Fuse::Controls::Grid::New4();
    missa_kaytavalla = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp95 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp96 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp97 = ::g::Fuse::Controls::Grid::New4();
    missa_toissa = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp98 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp99 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp100 = ::g::Fuse::Controls::Grid::New4();
    missa_muualla = ::g::basic::TextBoxAction::New4();
    ::g::Fuse::Controls::StackPanel* temp101 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp102 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::basic::TitleText* temp103 = ::g::basic::TitleText::New5();
    ::g::Fuse::Controls::StackPanel* temp104 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp105 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp106 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp107 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp108 = ::g::Fuse::Controls::Grid::New4();
    kuka_toinen = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp109 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp110 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp111 = ::g::Fuse::Controls::Grid::New4();
    kuka_vanhempihoitaja = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp112 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp113 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp114 = ::g::Fuse::Controls::Grid::New4();
    kuka_opettaja = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp115 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp116 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp117 = ::g::Fuse::Controls::Grid::New4();
    kuka_koulukuraattori = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp118 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp119 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp120 = ::g::Fuse::Controls::Grid::New4();
    kuka_jokumuu = ::g::basic::TextBoxAction::New4();
    ::g::Fuse::Controls::StackPanel* temp121 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp122 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::basic::TitleText* temp123 = ::g::basic::TitleText::New5();
    ::g::Fuse::Controls::StackPanel* temp124 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp125 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp126 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp127 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp128 = ::g::Fuse::Controls::Grid::New4();
    mitateit_loin = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp129 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp130 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp131 = ::g::Fuse::Controls::Grid::New4();
    mitateit_juoksin = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp132 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp133 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp134 = ::g::Fuse::Controls::Grid::New4();
    mitateit_huusin = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp135 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp136 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp137 = ::g::Fuse::Controls::Grid::New4();
    mitateit_itkin = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp138 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp139 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp140 = ::g::Fuse::Controls::Grid::New4();
    mitateit_kavelinpois = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp141 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp142 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp143 = ::g::Fuse::Controls::Grid::New4();
    mitateit_rikoinjotain = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp144 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp145 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp146 = ::g::Fuse::Controls::Grid::New4();
    mitateit_kerroinaiku = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp147 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp148 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp149 = ::g::Fuse::Controls::Grid::New4();
    mitateit_kerroinkave = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp150 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp151 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp152 = ::g::Fuse::Controls::Grid::New4();
    mitateit_envalittanut = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp153 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp154 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp155 = ::g::Fuse::Controls::Grid::New4();
    mitateit_hoidinasianpuhumalla = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp156 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp157 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp158 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp159 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp160 = ::g::Fuse::Reactive::DataBinding::New1(mitateit_vihanhallinanmenetelma_SendName_inst, (uObject*)temp6, 3);
    ::g::Fuse::Reactive::DataBinding* temp161 = ::g::Fuse::Reactive::DataBinding::New1(mitateit_vihanhallinanmenetelma_Send_inst, (uObject*)temp7, 3);
    ::g::Fuse::Reactive::DataBinding* temp162 = ::g::Fuse::Reactive::DataBinding::New1(mitateit_vihanhallinanmenetelma_dropDownList_inst, (uObject*)temp8, 3);
    ::g::Fuse::Controls::StackPanel* temp163 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp164 = ::g::Fuse::Controls::Grid::New4();
    mitateit_sosiaalinentaito = ::g::basic::TextBoxAction::New4();
    ::g::Fuse::Controls::StackPanel* temp165 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp166 = ::g::Fuse::Controls::Grid::New4();
    mitateit_jotainmuuta = ::g::basic::TextBoxAction::New4();
    ::g::Fuse::Controls::StackPanel* temp167 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp168 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::basic::TitleText* temp169 = ::g::basic::TitleText::New5();
    ::g::Fuse::Controls::StackPanel* temp170 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp171 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp172 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp173 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp174 = ::g::Fuse::Controls::Grid::New4();
    viha_kihisinraivosta = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp175 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp176 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp177 = ::g::Fuse::Controls::Grid::New4();
    viha_todellavihainen = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp178 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp179 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp180 = ::g::Fuse::Controls::Grid::New4();
    viha_melkovihainen = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp181 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp182 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp183 = ::g::Fuse::Controls::Grid::New4();
    viha_lievaviha = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp184 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp185 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp186 = ::g::Fuse::Controls::Grid::New4();
    viha_enlainkaan = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp187 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp188 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp189 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::basic::TitleText* temp190 = ::g::basic::TitleText::New5();
    ::g::Fuse::Controls::StackPanel* temp191 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp192 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp193 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp194 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp195 = ::g::Fuse::Controls::Grid::New4();
    hallinta_1 = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp196 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp197 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp198 = ::g::Fuse::Controls::Grid::New4();
    hallinta_2 = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp199 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp200 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp201 = ::g::Fuse::Controls::Grid::New4();
    hallinta_3 = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp202 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp203 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp204 = ::g::Fuse::Controls::Grid::New4();
    hallinta_4 = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp205 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp206 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp207 = ::g::Fuse::Controls::Grid::New4();
    hallinta_5 = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp208 = ::g::basic::LabelText::New5();
    SourceLineNumber(1);
    SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp10->LineNumber(4);
    temp10->FileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp10->SourceLineNumber(4);
    temp10->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp10->File(::g::Uno::UX::BundleFileSource::New1(::g::Haslaamispaivakirja_bundle::FirstPage32a714a7()));
    temp11->SourceLineNumber(6);
    temp11->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp->SourceLineNumber(11);
    temp->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp3->SourceLineNumber(11);
    temp3->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp13->SourceLineNumber(13);
    temp13->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), SavedDock);
    uPtr(SavedDock)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, -80.0f));
    uPtr(SavedDock)->Padding(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    uPtr(SavedDock)->Name(FirstPage::__selector5_);
    uPtr(SavedDock)->SourceLineNumber(14);
    uPtr(SavedDock)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(SavedDock, 3);
    uPtr(SavedDock)->Background(temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(SavedDock)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp14->Text(::STRINGS[66/*"Talleta"*/]);
    temp14->BgColor(::STRINGS[67/*"#125F63"*/]);
    temp14->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp14->SourceLineNumber(16);
    temp14->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp14, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp4->SourceLineNumber(16);
    temp4->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp1->SourceLineNumber(20);
    temp1->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp16->Y(-80.0f);
    temp16->Duration(1.0);
    temp16->Target(SavedDock);
    temp16->Easing(::g::Fuse::Animations::Easing::BackOut());
    temp5->SourceLineNumber(20);
    temp5->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp18->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp18->SourceLineNumber(25);
    temp18->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp19->Margin(::g::Uno::Float4__New2(15.0f, 60.0f, 15.0f, 0.0f));
    temp19->SourceLineNumber(27);
    temp19->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp121);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp167);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp188);
    temp20->Value(::STRINGS[68/*"Millä tuule...*/]);
    temp20->TextAlignment(0);
    temp20->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp20->SourceLineNumber(32);
    temp20->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp21->Value(::STRINGS[69/*"Kerro hiema...*/]);
    temp21->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    temp21->SourceLineNumber(33);
    temp21->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp22->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    temp22->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp22->SourceLineNumber(35);
    temp22->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    temp23->SourceLineNumber(47);
    temp23->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    temp24->Value(::STRINGS[70/*"Mitä tapaht...*/]);
    temp24->SourceLineNumber(48);
    temp24->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp25->SourceLineNumber(51);
    temp25->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp26->ColumnCount(1);
    temp26->SourceLineNumber(52);
    temp26->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    temp27->SourceLineNumber(53);
    temp27->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mita_muuta_panel);
    temp28->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp28->SourceLineNumber(54);
    temp28->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    temp29->ColumnCount(3);
    temp29->SourceLineNumber(55);
    temp29->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mita_kiusaus);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    uPtr(mita_kiusaus)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mita_kiusaus)->Name(FirstPage::__selector6_);
    uPtr(mita_kiusaus)->SourceLineNumber(56);
    uPtr(mita_kiusaus)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp30->Value(::STRINGS[71/*"Joku kiusas...*/]);
    temp30->TextWrapping(1);
    temp30->Alignment(9);
    temp30->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp30->SourceLineNumber(57);
    temp30->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp30, 3);
    temp31->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp31->SourceLineNumber(60);
    temp31->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    temp32->ColumnCount(3);
    temp32->SourceLineNumber(61);
    temp32->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mita_varkaus);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    uPtr(mita_varkaus)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mita_varkaus)->Name(FirstPage::__selector7_);
    uPtr(mita_varkaus)->SourceLineNumber(62);
    uPtr(mita_varkaus)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp33->Value(::STRINGS[72/*"Joku otti j...*/]);
    temp33->TextWrapping(1);
    temp33->Alignment(9);
    temp33->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp33->SourceLineNumber(63);
    temp33->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp33, 3);
    temp34->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp34->SourceLineNumber(66);
    temp34->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    temp35->ColumnCount(3);
    temp35->SourceLineNumber(67);
    temp35->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mita_inho);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    uPtr(mita_inho)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mita_inho)->Name(FirstPage::__selector8_);
    uPtr(mita_inho)->SourceLineNumber(68);
    uPtr(mita_inho)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp36->Value(::STRINGS[73/*"Joku teki j...*/]);
    temp36->TextWrapping(1);
    temp36->Alignment(9);
    temp36->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp36->SourceLineNumber(69);
    temp36->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp36, 3);
    temp37->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp37->SourceLineNumber(72);
    temp37->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    temp38->ColumnCount(3);
    temp38->SourceLineNumber(73);
    temp38->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mita_teinvaarin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    uPtr(mita_teinvaarin)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mita_teinvaarin)->Name(FirstPage::__selector9_);
    uPtr(mita_teinvaarin)->SourceLineNumber(74);
    uPtr(mita_teinvaarin)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp39->Value(::STRINGS[74/*"Tein jotain...*/]);
    temp39->TextWrapping(1);
    temp39->Alignment(9);
    temp39->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp39->SourceLineNumber(75);
    temp39->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp39, 3);
    temp40->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp40->SourceLineNumber(78);
    temp40->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp41->ColumnCount(3);
    temp41->SourceLineNumber(79);
    temp41->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mita_riitely);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    uPtr(mita_riitely)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mita_riitely)->Name(FirstPage::__selector10_);
    uPtr(mita_riitely)->SourceLineNumber(80);
    uPtr(mita_riitely)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp42->Value(::STRINGS[75/*"Joku alkoi ...*/]);
    temp42->TextWrapping(1);
    temp42->Alignment(9);
    temp42->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp42->SourceLineNumber(81);
    temp42->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp42, 3);
    uPtr(mita_muuta_panel)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    uPtr(mita_muuta_panel)->Name(FirstPage::__selector11_);
    uPtr(mita_muuta_panel)->SourceLineNumber(84);
    uPtr(mita_muuta_panel)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Input::Focus::SetIsFocusable(mita_muuta_panel, true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mita_muuta_panel)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    temp43->ColumnCount(1);
    temp43->SourceLineNumber(85);
    temp43->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mita_muuta);
    uPtr(mita_muuta)->PlaceholderText(::STRINGS[76/*"Muuta"*/]);
    uPtr(mita_muuta)->PlaceholderColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.6980392f));
    uPtr(mita_muuta)->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    uPtr(mita_muuta)->Name(FirstPage::__selector12_);
    uPtr(mita_muuta)->SourceLineNumber(86);
    uPtr(mita_muuta)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Input::Focus::SetFocusDelegate(mita_muuta, mita_muuta_panel);
    temp44->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    temp44->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp44->SourceLineNumber(96);
    temp44->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    temp45->SourceLineNumber(97);
    temp45->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    temp46->Value(::STRINGS[77/*"Milloin?"*/]);
    temp46->SourceLineNumber(98);
    temp46->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp47->SourceLineNumber(101);
    temp47->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    temp48->ColumnCount(1);
    temp48->SourceLineNumber(102);
    temp48->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    temp49->SourceLineNumber(103);
    temp49->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    temp50->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp50->SourceLineNumber(104);
    temp50->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    temp51->ColumnCount(3);
    temp51->SourceLineNumber(105);
    temp51->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), milloin_aamu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    uPtr(milloin_aamu)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(milloin_aamu)->Name(FirstPage::__selector13_);
    uPtr(milloin_aamu)->SourceLineNumber(106);
    uPtr(milloin_aamu)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp52->Value(::STRINGS[78/*"Aamu"*/]);
    temp52->TextWrapping(1);
    temp52->Alignment(9);
    temp52->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp52->SourceLineNumber(107);
    temp52->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp52, 3);
    temp53->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp53->SourceLineNumber(110);
    temp53->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    temp54->ColumnCount(3);
    temp54->SourceLineNumber(111);
    temp54->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), milloin_iltapaiva);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    uPtr(milloin_iltapaiva)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(milloin_iltapaiva)->Name(FirstPage::__selector14_);
    uPtr(milloin_iltapaiva)->SourceLineNumber(112);
    uPtr(milloin_iltapaiva)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp55->Value(::STRINGS[79/*"Iltapäivä"*/]);
    temp55->TextWrapping(1);
    temp55->Alignment(9);
    temp55->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp55->SourceLineNumber(113);
    temp55->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp55, 3);
    temp56->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp56->SourceLineNumber(116);
    temp56->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    temp57->ColumnCount(3);
    temp57->SourceLineNumber(117);
    temp57->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), milloin_ilta);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    uPtr(milloin_ilta)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(milloin_ilta)->Name(FirstPage::__selector15_);
    uPtr(milloin_ilta)->SourceLineNumber(118);
    uPtr(milloin_ilta)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp58->Value(::STRINGS[80/*"Ilta"*/]);
    temp58->TextWrapping(1);
    temp58->Alignment(9);
    temp58->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp58->SourceLineNumber(119);
    temp58->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp58, 3);
    temp59->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    temp59->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp59->SourceLineNumber(127);
    temp59->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    temp60->SourceLineNumber(128);
    temp60->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    temp61->Value(::STRINGS[81/*"Missä olit?"*/]);
    temp61->SourceLineNumber(129);
    temp61->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp62->SourceLineNumber(132);
    temp62->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    temp63->ColumnCount(1);
    temp63->SourceLineNumber(133);
    temp63->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp83);
    temp64->SourceLineNumber(134);
    temp64->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp80);
    temp65->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp65->SourceLineNumber(135);
    temp65->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    temp66->ColumnCount(3);
    temp66->SourceLineNumber(136);
    temp66->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_koulu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    uPtr(missa_koulu)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_koulu)->Name(FirstPage::__selector16_);
    uPtr(missa_koulu)->SourceLineNumber(137);
    uPtr(missa_koulu)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp67->Value(::STRINGS[82/*"Luokassa/ko...*/]);
    temp67->TextWrapping(1);
    temp67->Alignment(9);
    temp67->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp67->SourceLineNumber(138);
    temp67->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp67, 3);
    temp68->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp68->SourceLineNumber(141);
    temp68->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    temp69->ColumnCount(3);
    temp69->SourceLineNumber(142);
    temp69->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_asuntola);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    uPtr(missa_asuntola)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_asuntola)->Name(FirstPage::__selector17_);
    uPtr(missa_asuntola)->SourceLineNumber(143);
    uPtr(missa_asuntola)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp70->Value(::STRINGS[83/*"Asuntolassa"*/]);
    temp70->TextWrapping(1);
    temp70->Alignment(9);
    temp70->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp70->SourceLineNumber(144);
    temp70->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp70, 3);
    temp71->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp71->SourceLineNumber(147);
    temp71->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp71->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp72);
    temp72->ColumnCount(3);
    temp72->SourceLineNumber(148);
    temp72->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_liikuntasali);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp73);
    uPtr(missa_liikuntasali)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_liikuntasali)->Name(FirstPage::__selector18_);
    uPtr(missa_liikuntasali)->SourceLineNumber(149);
    uPtr(missa_liikuntasali)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp73->Value(::STRINGS[84/*"Liikuntasal...*/]);
    temp73->TextWrapping(1);
    temp73->Alignment(9);
    temp73->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp73->SourceLineNumber(150);
    temp73->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp73, 3);
    temp74->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp74->SourceLineNumber(153);
    temp74->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp75);
    temp75->ColumnCount(3);
    temp75->SourceLineNumber(154);
    temp75->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_oleskelutila);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp76);
    uPtr(missa_oleskelutila)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_oleskelutila)->Name(FirstPage::__selector19_);
    uPtr(missa_oleskelutila)->SourceLineNumber(155);
    uPtr(missa_oleskelutila)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp76->Value(::STRINGS[85/*"Oleskelutil...*/]);
    temp76->TextWrapping(1);
    temp76->Alignment(9);
    temp76->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp76->SourceLineNumber(156);
    temp76->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp76, 3);
    temp77->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp77->SourceLineNumber(159);
    temp77->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    temp78->ColumnCount(3);
    temp78->SourceLineNumber(160);
    temp78->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_wc);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp79);
    uPtr(missa_wc)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_wc)->Name(FirstPage::__selector20_);
    uPtr(missa_wc)->SourceLineNumber(161);
    uPtr(missa_wc)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp79->Value(::STRINGS[86/*"WC:ssä"*/]);
    temp79->TextWrapping(1);
    temp79->Alignment(9);
    temp79->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp79->SourceLineNumber(162);
    temp79->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp79, 3);
    temp80->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp80->SourceLineNumber(165);
    temp80->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp81);
    temp81->ColumnCount(3);
    temp81->SourceLineNumber(166);
    temp81->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_kanslia);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp82);
    uPtr(missa_kanslia)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_kanslia)->Name(FirstPage::__selector21_);
    uPtr(missa_kanslia)->SourceLineNumber(167);
    uPtr(missa_kanslia)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp82->Value(::STRINGS[87/*"Kansliassa"*/]);
    temp82->TextWrapping(1);
    temp82->Alignment(9);
    temp82->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp82->SourceLineNumber(168);
    temp82->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp82, 3);
    temp83->SourceLineNumber(173);
    temp83->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp90);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp93);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp96);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp99);
    temp84->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp84->SourceLineNumber(174);
    temp84->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp85);
    temp85->ColumnCount(3);
    temp85->SourceLineNumber(175);
    temp85->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_ruokala);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp86);
    uPtr(missa_ruokala)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_ruokala)->Name(FirstPage::__selector22_);
    uPtr(missa_ruokala)->SourceLineNumber(176);
    uPtr(missa_ruokala)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp86->Value(::STRINGS[88/*"Ruokalassa"*/]);
    temp86->TextWrapping(1);
    temp86->Alignment(9);
    temp86->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp86->SourceLineNumber(177);
    temp86->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp86, 3);
    temp87->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp87->SourceLineNumber(180);
    temp87->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp88);
    temp88->ColumnCount(3);
    temp88->SourceLineNumber(181);
    temp88->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_ulkona);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp89);
    uPtr(missa_ulkona)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_ulkona)->Name(FirstPage::__selector23_);
    uPtr(missa_ulkona)->SourceLineNumber(182);
    uPtr(missa_ulkona)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp89->Value(::STRINGS[89/*"Ulkona/piha...*/]);
    temp89->TextWrapping(1);
    temp89->Alignment(9);
    temp89->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp89->SourceLineNumber(183);
    temp89->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp89, 3);
    temp90->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp90->SourceLineNumber(186);
    temp90->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp91);
    temp91->ColumnCount(3);
    temp91->SourceLineNumber(187);
    temp91->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_kadulla);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp92);
    uPtr(missa_kadulla)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_kadulla)->Name(FirstPage::__selector24_);
    uPtr(missa_kadulla)->SourceLineNumber(188);
    uPtr(missa_kadulla)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp92->Value(::STRINGS[90/*"Kadulla"*/]);
    temp92->TextWrapping(1);
    temp92->Alignment(9);
    temp92->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp92->SourceLineNumber(189);
    temp92->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp92, 3);
    temp93->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp93->SourceLineNumber(192);
    temp93->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp94);
    temp94->ColumnCount(3);
    temp94->SourceLineNumber(193);
    temp94->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_kaytavalla);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp95);
    uPtr(missa_kaytavalla)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_kaytavalla)->Name(FirstPage::__selector25_);
    uPtr(missa_kaytavalla)->SourceLineNumber(194);
    uPtr(missa_kaytavalla)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp95->Value(::STRINGS[91/*"Käytävällä"*/]);
    temp95->TextWrapping(1);
    temp95->Alignment(9);
    temp95->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp95->SourceLineNumber(195);
    temp95->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp95, 3);
    temp96->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp96->SourceLineNumber(198);
    temp96->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp96->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp97);
    temp97->ColumnCount(3);
    temp97->SourceLineNumber(199);
    temp97->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp97->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_toissa);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp97->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp98);
    uPtr(missa_toissa)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_toissa)->Name(FirstPage::__selector26_);
    uPtr(missa_toissa)->SourceLineNumber(200);
    uPtr(missa_toissa)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp98->Value(::STRINGS[92/*"Töissä"*/]);
    temp98->TextWrapping(1);
    temp98->Alignment(9);
    temp98->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp98->SourceLineNumber(201);
    temp98->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp98, 3);
    temp99->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp99->SourceLineNumber(204);
    temp99->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp99->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp100);
    temp100->ColumnCount(1);
    temp100->SourceLineNumber(205);
    temp100->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_muualla);
    uPtr(missa_muualla)->PlaceholderText(::STRINGS[93/*"Muualla, mi...*/]);
    uPtr(missa_muualla)->PlaceholderColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.6980392f));
    uPtr(missa_muualla)->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    uPtr(missa_muualla)->Name(FirstPage::__selector27_);
    uPtr(missa_muualla)->SourceLineNumber(206);
    uPtr(missa_muualla)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp101->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    temp101->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp101->SourceLineNumber(214);
    temp101->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp101->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp102);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp101->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp104);
    temp102->SourceLineNumber(215);
    temp102->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp102->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp103);
    temp103->Value(::STRINGS[94/*"Kuka tuo to...*/]);
    temp103->SourceLineNumber(216);
    temp103->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp104->SourceLineNumber(219);
    temp104->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp105);
    temp105->ColumnCount(1);
    temp105->SourceLineNumber(220);
    temp105->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp105->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp106);
    temp106->SourceLineNumber(221);
    temp106->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp106->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp107);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp106->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp110);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp106->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp113);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp106->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp116);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp106->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp119);
    temp107->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp107->SourceLineNumber(222);
    temp107->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp107->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp108);
    temp108->ColumnCount(4);
    temp108->SourceLineNumber(223);
    temp108->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp108->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), kuka_toinen);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp108->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp109);
    uPtr(kuka_toinen)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(kuka_toinen)->Name(FirstPage::__selector28_);
    uPtr(kuka_toinen)->SourceLineNumber(224);
    uPtr(kuka_toinen)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp109->Value(::STRINGS[95/*"Toinen nuori"*/]);
    temp109->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp109->SourceLineNumber(225);
    temp109->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp109, 3);
    temp110->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp110->SourceLineNumber(228);
    temp110->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp111);
    temp111->ColumnCount(4);
    temp111->SourceLineNumber(229);
    temp111->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp111->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), kuka_vanhempihoitaja);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp111->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp112);
    uPtr(kuka_vanhempihoitaja)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(kuka_vanhempihoitaja)->Name(FirstPage::__selector29_);
    uPtr(kuka_vanhempihoitaja)->SourceLineNumber(230);
    uPtr(kuka_vanhempihoitaja)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp112->Value(::STRINGS[96/*"Vanhempi / ...*/]);
    temp112->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp112->SourceLineNumber(231);
    temp112->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp112, 3);
    temp113->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp113->SourceLineNumber(234);
    temp113->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp113->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp114);
    temp114->ColumnCount(4);
    temp114->SourceLineNumber(235);
    temp114->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), kuka_opettaja);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp115);
    uPtr(kuka_opettaja)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(kuka_opettaja)->Name(FirstPage::__selector30_);
    uPtr(kuka_opettaja)->SourceLineNumber(236);
    uPtr(kuka_opettaja)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp115->Value(::STRINGS[97/*"Opettaja"*/]);
    temp115->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp115->SourceLineNumber(237);
    temp115->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp115, 3);
    temp116->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp116->SourceLineNumber(240);
    temp116->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp116->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp117);
    temp117->ColumnCount(4);
    temp117->SourceLineNumber(241);
    temp117->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), kuka_koulukuraattori);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp118);
    uPtr(kuka_koulukuraattori)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(kuka_koulukuraattori)->Name(FirstPage::__selector31_);
    uPtr(kuka_koulukuraattori)->SourceLineNumber(242);
    uPtr(kuka_koulukuraattori)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp118->Value(::STRINGS[98/*"Koulukuraat...*/]);
    temp118->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp118->SourceLineNumber(243);
    temp118->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp118, 3);
    temp119->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp119->SourceLineNumber(246);
    temp119->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp119->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp120);
    temp120->ColumnCount(1);
    temp120->SourceLineNumber(247);
    temp120->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), kuka_jokumuu);
    uPtr(kuka_jokumuu)->PlaceholderText(::STRINGS[99/*"Joku muu"*/]);
    uPtr(kuka_jokumuu)->PlaceholderColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.6980392f));
    uPtr(kuka_jokumuu)->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    uPtr(kuka_jokumuu)->Name(FirstPage::__selector32_);
    uPtr(kuka_jokumuu)->SourceLineNumber(248);
    uPtr(kuka_jokumuu)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp121->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    temp121->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp121->SourceLineNumber(256);
    temp121->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp121->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp122);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp121->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp124);
    temp122->SourceLineNumber(257);
    temp122->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp122->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp123);
    temp123->Value(::STRINGS[100/*"Mitä teit?"*/]);
    temp123->SourceLineNumber(258);
    temp123->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp124->SourceLineNumber(261);
    temp124->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp125);
    temp125->ColumnCount(1);
    temp125->SourceLineNumber(262);
    temp125->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp125->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp126);
    temp126->SourceLineNumber(263);
    temp126->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp127);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp130);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp133);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp136);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp139);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp142);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp145);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp148);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp151);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp154);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp157);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp163);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp165);
    temp127->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp127->SourceLineNumber(264);
    temp127->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp127->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp128);
    temp128->ColumnCount(4);
    temp128->SourceLineNumber(265);
    temp128->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_loin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp129);
    uPtr(mitateit_loin)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_loin)->Name(FirstPage::__selector33_);
    uPtr(mitateit_loin)->SourceLineNumber(266);
    uPtr(mitateit_loin)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp129->Value(::STRINGS[101/*"Löin takaisin"*/]);
    temp129->TextWrapping(1);
    temp129->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp129->SourceLineNumber(267);
    temp129->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp129, 3);
    temp130->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp130->SourceLineNumber(270);
    temp130->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp130->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp131);
    temp131->ColumnCount(4);
    temp131->SourceLineNumber(271);
    temp131->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_juoksin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp132);
    uPtr(mitateit_juoksin)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_juoksin)->Name(FirstPage::__selector34_);
    uPtr(mitateit_juoksin)->SourceLineNumber(272);
    uPtr(mitateit_juoksin)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp132->Value(::STRINGS[102/*"Juoksin pois"*/]);
    temp132->TextWrapping(1);
    temp132->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp132->SourceLineNumber(273);
    temp132->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp132, 3);
    temp133->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp133->SourceLineNumber(276);
    temp133->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp133->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp134);
    temp134->ColumnCount(4);
    temp134->SourceLineNumber(277);
    temp134->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp134->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_huusin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp134->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp135);
    uPtr(mitateit_huusin)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_huusin)->Name(FirstPage::__selector35_);
    uPtr(mitateit_huusin)->SourceLineNumber(278);
    uPtr(mitateit_huusin)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp135->Value(::STRINGS[103/*"Huusin"*/]);
    temp135->TextWrapping(1);
    temp135->Alignment(9);
    temp135->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp135->SourceLineNumber(279);
    temp135->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp135, 3);
    temp136->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp136->SourceLineNumber(282);
    temp136->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp136->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp137);
    temp137->ColumnCount(4);
    temp137->SourceLineNumber(283);
    temp137->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_itkin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp138);
    uPtr(mitateit_itkin)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_itkin)->Name(FirstPage::__selector36_);
    uPtr(mitateit_itkin)->SourceLineNumber(284);
    uPtr(mitateit_itkin)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp138->Value(::STRINGS[104/*"Itkin"*/]);
    temp138->TextWrapping(1);
    temp138->Alignment(9);
    temp138->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp138->SourceLineNumber(285);
    temp138->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp138, 3);
    temp139->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp139->SourceLineNumber(288);
    temp139->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp140);
    temp140->ColumnCount(4);
    temp140->SourceLineNumber(289);
    temp140->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp140->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_kavelinpois);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp140->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp141);
    uPtr(mitateit_kavelinpois)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_kavelinpois)->Name(FirstPage::__selector37_);
    uPtr(mitateit_kavelinpois)->SourceLineNumber(290);
    uPtr(mitateit_kavelinpois)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp141->Value(::STRINGS[105/*"Kävelin poi...*/]);
    temp141->TextWrapping(1);
    temp141->Alignment(9);
    temp141->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp141->SourceLineNumber(291);
    temp141->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp141, 3);
    temp142->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp142->SourceLineNumber(294);
    temp142->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp142->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp143);
    temp143->ColumnCount(4);
    temp143->SourceLineNumber(295);
    temp143->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp143->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_rikoinjotain);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp143->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp144);
    uPtr(mitateit_rikoinjotain)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_rikoinjotain)->Name(FirstPage::__selector38_);
    uPtr(mitateit_rikoinjotain)->SourceLineNumber(296);
    uPtr(mitateit_rikoinjotain)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp144->Value(::STRINGS[106/*"Rikoin jotain"*/]);
    temp144->TextWrapping(1);
    temp144->Alignment(9);
    temp144->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp144->SourceLineNumber(297);
    temp144->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp144, 3);
    temp145->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp145->SourceLineNumber(300);
    temp145->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp145->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp146);
    temp146->ColumnCount(4);
    temp146->SourceLineNumber(301);
    temp146->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_kerroinaiku);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp147);
    uPtr(mitateit_kerroinaiku)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_kerroinaiku)->Name(FirstPage::__selector39_);
    uPtr(mitateit_kerroinaiku)->SourceLineNumber(302);
    uPtr(mitateit_kerroinaiku)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp147->Value(::STRINGS[107/*"Kerroin aik...*/]);
    temp147->TextWrapping(1);
    temp147->Alignment(9);
    temp147->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp147->SourceLineNumber(303);
    temp147->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp147, 3);
    temp148->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp148->SourceLineNumber(306);
    temp148->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp148->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp149);
    temp149->ColumnCount(4);
    temp149->SourceLineNumber(307);
    temp149->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_kerroinkave);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp150);
    uPtr(mitateit_kerroinkave)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_kerroinkave)->Name(FirstPage::__selector40_);
    uPtr(mitateit_kerroinkave)->SourceLineNumber(308);
    uPtr(mitateit_kerroinkave)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp150->Value(::STRINGS[108/*"Kerroin kav...*/]);
    temp150->TextWrapping(1);
    temp150->Alignment(9);
    temp150->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp150->SourceLineNumber(309);
    temp150->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp150, 3);
    temp151->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp151->SourceLineNumber(312);
    temp151->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp151->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp152);
    temp152->ColumnCount(4);
    temp152->SourceLineNumber(313);
    temp152->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp152->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_envalittanut);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp152->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp153);
    uPtr(mitateit_envalittanut)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_envalittanut)->Name(FirstPage::__selector41_);
    uPtr(mitateit_envalittanut)->SourceLineNumber(314);
    uPtr(mitateit_envalittanut)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp153->Value(::STRINGS[109/*"En välittän...*/]);
    temp153->TextWrapping(1);
    temp153->Alignment(9);
    temp153->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp153->SourceLineNumber(315);
    temp153->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp153, 3);
    temp154->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp154->SourceLineNumber(318);
    temp154->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp155);
    temp155->ColumnCount(4);
    temp155->SourceLineNumber(319);
    temp155->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp155->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_hoidinasianpuhumalla);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp155->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp156);
    uPtr(mitateit_hoidinasianpuhumalla)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_hoidinasianpuhumalla)->Name(FirstPage::__selector42_);
    uPtr(mitateit_hoidinasianpuhumalla)->SourceLineNumber(320);
    uPtr(mitateit_hoidinasianpuhumalla)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp156->Value(::STRINGS[110/*"Hoidin asia...*/]);
    temp156->TextWrapping(1);
    temp156->Alignment(9);
    temp156->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp156->SourceLineNumber(321);
    temp156->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp156, 3);
    temp157->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp157->SourceLineNumber(324);
    temp157->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp158);
    temp158->ColumnCount(1);
    temp158->SourceLineNumber(325);
    temp158->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp158->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp159);
    temp159->SourceLineNumber(329);
    temp159->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp159->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_vihanhallinanmenetelma);
    uPtr(mitateit_vihanhallinanmenetelma)->Value(::STRINGS[111/*"Käytin viha...*/]);
    uPtr(mitateit_vihanhallinanmenetelma)->Name1(::STRINGS[40/*"mitateit_vi...*/]);
    uPtr(mitateit_vihanhallinanmenetelma)->SourceLineNumber(330);
    uPtr(mitateit_vihanhallinanmenetelma)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mitateit_vihanhallinanmenetelma)->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp160);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mitateit_vihanhallinanmenetelma)->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp161);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mitateit_vihanhallinanmenetelma)->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp162);
    temp6->SourceLineNumber(330);
    temp6->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp7->SourceLineNumber(330);
    temp7->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp8->SourceLineNumber(330);
    temp8->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp163->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp163->SourceLineNumber(334);
    temp163->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp163->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp164);
    temp164->ColumnCount(1);
    temp164->SourceLineNumber(335);
    temp164->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp164->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_sosiaalinentaito);
    uPtr(mitateit_sosiaalinentaito)->PlaceholderText(::STRINGS[112/*"Käytin sosi...*/]);
    uPtr(mitateit_sosiaalinentaito)->PlaceholderColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.6980392f));
    uPtr(mitateit_sosiaalinentaito)->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    uPtr(mitateit_sosiaalinentaito)->Name(FirstPage::__selector43_);
    uPtr(mitateit_sosiaalinentaito)->SourceLineNumber(336);
    uPtr(mitateit_sosiaalinentaito)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp165->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp165->SourceLineNumber(339);
    temp165->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp165->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp166);
    temp166->ColumnCount(1);
    temp166->SourceLineNumber(340);
    temp166->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp166->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_jotainmuuta);
    uPtr(mitateit_jotainmuuta)->PlaceholderText(::STRINGS[113/*"Jotain muuta"*/]);
    uPtr(mitateit_jotainmuuta)->PlaceholderColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.6980392f));
    uPtr(mitateit_jotainmuuta)->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    uPtr(mitateit_jotainmuuta)->Name(FirstPage::__selector44_);
    uPtr(mitateit_jotainmuuta)->SourceLineNumber(341);
    uPtr(mitateit_jotainmuuta)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp167->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    temp167->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp167->SourceLineNumber(349);
    temp167->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp167->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp168);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp167->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp170);
    temp168->SourceLineNumber(350);
    temp168->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp168->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp169);
    temp169->Value(::STRINGS[114/*"Kuinka viha...*/]);
    temp169->SourceLineNumber(351);
    temp169->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp170->SourceLineNumber(354);
    temp170->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp170->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp171);
    temp171->ColumnCount(1);
    temp171->SourceLineNumber(355);
    temp171->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp171->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp172);
    temp172->SourceLineNumber(356);
    temp172->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp173);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp176);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp179);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp182);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp185);
    temp173->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp173->SourceLineNumber(357);
    temp173->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp173->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp174);
    temp174->ColumnCount(4);
    temp174->SourceLineNumber(358);
    temp174->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp174->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), viha_kihisinraivosta);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp174->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp175);
    uPtr(viha_kihisinraivosta)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(viha_kihisinraivosta)->Name(FirstPage::__selector45_);
    uPtr(viha_kihisinraivosta)->SourceLineNumber(359);
    uPtr(viha_kihisinraivosta)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp175->Value(::STRINGS[115/*"Kihisin rai...*/]);
    temp175->TextWrapping(1);
    temp175->Alignment(9);
    temp175->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp175->SourceLineNumber(360);
    temp175->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp175, 3);
    temp176->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp176->SourceLineNumber(363);
    temp176->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp176->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp177);
    temp177->ColumnCount(4);
    temp177->SourceLineNumber(364);
    temp177->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp177->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), viha_todellavihainen);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp177->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp178);
    uPtr(viha_todellavihainen)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(viha_todellavihainen)->Name(FirstPage::__selector46_);
    uPtr(viha_todellavihainen)->SourceLineNumber(365);
    uPtr(viha_todellavihainen)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp178->Value(::STRINGS[116/*"Todella vih...*/]);
    temp178->TextWrapping(1);
    temp178->Alignment(9);
    temp178->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp178->SourceLineNumber(366);
    temp178->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp178, 3);
    temp179->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp179->SourceLineNumber(369);
    temp179->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp179->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp180);
    temp180->ColumnCount(4);
    temp180->SourceLineNumber(370);
    temp180->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp180->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), viha_melkovihainen);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp180->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp181);
    uPtr(viha_melkovihainen)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(viha_melkovihainen)->Name(FirstPage::__selector47_);
    uPtr(viha_melkovihainen)->SourceLineNumber(371);
    uPtr(viha_melkovihainen)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp181->Value(::STRINGS[117/*"Melko vihai...*/]);
    temp181->TextWrapping(1);
    temp181->Alignment(9);
    temp181->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp181->SourceLineNumber(372);
    temp181->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp181, 3);
    temp182->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp182->SourceLineNumber(375);
    temp182->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp182->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp183);
    temp183->ColumnCount(4);
    temp183->SourceLineNumber(376);
    temp183->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp183->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), viha_lievaviha);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp183->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp184);
    uPtr(viha_lievaviha)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(viha_lievaviha)->Name(FirstPage::__selector48_);
    uPtr(viha_lievaviha)->SourceLineNumber(377);
    uPtr(viha_lievaviha)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp184->Value(::STRINGS[118/*"Lievästi vi...*/]);
    temp184->TextWrapping(1);
    temp184->Alignment(9);
    temp184->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp184->SourceLineNumber(378);
    temp184->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp184, 3);
    temp185->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp185->SourceLineNumber(381);
    temp185->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp185->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp186);
    temp186->ColumnCount(4);
    temp186->SourceLineNumber(382);
    temp186->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp186->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), viha_enlainkaan);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp186->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp187);
    uPtr(viha_enlainkaan)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(viha_enlainkaan)->Name(FirstPage::__selector49_);
    uPtr(viha_enlainkaan)->SourceLineNumber(383);
    uPtr(viha_enlainkaan)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp187->Value(::STRINGS[119/*"En lainkaan...*/]);
    temp187->TextWrapping(1);
    temp187->Alignment(9);
    temp187->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp187->SourceLineNumber(384);
    temp187->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp187, 3);
    temp188->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    temp188->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp188->SourceLineNumber(396);
    temp188->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp188->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp189);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp188->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp191);
    temp189->SourceLineNumber(397);
    temp189->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp189->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp190);
    temp190->Value(::STRINGS[120/*"Kuinka hyvi...*/]);
    temp190->SourceLineNumber(398);
    temp190->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp191->SourceLineNumber(401);
    temp191->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp191->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp192);
    temp192->ColumnCount(1);
    temp192->SourceLineNumber(402);
    temp192->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp192->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp193);
    temp193->SourceLineNumber(403);
    temp193->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp193->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp194);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp193->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp197);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp193->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp200);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp193->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp203);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp193->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp206);
    temp194->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp194->SourceLineNumber(404);
    temp194->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp194->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp195);
    temp195->ColumnCount(4);
    temp195->SourceLineNumber(405);
    temp195->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp195->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), hallinta_1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp195->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp196);
    uPtr(hallinta_1)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(hallinta_1)->Name(FirstPage::__selector50_);
    uPtr(hallinta_1)->SourceLineNumber(406);
    uPtr(hallinta_1)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp196->Value(::STRINGS[121/*"Huonosti"*/]);
    temp196->TextWrapping(1);
    temp196->Alignment(9);
    temp196->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp196->SourceLineNumber(407);
    temp196->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp196, 3);
    temp197->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp197->SourceLineNumber(410);
    temp197->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp197->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp198);
    temp198->ColumnCount(4);
    temp198->SourceLineNumber(411);
    temp198->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp198->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), hallinta_2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp198->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp199);
    uPtr(hallinta_2)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(hallinta_2)->Name(FirstPage::__selector51_);
    uPtr(hallinta_2)->SourceLineNumber(412);
    uPtr(hallinta_2)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp199->Value(::STRINGS[122/*"En kovin hy...*/]);
    temp199->TextWrapping(1);
    temp199->Alignment(9);
    temp199->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp199->SourceLineNumber(413);
    temp199->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp199, 3);
    temp200->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp200->SourceLineNumber(416);
    temp200->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp200->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp201);
    temp201->ColumnCount(4);
    temp201->SourceLineNumber(417);
    temp201->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp201->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), hallinta_3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp201->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp202);
    uPtr(hallinta_3)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(hallinta_3)->Name(FirstPage::__selector52_);
    uPtr(hallinta_3)->SourceLineNumber(418);
    uPtr(hallinta_3)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp202->Value(::STRINGS[123/*"Melko hyvin"*/]);
    temp202->TextWrapping(1);
    temp202->Alignment(9);
    temp202->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp202->SourceLineNumber(419);
    temp202->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp202, 3);
    temp203->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp203->SourceLineNumber(422);
    temp203->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp203->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp204);
    temp204->ColumnCount(4);
    temp204->SourceLineNumber(423);
    temp204->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp204->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), hallinta_4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp204->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp205);
    uPtr(hallinta_4)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(hallinta_4)->Name(FirstPage::__selector53_);
    uPtr(hallinta_4)->SourceLineNumber(424);
    uPtr(hallinta_4)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp205->Value(::STRINGS[124/*"Hyvin"*/]);
    temp205->TextWrapping(1);
    temp205->Alignment(9);
    temp205->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp205->SourceLineNumber(425);
    temp205->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp205, 3);
    temp206->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp206->SourceLineNumber(428);
    temp206->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp206->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp207);
    temp207->ColumnCount(4);
    temp207->SourceLineNumber(429);
    temp207->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp207->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), hallinta_5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp207->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp208);
    uPtr(hallinta_5)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(hallinta_5)->Name(FirstPage::__selector54_);
    uPtr(hallinta_5)->SourceLineNumber(430);
    uPtr(hallinta_5)->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    temp208->Value(::STRINGS[125/*"Todella hie...*/]);
    temp208->TextWrapping(1);
    temp208->Alignment(9);
    temp208->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp208->SourceLineNumber(431);
    temp208->SourceFileName(::STRINGS[65/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp208, 3);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), SavedDock);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mita_kiusaus);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mita_varkaus);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mita_inho);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mita_teinvaarin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mita_riitely);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mita_muuta_panel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mita_muuta);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), milloin_aamu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), milloin_iltapaiva);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), milloin_ilta);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), missa_koulu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), missa_asuntola);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), missa_liikuntasali);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), missa_oleskelutila);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), missa_wc);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), missa_kanslia);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), missa_ruokala);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), missa_ulkona);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), missa_kadulla);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), missa_kaytavalla);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), missa_toissa);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), missa_muualla);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), kuka_toinen);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), kuka_vanhempihoitaja);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), kuka_opettaja);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), kuka_koulukuraattori);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), kuka_jokumuu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mitateit_loin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mitateit_juoksin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mitateit_huusin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mitateit_itkin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mitateit_kavelinpois);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mitateit_rikoinjotain);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mitateit_kerroinaiku);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mitateit_kerroinkave);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mitateit_envalittanut);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mitateit_hoidinasianpuhumalla);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mitateit_vihanhallinanmenetelma);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mitateit_sosiaalinentaito);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), mitateit_jotainmuuta);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), viha_kihisinraivosta);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), viha_todellavihainen);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), viha_melkovihainen);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), viha_lievaviha);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), viha_enlainkaan);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), hallinta_1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), hallinta_2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), hallinta_3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), hallinta_4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), hallinta_5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::TYPES[6/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp9);
}

// public FirstPage New(Fuse.Navigation.Router router) [static] :122
FirstPage* FirstPage::New5(::g::Fuse::Navigation::Router* router1)
{
    FirstPage* obj1 = (FirstPage*)uNew(FirstPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
