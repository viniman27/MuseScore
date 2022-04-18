/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-CLA-applies
 *
 * MuseScore
 * Music Composition & Notation
 *
 * Copyright (C) 2021 MuseScore BVBA and others
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef MU_ENGRAVING_STYLEDEF_H
#define MU_ENGRAVING_STYLEDEF_H

#include <array>
#include <vector>

#include "property/propertyvalue.h"
#include "libmscore/property.h"
#include "config.h"

namespace Ms {
// Needs to be duplicated here and in symid.h since moc doesn't handle macros from #include'd files
#ifdef SCRIPT_INTERFACE
#define BEGIN_QT_REGISTERED_ENUM(Name) \
    class MSQE_##Name { \
        Q_GADGET \
    public:
#define END_QT_REGISTERED_ENUM(Name) \
    Q_ENUM(Name); \
}; \
    using Name = MSQE_##Name::Name;
#else
#define BEGIN_QT_REGISTERED_ENUM(Name)
#define END_QT_REGISTERED_ENUM(Name)
#endif

//---------------------------------------------------------
//   Sid
///   Enumerates the list of score style settings
//
//    Keep in sync with styleTypes[] in styledef.cpp
//---------------------------------------------------------

BEGIN_QT_REGISTERED_ENUM(Sid)
enum class Sid {
    ///.\{
    NOSTYLE = -1,

    pageWidth,
    pageHeight,
    pagePrintableWidth,
    pageEvenLeftMargin,
    pageOddLeftMargin,
    pageEvenTopMargin,
    pageEvenBottomMargin,
    pageOddTopMargin,
    pageOddBottomMargin,
    pageTwosided,

    staffUpperBorder,
    staffLowerBorder,
    staffHeaderFooterPadding,
    staffDistance,
    instrumentNameOffset,
    akkoladeDistance,
    minSystemDistance,
    maxSystemDistance,
    alignSystemToMargin,

    enableVerticalSpread,
    spreadSystem,
    spreadSquareBracket,
    spreadCurlyBracket,
    minSystemSpread,
    maxSystemSpread,
    minStaffSpread,
    maxStaffSpread,
    maxAkkoladeDistance,
    maxPageFillSpread,

    lyricsPlacement,
    lyricsPosAbove,
    lyricsPosBelow,
    lyricsMinTopDistance,
    lyricsMinBottomDistance,
    lyricsMinDistance,
    lyricsLineHeight,
    lyricsDashMinLength,
    lyricsDashMaxLength,
    lyricsDashMaxDistance,
    lyricsDashForce,
    lyricsAlignVerseNumber,
    lyricsLineThickness,
    lyricsMelismaAlign,
    lyricsMelismaPad,
    lyricsDashPad,
    lyricsDashLineThickness,
    lyricsDashYposRatio,

    lyricsOddFontFace,
    lyricsOddFontSize,
    lyricsOddLineSpacing,
    lyricsOddFontSpatiumDependent,
    lyricsOddFontStyle,
    lyricsOddColor,
    lyricsOddAlign,
    lyricsOddFrameType,
    lyricsOddFramePadding,
    lyricsOddFrameWidth,
    lyricsOddFrameRound,
    lyricsOddFrameFgColor,
    lyricsOddFrameBgColor,

    lyricsEvenFontFace,
    lyricsEvenFontSize,
    lyricsEvenLineSpacing,
    lyricsEvenFontSpatiumDependent,
    lyricsEvenFontStyle,
    lyricsEvenColor,
    lyricsEvenAlign,
    lyricsEvenFrameType,
    lyricsEvenFramePadding,
    lyricsEvenFrameWidth,
    lyricsEvenFrameRound,
    lyricsEvenFrameFgColor,
    lyricsEvenFrameBgColor,

    figuredBassFontFamily,
    //      figuredBassFontSize,
    figuredBassYOffset,
    figuredBassLineHeight,
    figuredBassAlignment,
    figuredBassStyle,
    systemFrameDistance,
    frameSystemDistance,
    minMeasureWidth,

    barWidth,
    doubleBarWidth,
    endBarWidth,
    doubleBarDistance,
    endBarDistance,
    repeatBarlineDotSeparation,
    repeatBarTips,
    startBarlineSingle,
    startBarlineMultiple,

    bracketWidth,
    bracketDistance,
    akkoladeWidth,
    akkoladeBarDistance,
    dividerLeft,
    dividerLeftSym,
    dividerLeftX,
    dividerLeftY,
    dividerRight,
    dividerRightSym,
    dividerRightX,
    dividerRightY,

    clefLeftMargin,
    keysigLeftMargin,
    ambitusMargin,
    timesigLeftMargin,
    timesigScale,

    midClefKeyRightMargin,
    clefKeyRightMargin,
    clefKeyDistance,
    clefTimesigDistance,
    keyTimesigDistance,
    keyBarlineDistance,
    systemHeaderDistance,
    systemHeaderTimeSigDistance,
    systemTrailerRightMargin,

    clefBarlineDistance,
    timesigBarlineDistance,

