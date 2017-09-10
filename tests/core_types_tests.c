#include <string.h>
#include <talloc.h>
#include <tap.h>
#include "./../src/core/types.h"



void CRUX__iu08_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const iu08 min = IU08_MIN;
  const iu08 max = IU08_MAX;
  const iu08 one = 1;
  const char *const min_str = "0";
  const char *const max_str = "255";
  const char *const one_str = "1";
  const char *const min_formated = talloc_asprintf(ctx, "%"IU08_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"IU08_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"IU08_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}

void CRUX__iu16_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const iu16 min = IU16_MIN;
  const iu16 max = IU16_MAX;
  const iu16 one = 1;
  const char *const min_str = "0";
  const char *const max_str = "65535";
  const char *const one_str = "1";
  const char *const min_formated = talloc_asprintf(ctx, "%"IU16_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"IU16_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"IU16_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}

void CRUX__iu32_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const iu32 min = IU32_MIN;
  const iu32 max = IU32_MAX;
  const iu32 one = 1;
  const char *const min_str = "0";
  const char *const max_str = "4294967295";
  const char *const one_str = "1";
  const char *const min_formated = talloc_asprintf(ctx, "%"IU32_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"IU32_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"IU32_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}

void CRUX__iu64_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const iu64 min = IU64_MIN;
  const iu64 max = IU64_MAX;
  const iu64 one = 1;
  const char *const min_str = "0";
  const char *const max_str = "18446744073709551615";
  const char *const one_str = "1";
  const char *const min_formated = talloc_asprintf(ctx, "%"IU64_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"IU64_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"IU64_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}

void CRUX__is08_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const is08 min = IS08_MIN;
  const is08 max = IS08_MAX;
  const is08 one = 1;
  const char *const min_str = "-128";
  const char *const max_str = "127";
  const char *const one_str = "1";
  const char *const min_formated = talloc_asprintf(ctx, "%"IS08_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"IS08_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"IS08_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}

void CRUX__is16_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const is16 min = IS16_MIN;
  const is16 max = IS16_MAX;
  const is16 one = 1;
  const char *const min_str = "-32768";
  const char *const max_str = "32767";
  const char *const one_str = "1";
  const char *const min_formated = talloc_asprintf(ctx, "%"IS16_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"IS16_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"IS16_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}

void CRUX__is32_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const is32 min = IS32_MIN;
  const is32 max = IS32_MAX;
  const is32 one = 1;
  const char *const min_str = "-2147483648";
  const char *const max_str = "2147483647";
  const char *const one_str = "1";
  const char *const min_formated = talloc_asprintf(ctx, "%"IS32_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"IS32_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"IS32_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}

void CRUX__is64_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const is64 min = IS64_MIN;
  const is64 max = IS64_MAX;
  const is64 one = 1;
  const char *const min_str = "-9223372036854775808";
  const char *const max_str = "9223372036854775807";
  const char *const one_str = "1";
  const char *const min_formated = talloc_asprintf(ctx, "%"IS64_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"IS64_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"IS64_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}

void CRUX__flp1_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const flp1 min = FLP1_MIN_POSITIVE;
  const flp1 max = FLP1_MAX_POSITIVE;
  const flp1 one = 1;
  const char *const min_str = "0.000000";
  const char *const max_str = "340282346638528859811704183484516925440.000000";
  const char *const one_str = "1.000000";
  const char *const min_formated = talloc_asprintf(ctx, "%"FLP1_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"FLP1_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"FLP1_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}

void CRUX__flp2_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const flp2 min = FLP2_MIN_POSITIVE;
  const flp2 max = FLP2_MAX_POSITIVE;
  const flp2 one = 1;
  const char *const min_str = "0.000000";
  const char *const max_str = "179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000";
  const char *const one_str = "1.000000";
  const char *const min_formated = talloc_asprintf(ctx, "%"FLP2_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"FLP2_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"FLP2_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}