    useStraightNoteFlags,
    stemWidth,
    shortenStem,
    stemLength,
    stemLengthSmall,
    shortStemProgression,
    shortStemStartLocation,
    shortestStem,
    minStaffSizeForAutoStems,
    smallStaffStemDirection,
    preferStemDirectionMatchContext,
    beginRepeatLeftMargin,
    minNoteDistance,
    barNoteDistance,
    barAccidentalDistance,
    noteBarDistance,

    measureSpacing,
    measureRepeatNumberPos,
    mrNumberSeries,
    mrNumberEveryXMeasures,
    mrNumberSeriesWithParentheses,
    oneMeasureRepeatShow1,
    fourMeasureRepeatShowExtenders,
    staffLineWidth,
    ledgerLineWidth,
    ledgerLineLength,
    accidentalDistance,
    accidentalNoteDistance,
    bracketedAccidentalPadding,
    alignAccidentalsLeft,
    keysigAccidentalDistance,
    keysigNaturalDistance,
    beamWidth,
    useWideBeams,
    beamMinLen,
    beamNoSlope,

    dotMag,
    dotNoteDistance,
    dotRestDistance,
    dotDotDistance,
    propertyDistanceHead,
    propertyDistanceStem,
    propertyDistance,
    articulationMag,
    articulationPosAbove,
    articulationAnchorDefault,
    articulationAnchorLuteFingering,
    articulationAnchorOther,
    lastSystemFillLimit,

    hairpinPlacement,
    hairpinPosAbove,
    hairpinPosBelow,
    hairpinLinePosAbove,
    hairpinLinePosBelow,
    hairpinHeight,
    hairpinContHeight,
    hairpinLineWidth,
    hairpinFontFace,
    hairpinFontSize,
    hairpinLineSpacing,
    hairpinFontSpatiumDependent,
    hairpinFontStyle,
    hairpinColor,
    hairpinTextAlign,
    hairpinFrameType,
    hairpinFramePadding,
    hairpinFrameWidth,
    hairpinFrameRound,
    hairpinFrameFgColor,
    hairpinFrameBgColor,
    hairpinText,
    hairpinCrescText,
    hairpinDecrescText,
    hairpinCrescContText,
    hairpinDecrescContText,
    hairpinLineStyle,
    hairpinLineLineStyle,

    pedalPlacement,
    pedalPosAbove,
    pedalPosBelow,
    pedalLineWidth,
    pedalLineStyle,
    pedalBeginTextOffset,
    pedalHookHeight,
    pedalFontFace,
    pedalFontSize,
    pedalLineSpacing,
    pedalFontSpatiumDependent,
    pedalFontStyle,
    pedalColor,
    pedalTextAlign,
    pedalFrameType,
    pedalFramePadding,
    pedalFrameWidth,
    pedalFrameRound,
    pedalFrameFgColor,
    pedalFrameBgColor,

    trillPlacement,
    trillPosAbove,
    trillPosBelow,

    vibratoPlacement,
    vibratoPosAbove,
    vibratoPosBelow,

    harmonyFretDist,
    minHarmonyDistance,
    maxHarmonyBarDistance,
    maxChordShiftAbove,
    maxChordShiftBelow,

    harmonyPlacement,
    romanNumeralPlacement,
    nashvilleNumberPlacement,
    harmonyPlay,
    harmonyVoiceLiteral,
    harmonyVoicing,
    harmonyDuration,

    chordSymbolAPosAbove,
    chordSymbolAPosBelow,

    chordSymbolBPosAbove,
    chordSymbolBPosBelow,

    romanNumeralPosAbove,
    romanNumeralPosBelow,

    nashvilleNumberPosAbove,
    nashvilleNumberPosBelow,

    chordSymbolAFontFace,
    chordSymbolAFontSize,
    chordSymbolALineSpacing,
    chordSymbolAFontSpatiumDependent,
    chordSymbolAFontStyle,
    chordSymbolAColor,
    chordSymbolAAlign,
    chordSymbolAFrameType,
    chordSymbolAFramePadding,
    chordSymbolAFrameWidth,
    chordSymbolAFrameRound,
    chordSymbolAFrameFgColor,
    chordSymbolAFrameBgColor,

    chordSymbolBFontFace,
    chordSymbolBFontSize,
    chordSymbolBLineSpacing,
    chordSymbolBFontSpatiumDependent,
    chordSymbolBFontStyle,
    chordSymbolBColor,
    chordSymbolBAlign,
    chordSymbolBFrameType,
    chordSymbolBFramePadding,
    chordSymbolBFrameWidth,
    chordSymbolBFrameRound,
    chordSymbolBFrameFgColor,
    chordSymbolBFrameBgColor,

    romanNumeralFontFace,
    romanNumeralFontSize,
    romanNumeralLineSpacing,
    romanNumeralFontSpatiumDependent,
    romanNumeralFontStyle,
    romanNumeralColor,
    romanNumeralAlign,
    romanNumeralFrameType,
    romanNumeralFramePadding,
    romanNumeralFrameWidth,
    romanNumeralFrameRound,
    romanNumeralFrameFgColor,
    romanNumeralFrameBgColor,

    nashvilleNumberFontFace,
    nashvilleNumberFontSize,
    nashvilleNumberLineSpacing,
    nashvilleNumberFontSpatiumDependent,
    nashvilleNumberFontStyle,
    nashvilleNumberColor,
    nashvilleNumberAlign,
    nashvilleNumberFrameType,
    nashvilleNumberFramePadding,
    nashvilleNumberFrameWidth,
    nashvilleNumberFrameRound,
    nashvilleNumberFrameFgColor,
    nashvilleNumberFrameBgColor,

    capoPosition,
    fretNumMag,
    fretNumPos,
    fretY,
    fretMinDistance,
    fretMag,
    fretPlacement,
    fretStrings,
    fretFrets,
    fretNut,
    fretDotSize,
    fretStringSpacing,
    fretFretSpacing,
    fretOrientation,
    maxFretShiftAbove,
    maxFretShiftBelow,

    showPageNumber,
    showPageNumberOne,
    pageNumberOddEven,
    showMeasureNumber,
    showMeasureNumberOne,
    measureNumberInterval,
    measureNumberSystem,
    measureNumberAllStaves,

    smallNoteMag,
    graceNoteMag,
    smallStaffMag,
    smallClefMag,
    genClef,
    genKeysig,
    genCourtesyTimesig,
    genCourtesyKeysig,
    genCourtesyClef,

    swingRatio,
    swingUnit,

    useStandardNoteNames,
    useGermanNoteNames,
    useFullGermanNoteNames,
    useSolfeggioNoteNames,
    useFrenchNoteNames,
    automaticCapitalization,
    lowerCaseMinorChords,
    lowerCaseBassNotes,
    allCapsNoteNames,
    chordStyle,
    chordsXmlFile,
    chordDescriptionFile,
    chordExtensionMag,
    chordExtensionAdjust,
    chordModifierMag,
    chordModifierAdjust,
    concertPitch,
    createMultiMeasureRests,
    minEmptyMeasures,
    minMMRestWidth,
    mmRestNumberPos,
    mmRestNumberMaskHBar,
    multiMeasureRestMargin,
    mmRestHBarThickness,
    mmRestHBarVStrokeThickness,
    mmRestHBarVStrokeHeight,
    oldStyleMultiMeasureRests,
    mmRestOldStyleMaxMeasures,
    mmRestOldStyleSpacing,
    hideEmptyStaves,
    dontHideStavesInFirstSystem,
    enableIndentationOnFirstSystem,
    firstSystemIndentationValue,
    alwaysShowBracketsWhenEmptyStavesAreHidden,
    hideInstrumentNameIfOneInstrument,
    gateTime,
    tenutoGateTime,
    staccatoGateTime,
    slurGateTime,

    ArpeggioNoteDistance,
    ArpeggioAccidentalDistance,
    ArpeggioAccidentalDistanceMin,
    ArpeggioLineWidth,
    ArpeggioHookLen,
    ArpeggioHiddenInStdIfTab,

    SlurEndWidth,
    SlurMidWidth,
    SlurDottedWidth,
    MinTieLength,
    SlurMinDistance,

    SectionPause,
    MusicalSymbolFont,
    MusicalTextFont,

    showHeader,
    headerFirstPage,
    headerOddEven,
    evenHeaderL,
    evenHeaderC,
    evenHeaderR,
    oddHeaderL,
    oddHeaderC,
    oddHeaderR,

    showFooter,
    footerFirstPage,
    footerOddEven,
    evenFooterL,
    evenFooterC,
    evenFooterR,
    oddFooterL,
    oddFooterC,
    oddFooterR,

    voltaPosAbove,
    voltaHook,
    voltaLineWidth,
    voltaLineStyle,
    voltaFontFace,
    voltaFontSize,
    voltaLineSpacing,
    voltaFontSpatiumDependent,
    voltaFontStyle,
    voltaColor,
    voltaAlign,
    voltaOffset,
    voltaFrameType,
    voltaFramePadding,
    voltaFrameWidth,
    voltaFrameRound,
    voltaFrameFgColor,
    voltaFrameBgColor,

    ottava8VAPlacement,
    ottava8VBPlacement,
    ottava15MAPlacement,
    ottava15MBPlacement,
    ottava22MAPlacement,
    ottava22MBPlacement,

    ottava8VAText,
    ottava8VAContinueText,
    ottava8VBText,
    ottava8VBContinueText,
    ottava15MAText,
    ottava15MAContinueText,
    ottava15MBText,
    ottava15MBContinueText,
    ottava22MAText,
    ottava22MAContinueText,
    ottava22MBText,
    ottava22MBContinueText,

    ottava8VAnoText,
    ottava8VAnoContinueText,
    ottava8VBnoText,
    ottava8VBnoContinueText,
    ottava15MAnoText,
    ottava15MAnoContinueText,
    ottava15MBnoText,
    ottava15MBnoContinueText,
    ottava22MAnoText,
    ottava22MAnoContinueText,
    ottava22MBnoText,
    ottava22MBnoContinueText,

    ottavaPosAbove,
    ottavaPosBelow,
    ottavaHookAbove,
    ottavaHookBelow,
    ottavaLineWidth,
    ottavaLineStyle,
    ottavaNumbersOnly,
    ottavaFontFace,
    ottavaFontSize,
    ottavaLineSpacing,
    ottavaFontSpatiumDependent,
    ottavaFontStyle,
    ottavaColor,
    ottavaTextAlign,
    ottavaFrameType,
    ottavaFramePadding,
    ottavaFrameWidth,
    ottavaFrameRound,
    ottavaFrameFgColor,
    ottavaFrameBgColor,