void CRUX__flp4_format_tests () {
  // 3
  void *const ctx = talloc_new(NULL);
  const flp4 min = FLP4_MIN_POSITIVE;
  const flp4 max = FLP4_MAX_POSITIVE;
  const flp4 one = 1;
  const char *const min_str = "0.000000";
  const char *const max_str = "1189731495357231765021263853030970205169063322294624200440323733891737005522970722616410290336528882853545697807495577314427443153670288434198125573853743678673593200706973263201915918282961524365529510646791086614311790632169778838896134786560600399148753433211454911160088679845154866512852340149773037600009125479393966223151383622417838542743917838138717805889487540575168226347659235576974805113725649020884855222494791399377585026011773549180099796226026859508558883608159846900235645132346594476384939859276456284579661772930407806609229102715046085388087959327781622986827547830768080040150694942303411728957777100335714010559775242124057347007386251660110828379119623008469277200965153500208474470792443848545912886723000619085126472111951361467527633519562927597957250278002980795904193139603021470997035276467445530922022679656280991498232083329641241038509239184734786121921697210543484287048353408113042573002216421348917347174234800714880751002064390517234247656004721768096486107994943415703476320643558624207443504424380566136017608837478165389027809576975977286860071487028287955567141404632615832623602762896316173978484254486860609948270867968048078702511858930838546584223040908805996294594586201903766048446790926002225410530775901065760671347200125846406957030257138960983757998926954553052368560758683179223113639519468850880771872104705203957587480013143131444254943919940175753169339392366881856189129931729104252921236835159922322050998001677102784035360140829296398115122877768135706045789343535451696539561254048846447169786893211671087229088082778350518228857646062218739702851655083720992349483334435228984751232753726636066213902281264706234075352071724058665079518217303463782631353393706774901950197841690441824738063162828586857741432581165364040218402724913393320949219498422442730427019873044536620350262386957804682003601447291997123095530057206141866974852846856186514832715974481203121946751686379343096189615107330065552421485195201762858595091051839472502863871632494167613804996319791441870254302706758495192008837915169401581740046711477877201459644461175204059453504764721807975761111720846273639279600339670470037613374509553184150073796412605047923251661354841291884211340823015473304754067072818763503617332908005951896325207071673904547777129682265206225651439919376804400292380903112437912614776255964694221981375146967079446870358004392507659451618379811859392049544036114915310782251072691486979809240946772142727012404377187409216756613634938900451232351668146089322400697993176017805338191849981933008410985993938760292601390911414526003720284872132411955424282101831204216104467404621635336900583664606591156298764745525068145003932941404131495400677602951005962253022823003631473824681059648442441324864573137437595096416168048024129351876204668135636877532814675538798871771836512893947195335061885003267607354388673368002074387849657014576090349857571243045102038730494854256702479339322809110526041538528994849203991091946129912491633289917998094380337879522093131466946149705939664152375949285890960489916121944989986384837022486672249148924678410206183364627416969576307632480235587975245253737035433882960862753427740016333434055083537048507374544819754722228975281083020898682633020285259923084168054539687911418297629988964576482765287504562854924265165217750799516259669229114977788962356670956627138482018191348321687995863652637620978285070099337294396784639879024914514222742527006363942327998483976739987154418554201562244154926653014515504685489258620276085761837129763358761215382565129633538141663949516556000264159186554850057052611431952919918807954522394649627635630178580896692226406235382898535867595990647008385687123810329591926494846250768992258419305480763620215089022149220528069842018350840586938493815498909445461977893029113576516775406232278298314033473276603952231603422824717528181818844304880921321933550869873395861276073670866652375555675803171490108477320096424318780070008797346032906278943553743564448851907191616455141155761939399690767415156402826543664026760095087523945507341556135867933066031744720924446513532366647649735400851967040771103640538150073486891798364049570606189535005089840913826869535090066783324472578712196604415284924840041850932811908963634175739897166596000759487800619164094854338758520657116541072260996288150123144377944008749301944744330784388995701842710004808305012177123560622895076269042856800047718893158089358515593863176652948089031267747029662545110861548958395087796755464137944895960527975209874813839762578592105756284401759349324162148339565350189196811389091843795734703269406342890087805846940352453479398080674273236297887100867175802531561302356064878709259865288416350972529537091114317204887747405539054009425375424119317944175137064689643861517718849867010341532542385911089624710885385808688837777258648564145934262121086647588489260031762345960769508849149662444156604419552086811989770240.000000";
  const char *const one_str = "1.000000";
  const char *const min_formated = talloc_asprintf(ctx, "%"FLP4_FMT, min);
  const char *const max_formated = talloc_asprintf(ctx, "%"FLP4_FMT, max);
  const char *const one_formated = talloc_asprintf(ctx, "%"FLP4_FMT, one);
  ok(strcmp(min_str, min_formated) == 0, "Must be equals.");
  ok(strcmp(max_str, max_formated) == 0, "Must be equals.");
  ok(strcmp(one_str, one_formated) == 0, "Must be equals.");
  talloc_free(ctx);
}

void CRUX__as_tests () {
  // 14
  const iu08 unsigned_integer_08 = AS_IU08(8);
  const iu16 unsigned_integer_16 = AS_IU16(16);
  const iu32 unsigned_integer_32 = AS_IU32(32);
  const iu64 unsigned_integer_64 = AS_IU64(64);
  const is08 signed_integer_08 = AS_IS08(-8);
  const is16 signed_integer_16 = AS_IS16(-16);
  const is32 signed_integer_32 = AS_IS32(-32);
  const is64 signed_integer_64 = AS_IS64(-64);
  const flp1 int_floating_point_1 = INT_AS_FLP1(1);
  const flp2 int_floating_point_2 = INT_AS_FLP2(-2);
  const flp4 int_floating_point_4 = INT_AS_FLP4(4);
  const flp1 floating_point_1 = AS_FLP1(1.5);
  const flp2 floating_point_2 = AS_FLP2(-2.5);
  const flp4 floating_point_4 = AS_FLP4(4.5);
  ok((unsigned_integer_08 == 8u), "Must be equals.");
  ok((unsigned_integer_16 == 16u), "Must be equals.");
  ok((unsigned_integer_32 == 32u), "Must be equals.");
  ok((unsigned_integer_64 == 64ul), "Must be equals.");
  ok((signed_integer_08 == -8), "Must be equals.");
  ok((signed_integer_16 == -16), "Must be equals.");
  ok((signed_integer_32 == -32), "Must be equals.");
  ok((signed_integer_64 == -64l), "Must be equals.");
  ok((int_floating_point_1 == 1.0f), "Must be equals.");
  ok((int_floating_point_2 == -2.0), "Must be equals.");
  ok((int_floating_point_4 == 4.0l), "Must be equals.");
  ok((floating_point_1 == 1.5f), "Must be equals.");
  ok((floating_point_2 == -2.5), "Must be equals.");
  ok((floating_point_4 == 4.5l), "Must be equals.");
}