    tabClef,

    tremoloWidth,
    tremoloBoxHeight,
    tremoloStrokeWidth,
    tremoloDistance,
    tremoloStyle,
    tremoloStrokeLengthMultiplier,
    tremoloNoteSidePadding,
    tremoloOutSidePadding,
    // TODO tremoloMaxBeamLength,

    linearStretch,
    crossMeasureValues,
    keySigNaturals,

    tupletMaxSlope,
    tupletOufOfStaff,
    tupletVHeadDistance,
    tupletVStemDistance,
    tupletStemLeftDistance,
    tupletStemRightDistance,
    tupletNoteLeftDistance,
    tupletNoteRightDistance,
    tupletBracketWidth,
    tupletDirection,
    tupletNumberType,
    tupletBracketType,
    tupletFontFace,
    tupletFontSize,
    tupletLineSpacing,
    tupletFontSpatiumDependent,
    tupletFontStyle,
    tupletColor,
    tupletAlign,
    tupletBracketHookHeight,
    tupletOffset,
    tupletFrameType,
    tupletFramePadding,
    tupletFrameWidth,
    tupletFrameRound,
    tupletFrameFgColor,
    tupletFrameBgColor,

    barreLineWidth,
    scaleBarlines,
    barGraceDistance,

    minVerticalDistance,
    ornamentStyle,
    spatium,

    autoplaceHairpinDynamicsDistance,

    dynamicsPlacement,
    dynamicsPosAbove,
    dynamicsPosBelow,

    dynamicsMinDistance,
    autoplaceVerticalAlignRange,

    textLinePlacement,
    textLinePosAbove,
    textLinePosBelow,
    textLineFrameType,
    textLineFramePadding,
    textLineFrameWidth,
    textLineFrameRound,
    textLineFrameFgColor,
    textLineFrameBgColor,

    systemTextLinePlacement,
    systemTextLinePosAbove,
    systemTextLinePosBelow,
    systemTextLineFrameType,
    systemTextLineFramePadding,
    systemTextLineFrameWidth,
    systemTextLineFrameRound,
    systemTextLineFrameFgColor,
    systemTextLineFrameBgColor,

    tremoloBarLineWidth,
    jumpPosAbove,
    markerPosAbove,

    defaultFontFace,
    defaultFontSize,
    defaultLineSpacing,
    defaultFontSpatiumDependent,
    defaultFontStyle,
    defaultColor,
    defaultAlign,
    defaultFrameType,
    defaultFramePadding,
    defaultFrameWidth,
    defaultFrameRound,
    defaultFrameFgColor,
    defaultFrameBgColor,
    defaultOffset,
    defaultOffsetType,
    defaultSystemFlag,
    defaultText,

    titleFontFace,
    titleFontSize,
    titleLineSpacing,
    titleFontSpatiumDependent,
    titleFontStyle,
    titleColor,
    titleAlign,
    titleOffset,
    titleOffsetType,
    titleFrameType,
    titleFramePadding,
    titleFrameWidth,
    titleFrameRound,
    titleFrameFgColor,
    titleFrameBgColor,

    subTitleFontFace,
    subTitleFontSize,
    subTitleLineSpacing,
    subTitleFontSpatiumDependent,
    subTitleFontStyle,
    subTitleColor,
    subTitleAlign,
    subTitleOffset,
    subTitleOffsetType,
    subTitleFrameType,
    subTitleFramePadding,
    subTitleFrameWidth,
    subTitleFrameRound,
    subTitleFrameFgColor,
    subTitleFrameBgColor,

    composerFontFace,
    composerFontSize,
    composerLineSpacing,
    composerFontSpatiumDependent,
    composerFontStyle,
    composerColor,
    composerAlign,
    composerOffset,
    composerOffsetType,
    composerFrameType,
    composerFramePadding,
    composerFrameWidth,
    composerFrameRound,
    composerFrameFgColor,
    composerFrameBgColor,

    lyricistFontFace,
    lyricistFontSize,
    lyricistLineSpacing,
    lyricistFontSpatiumDependent,
    lyricistFontStyle,
    lyricistColor,
    lyricistAlign,
    lyricistOffset,
    lyricistOffsetType,
    lyricistFrameType,
    lyricistFramePadding,
    lyricistFrameWidth,
    lyricistFrameRound,
    lyricistFrameFgColor,
    lyricistFrameBgColor,

    fingeringFontFace,
    fingeringFontSize,
    fingeringLineSpacing,
    fingeringFontSpatiumDependent,
    fingeringFontStyle,
    fingeringColor,
    fingeringAlign,
    fingeringFrameType,
    fingeringFramePadding,
    fingeringFrameWidth,
    fingeringFrameRound,
    fingeringFrameFgColor,
    fingeringFrameBgColor,
    fingeringOffset,

    lhGuitarFingeringFontFace,
    lhGuitarFingeringFontSize,
    lhGuitarFingeringLineSpacing,
    lhGuitarFingeringFontSpatiumDependent,
    lhGuitarFingeringFontStyle,
    lhGuitarFingeringColor,
    lhGuitarFingeringAlign,
    lhGuitarFingeringFrameType,
    lhGuitarFingeringFramePadding,
    lhGuitarFingeringFrameWidth,
    lhGuitarFingeringFrameRound,
    lhGuitarFingeringFrameFgColor,
    lhGuitarFingeringFrameBgColor,
    lhGuitarFingeringOffset,

    rhGuitarFingeringFontFace,
    rhGuitarFingeringFontSize,
    rhGuitarFingeringLineSpacing,
    rhGuitarFingeringFontSpatiumDependent,
    rhGuitarFingeringFontStyle,
    rhGuitarFingeringColor,
    rhGuitarFingeringAlign,
    rhGuitarFingeringFrameType,
    rhGuitarFingeringFramePadding,
    rhGuitarFingeringFrameWidth,
    rhGuitarFingeringFrameRound,
    rhGuitarFingeringFrameFgColor,
    rhGuitarFingeringFrameBgColor,
    rhGuitarFingeringOffset,

    stringNumberFontFace,
    stringNumberFontSize,
    stringNumberLineSpacing,
    stringNumberFontSpatiumDependent,
    stringNumberFontStyle,
    stringNumberColor,
    stringNumberAlign,
    stringNumberFrameType,
    stringNumberFramePadding,
    stringNumberFrameWidth,
    stringNumberFrameRound,
    stringNumberFrameFgColor,
    stringNumberFrameBgColor,
    stringNumberOffset,

    longInstrumentFontFace,
    longInstrumentFontSize,
    longInstrumentLineSpacing,
    longInstrumentFontSpatiumDependent,
    longInstrumentFontStyle,
    longInstrumentColor,
    longInstrumentAlign,
    longInstrumentOffset,
    longInstrumentFrameType,
    longInstrumentFramePadding,
    longInstrumentFrameWidth,
    longInstrumentFrameRound,
    longInstrumentFrameFgColor,
    longInstrumentFrameBgColor,

    shortInstrumentFontFace,
    shortInstrumentFontSize,
    shortInstrumentLineSpacing,
    shortInstrumentFontSpatiumDependent,
    shortInstrumentFontStyle,
    shortInstrumentColor,
    shortInstrumentAlign,
    shortInstrumentOffset,
    shortInstrumentFrameType,
    shortInstrumentFramePadding,
    shortInstrumentFrameWidth,
    shortInstrumentFrameRound,
    shortInstrumentFrameFgColor,
    shortInstrumentFrameBgColor,

    partInstrumentFontFace,
    partInstrumentFontSize,
    partInstrumentLineSpacing,
    partInstrumentFontSpatiumDependent,
    partInstrumentFontStyle,
    partInstrumentColor,
    partInstrumentAlign,
    partInstrumentOffset,
    partInstrumentFrameType,
    partInstrumentFramePadding,
    partInstrumentFrameWidth,
    partInstrumentFrameRound,
    partInstrumentFrameFgColor,
    partInstrumentFrameBgColor,

    dynamicsFontFace,
    dynamicsFontSize,
    dynamicsLineSpacing,
    dynamicsFontSpatiumDependent,
    dynamicsFontStyle,
    dynamicsColor,
    dynamicsAlign,
    dynamicsFrameType,
    dynamicsFramePadding,
    dynamicsFrameWidth,
    dynamicsFrameRound,
    dynamicsFrameFgColor,
    dynamicsFrameBgColor,

    expressionFontFace,
    expressionFontSize,
    expressionLineSpacing,
    expressionFontSpatiumDependent,
    expressionFontStyle,
    expressionColor,
    expressionAlign,
    expressionPlacement,
    expressionOffset,
    expressionFrameType,
    expressionFramePadding,
    expressionFrameWidth,
    expressionFrameRound,
    expressionFrameFgColor,
    expressionFrameBgColor,

    tempoFontFace,
    tempoFontSize,
    tempoLineSpacing,
    tempoFontSpatiumDependent,
    tempoFontStyle,
    tempoColor,
    tempoAlign,
    tempoSystemFlag,
    tempoPlacement,
    tempoPosAbove,
    tempoPosBelow,
    tempoMinDistance,
    tempoFrameType,
    tempoFramePadding,
    tempoFrameWidth,
    tempoFrameRound,
    tempoFrameFgColor,
    tempoFrameBgColor,
    tempoChangeLineWidth,
    tempoChangeLineStyle,

    metronomeFontFace,
    metronomeFontSize,
    metronomeLineSpacing,
    metronomeFontSpatiumDependent,
    metronomeFontStyle,
    metronomeColor,
    metronomePlacement,
    metronomeAlign,
    metronomeOffset,
    metronomeFrameType,
    metronomeFramePadding,
    metronomeFrameWidth,
    metronomeFrameRound,
    metronomeFrameFgColor,
    metronomeFrameBgColor,

    measureNumberFontFace,
    measureNumberFontSize,
    measureNumberLineSpacing,
    measureNumberFontSpatiumDependent,
    measureNumberFontStyle,
    measureNumberColor,
    measureNumberPosAbove,
    measureNumberPosBelow,
    measureNumberOffsetType,
    measureNumberVPlacement,
    measureNumberHPlacement,
    measureNumberAlign,
    measureNumberFrameType,
    measureNumberFramePadding,
    measureNumberFrameWidth,
    measureNumberFrameRound,
    measureNumberFrameFgColor,
    measureNumberFrameBgColor,