void CRUX__int_precision_tests () {
  // 11
  const iu08 unsigned_integer_08 = IU08_MAX;
  const iu16 unsigned_integer_16 = IU16_MAX;
  const iu32 unsigned_integer_32 = IU32_MAX;
  const iu64 unsigned_integer_64 = IU64_MAX;
  const is08 signed_integer_08 = IS08_MIN;
  const is16 signed_integer_16 = IS16_MIN;
  const is32 signed_integer_32 = IS32_MIN;
  const is64 signed_integer_64 = IS64_MIN;
  const flp1 floating_point_1 = FLP1_MAX_POSITIVE;
  const flp2 floating_point_2 = FLP2_MAX_NEGATIVE;
  const flp4 floating_point_4 = FLP4_MAX_POSITIVE;
  ok((INT_PRECISION(unsigned_integer_08) == 8), "Must has precision equals to %d.", 8);
  ok((INT_PRECISION(unsigned_integer_16) == 16), "Must has precision equals to %d.", 6);
  ok((INT_PRECISION(unsigned_integer_32) == 32), "Must has precision equals to %d.", 2);
  ok((INT_PRECISION(unsigned_integer_64) == 64), "Must has precision equals to %d.", 4);
  ok((INT_PRECISION(signed_integer_08) == 7), "Must has precision equals to %d.", 7);
  ok((INT_PRECISION(signed_integer_16) == 15), "Must has precision equals to %d.", 15);
  ok((INT_PRECISION(signed_integer_32) == 31), "Must has precision equals to %d.", 31);
  ok((INT_PRECISION(signed_integer_64) == 63), "Must has precision equals to %d.", 63);
  ok((INT_PRECISION(floating_point_1) == FLP1_MANTISSA_BITS), "Must has precision equals to %d.", FLP1_MANTISSA_BITS);
  ok((INT_PRECISION(floating_point_2) == FLP2_MANTISSA_BITS), "Must has precision equals to %d.", FLP2_MANTISSA_BITS);
  ok((INT_PRECISION(floating_point_4) == FLP4_MANTISSA_BITS), "Must has precision equals to %d.", FLP4_MANTISSA_BITS);
}

void CRUX__trunc_tests () {
  // 9
  const flp1 zero_1 = 0.0f;
  const flp1 pos_1 = 1.5f;
  const flp1 neg_1 = -1.5f;
  ok((FLP_TRUNC(zero_1) == 0.0f), "Must be equals to 0.0.");
  ok((FLP_TRUNC(pos_1) == 1.0f), "Must be equals to 1.0.");
  ok((FLP_TRUNC(neg_1) == -1.0f), "Must be equals to -1.0.");
  const flp2 zero_2 = 0.0;
  const flp2 pos_2 = 1.5;
  const flp2 neg_2 = -1.5;
  ok((FLP_TRUNC(zero_2) == 0.0), "Must be equals to 0.0.");
  ok((FLP_TRUNC(pos_2) == 1.0), "Must be equals to 1.0.");
  ok((FLP_TRUNC(neg_2) == -1.0), "Must be equals to -1.0.");
  const flp4 zero_4 = 0.0l;
  const flp4 pos_4 = 1.5l;
  const flp4 neg_4 = -1.5l;
  ok((FLP_TRUNC(zero_4) == 0.0l), "Must be equals to 0.0.");
  ok((FLP_TRUNC(pos_4) == 1.0l), "Must be equals to 1.0.");
  ok((FLP_TRUNC(neg_4) == -1.0l), "Must be equals to -1.0.");
}

int main () {
  plan(67);
  CRUX__iu08_format_tests();
  CRUX__iu16_format_tests();
  CRUX__iu32_format_tests();
  CRUX__iu64_format_tests();
  CRUX__is08_format_tests();
  CRUX__is16_format_tests();
  CRUX__is32_format_tests();
  CRUX__is64_format_tests();
  CRUX__flp1_format_tests();
  CRUX__flp2_format_tests();
  CRUX__flp4_format_tests();
  CRUX__as_tests();
  CRUX__int_precision_tests();
  CRUX__trunc_tests();
  done_testing();
  return EXIT_SUCCESS;
}