    mmRestShowMeasureNumberRange,
    mmRestRangeBracketType,

    mmRestRangeFontFace,
    mmRestRangeFontSize,
    mmRestRangeFontSpatiumDependent,
    mmRestRangeFontStyle,
    mmRestRangeColor,
    mmRestRangePosAbove,
    mmRestRangePosBelow,
    mmRestRangeOffsetType,
    mmRestRangeVPlacement,
    mmRestRangeHPlacement,
    mmRestRangeAlign,
    mmRestRangeFrameType,
    mmRestRangeFramePadding,
    mmRestRangeFrameWidth,
    mmRestRangeFrameRound,
    mmRestRangeFrameFgColor,
    mmRestRangeFrameBgColor,

    translatorFontFace,
    translatorFontSize,
    translatorLineSpacing,
    translatorFontSpatiumDependent,
    translatorFontStyle,
    translatorColor,
    translatorAlign,
    translatorOffset,
    translatorFrameType,
    translatorFramePadding,
    translatorFrameWidth,
    translatorFrameRound,
    translatorFrameFgColor,
    translatorFrameBgColor,

    systemTextFontFace,
    systemTextFontSize,
    systemTextLineSpacing,
    systemTextFontSpatiumDependent,
    systemTextFontStyle,
    systemTextColor,
    systemTextAlign,
    systemTextOffsetType,
    systemTextPlacement,
    systemTextPosAbove,
    systemTextPosBelow,
    systemTextMinDistance,
    systemTextFrameType,
    systemTextFramePadding,
    systemTextFrameWidth,
    systemTextFrameRound,
    systemTextFrameFgColor,
    systemTextFrameBgColor,

    staffTextFontFace,
    staffTextFontSize,
    staffTextLineSpacing,
    staffTextFontSpatiumDependent,
    staffTextFontStyle,
    staffTextColor,
    staffTextAlign,
    staffTextOffsetType,
    staffTextPlacement,
    staffTextPosAbove,
    staffTextPosBelow,
    staffTextMinDistance,
    staffTextFrameType,
    staffTextFramePadding,
    staffTextFrameWidth,
    staffTextFrameRound,
    staffTextFrameFgColor,
    staffTextFrameBgColor,

    rehearsalMarkFontFace,
    rehearsalMarkFontSize,
    rehearsalMarkLineSpacing,
    rehearsalMarkFontSpatiumDependent,
    rehearsalMarkFontStyle,
    rehearsalMarkColor,
    rehearsalMarkAlign,
    rehearsalMarkFrameType,
    rehearsalMarkFramePadding,
    rehearsalMarkFrameWidth,
    rehearsalMarkFrameRound,
    rehearsalMarkFrameFgColor,
    rehearsalMarkFrameBgColor,
    rehearsalMarkPlacement,
    rehearsalMarkPosAbove,
    rehearsalMarkPosBelow,
    rehearsalMarkMinDistance,

    repeatLeftFontFace,
    repeatLeftFontSize,
    repeatLeftLineSpacing,
    repeatLeftFontSpatiumDependent,
    repeatLeftFontStyle,
    repeatLeftColor,
    repeatLeftAlign,
    repeatLeftPlacement,
    repeatLeftFrameType,
    repeatLeftFramePadding,
    repeatLeftFrameWidth,
    repeatLeftFrameRound,
    repeatLeftFrameFgColor,
    repeatLeftFrameBgColor,

    repeatRightFontFace,
    repeatRightFontSize,
    repeatRightLineSpacing,
    repeatRightFontSpatiumDependent,
    repeatRightFontStyle,
    repeatRightColor,
    repeatRightAlign,
    repeatRightPlacement,
    repeatRightFrameType,
    repeatRightFramePadding,
    repeatRightFrameWidth,
    repeatRightFrameRound,
    repeatRightFrameFgColor,
    repeatRightFrameBgColor,

    frameFontFace,
    frameFontSize,
    frameLineSpacing,
    frameFontSpatiumDependent,
    frameFontStyle,
    frameColor,
    frameAlign,
    frameOffset,
    frameFrameType,
    frameFramePadding,
    frameFrameWidth,
    frameFrameRound,
    frameFrameFgColor,
    frameFrameBgColor,

    textLineFontFace,
    textLineFontSize,
    textLineLineSpacing,
    textLineFontSpatiumDependent,
    textLineFontStyle,
    textLineColor,
    textLineTextAlign,
    textLineSystemFlag,

    systemTextLineFontFace,
    systemTextLineFontSize,
    systemTextLineFontSpatiumDependent,
    systemTextLineFontStyle,
    systemTextLineColor,
    systemTextLineTextAlign,
    systemTextLineSystemFlag,

    glissandoFontFace,
    glissandoFontSize,
    glissandoLineSpacing,
    glissandoFontSpatiumDependent,
    glissandoFontStyle,
    glissandoColor,
    glissandoAlign,
    glissandoOffset,
    glissandoFrameType,
    glissandoFramePadding,
    glissandoFrameWidth,
    glissandoFrameRound,
    glissandoFrameFgColor,
    glissandoFrameBgColor,
    glissandoLineWidth,
    glissandoText,

    bendFontFace,
    bendFontSize,
    bendLineSpacing,
    bendFontSpatiumDependent,
    bendFontStyle,
    bendColor,
    bendAlign,
    bendOffset,
    bendFrameType,
    bendFramePadding,
    bendFrameWidth,
    bendFrameRound,
    bendFrameFgColor,
    bendFrameBgColor,
    bendLineWidth,
    bendArrowWidth,

    headerFontFace,
    headerFontSize,
    headerLineSpacing,
    headerFontSpatiumDependent,
    headerFontStyle,
    headerColor,
    headerAlign,
    headerOffset,
    headerFrameType,
    headerFramePadding,
    headerFrameWidth,
    headerFrameRound,
    headerFrameFgColor,
    headerFrameBgColor,

    footerFontFace,
    footerFontSize,
    footerLineSpacing,
    footerFontSpatiumDependent,
    footerFontStyle,
    footerColor,
    footerAlign,
    footerOffset,
    footerFrameType,
    footerFramePadding,
    footerFrameWidth,
    footerFrameRound,
    footerFrameFgColor,
    footerFrameBgColor,

    instrumentChangeFontFace,
    instrumentChangeFontSize,
    instrumentChangeLineSpacing,
    instrumentChangeFontSpatiumDependent,
    instrumentChangeFontStyle,
    instrumentChangeColor,
    instrumentChangeAlign,
    instrumentChangeOffset,
    instrumentChangePlacement,
    instrumentChangePosAbove,
    instrumentChangePosBelow,
    instrumentChangeMinDistance,
    instrumentChangeFrameType,
    instrumentChangeFramePadding,
    instrumentChangeFrameWidth,
    instrumentChangeFrameRound,
    instrumentChangeFrameFgColor,
    instrumentChangeFrameBgColor,

    stickingFontFace,
    stickingFontSize,
    stickingLineSpacing,
    stickingFontSpatiumDependent,
    stickingFontStyle,
    stickingColor,
    stickingAlign,
    stickingOffset,
    stickingPlacement,
    stickingPosAbove,
    stickingPosBelow,
    stickingMinDistance,
    stickingFrameType,
    stickingFramePadding,
    stickingFrameWidth,
    stickingFrameRound,
    stickingFrameFgColor,
    stickingFrameBgColor,

    figuredBassFontFace,
    figuredBassFontSize,
    figuredBassLineSpacing,
    figuredBassFontSpatiumDependent,
    figuredBassFontStyle,
    figuredBassColor,

    user1Name,
    user1FontFace,
    user1FontSize,
    user1LineSpacing,
    user1FontSpatiumDependent,
    user1FontStyle,
    user1Color,
    user1Align,
    user1Offset,
    user1OffsetType,
    user1FrameType,
    user1FramePadding,
    user1FrameWidth,
    user1FrameRound,
    user1FrameFgColor,
    user1FrameBgColor,

    user2Name,
    user2FontFace,
    user2FontSize,
    user2LineSpacing,
    user2FontSpatiumDependent,
    user2FontStyle,
    user2Color,
    user2Align,
    user2Offset,
    user2OffsetType,
    user2FrameType,
    user2FramePadding,
    user2FrameWidth,
    user2FrameRound,
    user2FrameFgColor,
    user2FrameBgColor,

    user3Name,
    user3FontFace,
    user3FontSize,
    user3LineSpacing,
    user3FontSpatiumDependent,
    user3FontStyle,
    user3Color,
    user3Align,
    user3Offset,
    user3OffsetType,
    user3FrameType,
    user3FramePadding,
    user3FrameWidth,
    user3FrameRound,
    user3FrameFgColor,
    user3FrameBgColor,

    user4Name,
    user4FontFace,
    user4FontSize,
    user4LineSpacing,
    user4FontSpatiumDependent,
    user4FontStyle,
    user4Color,
    user4Align,
    user4Offset,
    user4OffsetType,
    user4FrameType,
    user4FramePadding,
    user4FrameWidth,
    user4FrameRound,
    user4FrameFgColor,
    user4FrameBgColor,

    user5Name,
    user5FontFace,
    user5FontSize,
    user5LineSpacing,
    user5FontSpatiumDependent,
    user5FontStyle,
    user5Color,
    user5Align,
    user5Offset,
    user5OffsetType,
    user5FrameType,
    user5FramePadding,
    user5FrameWidth,
    user5FrameRound,
    user5FrameFgColor,
    user5FrameBgColor,

    user6Name,
    user6FontFace,
    user6FontSize,
    user6LineSpacing,
    user6FontSpatiumDependent,
    user6FontStyle,
    user6Color,
    user6Align,
    user6Offset,
    user6OffsetType,
    user6FrameType,
    user6FramePadding,
    user6FrameWidth,
    user6FrameRound,
    user6FrameFgColor,
    user6FrameBgColor,

    user7Name,
    user7FontFace,
    user7FontSize,
    user7LineSpacing,
    user7FontSpatiumDependent,
    user7FontStyle,
    user7Color,
    user7Align,
    user7Offset,
    user7OffsetType,
    user7FrameType,
    user7FramePadding,
    user7FrameWidth,
    user7FrameRound,
    user7FrameFgColor,
    user7FrameBgColor,

    user8Name,
    user8FontFace,
    user8FontSize,
    user8LineSpacing,
    user8FontSpatiumDependent,
    user8FontStyle,
    user8Color,
    user8Align,
    user8Offset,
    user8OffsetType,
    user8FrameType,
    user8FramePadding,
    user8FrameWidth,
    user8FrameRound,
    user8FrameFgColor,
    user8FrameBgColor,

    user9Name,
    user9FontFace,
    user9FontSize,
    user9LineSpacing,
    user9FontSpatiumDependent,
    user9FontStyle,
    user9Color,
    user9Align,
    user9Offset,
    user9OffsetType,
    user9FrameType,
    user9FramePadding,
    user9FrameWidth,
    user9FrameRound,
    user9FrameFgColor,
    user9FrameBgColor,

    user10Name,
    user10FontFace,
    user10FontSize,
    user10LineSpacing,
    user10FontSpatiumDependent,
    user10FontStyle,
    user10Color,
    user10Align,
    user10Offset,
    user10OffsetType,
    user10FrameType,
    user10FramePadding,
    user10FrameWidth,
    user10FrameRound,
    user10FrameFgColor,
    user10FrameBgColor,

    user11Name,
    user11FontFace,
    user11FontSize,
    user11LineSpacing,
    user11FontSpatiumDependent,
    user11FontStyle,
    user11Color,
    user11Align,
    user11Offset,
    user11OffsetType,
    user11FrameType,
    user11FramePadding,
    user11FrameWidth,
    user11FrameRound,
    user11FrameFgColor,
    user11FrameBgColor,

    user12Name,
    user12FontFace,
    user12FontSize,
    user12LineSpacing,
    user12FontSpatiumDependent,
    user12FontStyle,
    user12Color,
    user12Align,
    user12Offset,
    user12OffsetType,
    user12FrameType,
    user12FramePadding,
    user12FrameWidth,
    user12FrameRound,
    user12FrameFgColor,
    user12FrameBgColor,

    letRingFontFace,
    letRingFontSize,
    letRingLineSpacing,
    letRingFontSpatiumDependent,
    letRingFontStyle,
    letRingColor,
    letRingTextAlign,
    letRingHookHeight,
    letRingPlacement,
    letRingPosAbove,
    letRingPosBelow,
    letRingLineWidth,
    letRingLineStyle,
    letRingBeginTextOffset,
    letRingText,
    letRingFrameType,
    letRingFramePadding,
    letRingFrameWidth,
    letRingFrameRound,
    letRingFrameFgColor,
    letRingFrameBgColor,
    letRingEndHookType,

    palmMuteFontFace,
    palmMuteFontSize,
    palmMuteLineSpacing,
    palmMuteFontSpatiumDependent,
    palmMuteFontStyle,
    palmMuteColor,
    palmMuteTextAlign,
    palmMuteHookHeight,
    palmMutePlacement,
    palmMutePosAbove,
    palmMutePosBelow,
    palmMuteLineWidth,
    palmMuteLineStyle,
    palmMuteBeginTextOffset,
    palmMuteText,
    palmMuteFrameType,
    palmMuteFramePadding,
    palmMuteFrameWidth,
    palmMuteFrameRound,
    palmMuteFrameFgColor,
    palmMuteFrameBgColor,
    palmMuteEndHookType,

    fermataPosAbove,
    fermataPosBelow,
    fermataMinDistance,

    fingeringPlacement,

    articulationMinDistance,
    fingeringMinDistance,
    hairpinMinDistance,
    letRingMinDistance,
    ottavaMinDistance,
    palmMuteMinDistance,
    pedalMinDistance,
    repeatMinDistance,
    textLineMinDistance,
    systemTextLineMinDistance,
    trillMinDistance,
    vibratoMinDistance,
    voltaMinDistance,
    figuredBassMinDistance,
    tupletMinDistance,

    autoplaceEnabled,
    defaultsVersion,

    STYLES
    ///\}
};
END_QT_REGISTERED_ENUM(Sid)

//---------------------------------------------------------
//   VerticalAlignRange
//---------------------------------------------------------

enum class VerticalAlignRange {
    SEGMENT, MEASURE, SYSTEM
};

//---------------------------------------------------------
//   StyledProperty
///   \cond PLUGIN_API \private \endcond
//---------------------------------------------------------
struct StyledProperty {
    Sid sid;
    Pid pid;
};

typedef std::vector<StyledProperty> ElementStyle;

//---------------------------------------------------------
//   StyleDef
///   \cond PLUGIN_API \private \endcond
//---------------------------------------------------------
struct StyleDef
{
private:

    friend class MStyle;

    struct StyleValue {
        Sid _idx;
        const char* _name;         // xml name for read()/write()
        mu::engraving::PropertyValue _defaultValue;

    public:
        Sid  styleIdx() const { return _idx; }
        int idx() const { return int(_idx); }
        const char* name() const { return _name; }
        mu::engraving::P_TYPE valueType() const { return _defaultValue.type(); }
        const mu::engraving::PropertyValue& defaultValue() const { return _defaultValue; }
    };

    static const std::array<StyleValue, size_t(Sid::STYLES)> styleValues;
};
}

#endif // MU_ENGRAVING_STYLEDEF_H
